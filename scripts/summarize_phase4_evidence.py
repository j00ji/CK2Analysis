"""Summarize retained static evidence; never load or execute target code."""
import hashlib
import json
from pathlib import Path

root = Path(__file__).resolve().parents[1]
artifacts = root / 'artifacts'
pe = json.loads((artifacts / 'pe-overview.json').read_text(encoding='utf-8-sig'))
binary = (root / 'CK2game.exe').read_bytes()
digest = hashlib.sha256(binary).hexdigest()
assert digest == pe['sha256']

def section_for(va):
    return next(s for s in pe['sections'] if int(s['va'], 16) <= va
                < int(s['va'], 16) + max(s['virtual_size'], s['raw_size']))

def raw_bytes(va, length):
    section = section_for(va)
    delta = va - int(section['va'], 16)
    assert delta + length <= section['raw_size']
    offset = section['raw_offset'] + delta
    return binary[offset:offset + length]

rows = []
for kind, base, phases in [('MORALE', 0x1417eae00, [None]),
                            ('ATTACK', 0x1417ead80, range(3)),
                            ('DEFENSE', 0x1417eacf0, range(3))]:
    for phase in phases:
        offset = 7 * 4 if phase is None else (7 * 3 + phase) * 4
        va = base + offset
        section = section_for(va)
        name = kind if phase is None else f"{['PHASE_SKIRMISH', 'PHASE_MELEE', 'PHASE_PURSUE'][phase]}_{kind}"
        rows.append({'key_from_traced_concatenation': f'GALLEYS_{name}',
                     'va': hex(va), 'base': hex(base), 'offset': hex(offset),
                     'section': section['name'],
                     'file_backed': va + 4 <= int(section['va'], 16) + section['raw_size'],
                     'loaded_value': None})
separator = raw_bytes(0x141061760, 2)
assert separator == b'_\0', separator
report = {'sha256': digest, 'method': 'PE section mapping plus retained Ghidra loop evidence',
          'loop_sources': ['p4-stat-initialization-listing.json', 'p4-stat-key-loops.json',
                           'p4-stat-names-rng-checksum.json'],
          'separator_va': '0x141061760', 'separator_bytes': separator.hex(),
          'rows': rows,
          'limit': 'Zero-filled image storage does not establish post-configuration values'}
(artifacts / 'phase4-stat-storage.json').write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')

lines = [f'Target SHA-256: {digest}', 'Bounded listing transcripts; complete source JSON remains authoritative.']
for path in sorted(artifacts.glob('p4-*.json')):
    if path.name.endswith('-request.json'):
        continue
    data = json.loads(path.read_text(encoding='utf-8-sig'))
    if data.get('mode') != 'listing':
        continue
    assert data['sha256'] == digest
    lines.append('\nSource: ' + path.name)
    for result in data['result']:
        lines.append(f"Requested {result['requested_address']} ({result['limit']} instructions)")
        lines.extend(f"{i['address']} {i['text']}" for i in result['instructions'])
(artifacts / 'phase4-listing-summary.txt').write_text('\n'.join(lines) + '\n', encoding='utf-8')
print(json.dumps({'target_unchanged': True, 'ship_bindings': len(rows),
                  'file_backed_bindings': sum(r['file_backed'] for r in rows)}))
