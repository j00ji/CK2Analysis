"""Verify retained Phase 4 artifacts; report analysis limits separately from integrity failures."""
import datetime
import hashlib
import json
from pathlib import Path
import re

root = Path(__file__).resolve().parents[1]
expected = 'cc2d65b51d9099b3d632fe3269fa647aaf7c00fcb00cc0240adbaa8e6bbbb75e'
digest = hashlib.sha256((root / 'CK2game.exe').read_bytes()).hexdigest()
failures, limitations, queries, functions, successful, caps, warnings = [], [], [], [], set(), set(), []
if digest != expected:
    failures.append('Target executable identity changed')
for path in sorted((root / 'artifacts').glob('p4-*.json')):
    if path.name.endswith('-request.json'):
        continue
    raw = path.read_bytes()
    data = json.loads(raw.decode('utf-8-sig'))
    if data.get('sha256') != expected:
        failures.append(f'Target hash mismatch in {path.name}')
    queries.append({'file': path.name, 'sha256': hashlib.sha256(raw).hexdigest(),
                    'bytes': len(raw), 'mode': data.get('mode')})
    if data.get('mode') != 'function':
        continue
    if len(data['result']) != len(data['query'].split(',')):
        failures.append(f'Request/result count mismatch in {path.name}')
    for result in data['result']:
        entry = result.get('entry', result.get('requested_address'))
        functions.append(entry)
        if not result.get('decompile_completed'):
            limitations.append({'artifact': path.name, 'address': entry,
                                'reason': result.get('error', result.get('decompile_error'))})
        else:
            successful.add(entry)
            export = root / 'artifacts/phase4/functions' / f'{entry}.c'
            if not export.exists():
                failures.append(f'Missing readable export for {entry}')
            elif export.read_text(encoding='utf-8-sig').strip() != result.get('pseudocode', '').replace('\r\n', '\n').strip():
                failures.append(f'Readable export differs from authoritative pseudocode for {entry}')
            if 'WARNING:' in result.get('pseudocode', ''):
                warnings.append({'artifact': path.name, 'address': entry,
                                 'warnings': re.findall(r'/\* WARNING:.*?\*/', result['pseudocode'], re.S)})
        if result.get('instructions_truncated'):
            limitations.append({'artifact': path.name, 'address': entry, 'reason': 'Instruction export capped'})
        if result.get('incoming_references', {}).get('truncated'):
            caps.add(entry)
docs = [root / 'README.md', *sorted((root / 'docs').glob('*.md'))]
links = 0
for path in docs:
    for target in re.findall(r'\[[^\]]*\]\(([^)]+)\)', path.read_text(encoding='utf-8-sig')):
        if target.startswith(('https:', 'http:', 'mailto:', '#')):
            continue
        target = target.split('#')[0].strip('<>')
        links += 1
        destination = (path.parent / target).resolve()
        if destination == (root / 'artifacts/phase4-verification.json').resolve():
            continue  # This report is written below, including on its first run.
        if not destination.exists():
            failures.append(f'Missing local link in {path.name}: {target}')
support = []
for path in sorted((root / 'artifacts').glob('phase4-*.json')):
    if path.name == 'phase4-verification.json':
        continue
    raw = path.read_bytes()
    data = json.loads(raw.decode('utf-8-sig'))
    if data.get('sha256') != expected:
        failures.append(f'Target hash mismatch in {path.name}')
    support.append({'file': path.name, 'sha256': hashlib.sha256(raw).hexdigest()})
locks = [str(p.relative_to(root)) for p in (root / 'ghidra').rglob('*')
         if p.is_file() and (p.name.endswith('.lock') or '.lock.' in p.name)]
if locks:
    failures.append('Ghidra project lock files remain')
for name in ('CK2.gpr', 'CK2.rep'):
    if not (root / 'ghidra' / name).exists():
        failures.append(f'Missing persistent project {name}')
report = {'generated_utc': datetime.datetime.now(datetime.timezone.utc).isoformat(),
          'target_sha256': digest, 'target_unchanged': digest == expected,
          'query_count': len(queries), 'function_requests': len(functions),
          'unique_function_addresses_requested': len(set(functions)),
          'unique_successful_decompilations': len(successful),
          'requests_without_successful_decompilation': sorted(set(functions) - successful),
          'retained_analysis_limitations': limitations, 'incoming_reference_caps': sorted(caps),
          'decompiler_warnings': warnings, 'queries': queries, 'support_artifacts': support,
          'markdown_files_checked': len(docs), 'local_links_checked': links,
          'project_locks': locks, 'integrity_failures': failures,
          'scope': 'Static artifact identity/completeness checks; not runtime or semantic validation'}
(root / 'artifacts/phase4-verification.json').write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')
print(json.dumps({k: v for k, v in report.items() if k not in ('queries', 'decompiler_warnings', 'support_artifacts')}, indent=2))
raise SystemExit(bool(failures))
