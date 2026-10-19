"""Retain bounded static follow-up evidence; no target loading or execution."""
import hashlib
import json
import os
from pathlib import Path
import re

root = Path(__file__).resolve().parents[1]
artifacts = root / 'artifacts'
binary = (root / 'CK2game.exe').read_bytes()
pe = json.loads((artifacts / 'pe-overview.json').read_text(encoding='utf-8-sig'))
digest = hashlib.sha256(binary).hexdigest()
assert digest == pe['sha256']

def string_at(va):
    section = next(s for s in pe['sections']
                   if int(s['va'], 16) <= va < int(s['va'], 16) + s['raw_size'])
    offset = section['raw_offset'] + va - int(section['va'], 16)
    raw = binary[offset:min(offset + 128, section['raw_offset'] + section['raw_size'])]
    assert b'\0' in raw
    return raw.split(b'\0', 1)[0].decode('ascii')

strings = {hex(va): string_at(va) for va in (0x14114a58c, 0x14109b7d8, 0x14109b7e8)}
excluded = {'artifacts', 'docs', 'ghidra', 'logs', 'runtime', 'scripts', '.git', '.agents', '.codex'}
data_files = []
for directory, names, files in os.walk(root):
    names[:] = [name for name in names if name not in excluded]
    for name in files:
        path = Path(directory) / name
        if path.suffix.lower() in {'.lua', '.mod', '.txt', '.csv', '.ck2', '.zip', '.7z'}:
            data_files.append(str(path.relative_to(root)))

# Candidate search only. Its selected matches are stack accesses in Ghidra.
section = next(s for s in pe['sections'] if s['name'] == '.text')
raw = binary[section['raw_offset']:section['raw_offset'] + section['raw_size']]
pattern = rb'[\x48-\x4f]\x8d[\x80-\xbf]\x40\x02\x00\x00'
matches = [int(section['va'], 16) + match.start() for match in re.finditer(pattern, raw)]
selected = [hex(va) for va in matches if 0x14077b000 <= va < 0x140791000]
report = {'sha256': digest, 'strings': strings,
          'workspace_data_candidates': sorted(data_files),
          'inventory_excluded_directories': sorted(excluded),
          'raw_candidate_search': {
              'pattern': 'REX.W LEA mod=10 with bytes 40 02 00 00; raw bytes, not instruction validation',
              'all_text_matches': len(matches),
              'selected_va_interval': ['0x14077b000', '0x140791000'],
              'selected_matches': selected,
              'disposition': 'Bounded Ghidra listing shows RBP stack addresses; no combat-hash consumer established',
              'source': 'p5-config-scope-hash-dispatch.json'},
          'scope': 'Local copied PE and bounded workspace inventory; no installed game files read'}
(artifacts / 'phase5-static-followup.json').write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')
lines = [f'Target SHA-256: {digest}', 'Bounded listings; source JSON is authoritative.']
for path in sorted(artifacts.glob('p5-*.json')):
    if path.name.endswith('-request.json'):
        continue
    data = json.loads(path.read_text(encoding='utf-8-sig'))
    if data.get('mode') != 'listing':
        continue
    assert data['sha256'] == digest
    lines.append('\nSource: ' + path.name)
    for result in data['result']:
        lines.append(f"Requested {result['requested_address']}; limit {result['limit']}")
        lines.extend(f"{i['address']} {i['text']}" for i in result['instructions'])
(artifacts / 'phase5-listing-summary.txt').write_text('\n'.join(lines) + '\n', encoding='utf-8')
print(json.dumps({'strings': strings, 'workspace_data_candidates': data_files,
                  'raw_candidates_selected': selected}))
