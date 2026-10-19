"""Read bounded pointer windows from the copied PE; does not execute target code."""
import argparse
import hashlib
import json
from pathlib import Path
import struct

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument('addresses', help='Comma-separated preferred virtual addresses in hex')
parser.add_argument('--size', type=lambda s: int(s, 0), default=0xb0)
parser.add_argument('--output', type=Path, required=True)
args = parser.parse_args()
assert 0 < args.size <= 4096 and args.size % 8 == 0
root = Path(__file__).resolve().parents[1]
data = (root / 'CK2game.exe').read_bytes()
pe = json.loads((root / 'artifacts/pe-overview.json').read_text(encoding='utf-8-sig'))
digest = hashlib.sha256(data).hexdigest()
assert digest == pe['sha256']
tables = []
for address in args.addresses.split(','):
    start = int(address, 16)
    entries = []
    for slot in range(0, args.size, 8):
        cell = start + slot
        sec = next(s for s in pe['sections'] if int(s['va'], 16) <= cell
                   and cell + 8 <= int(s['va'], 16) + s['raw_size'])
        offset = sec['raw_offset'] + cell - int(sec['va'], 16)
        raw = data[offset:offset+8]
        entries.append({'slot': hex(slot), 'cell': hex(cell), 'file_offset': offset,
                        'bytes': raw.hex(), 'target': hex(struct.unpack('<Q', raw)[0])})
    tables.append({'start': hex(start), 'entries': entries})
args.output.parent.mkdir(parents=True, exist_ok=True)
args.output.write_text(json.dumps({'sha256': digest,
    'method': 'Static PE pointer-window read; table extent and meaning need code corroboration',
    'size': args.size, 'tables': tables}, indent=2) + '\n', encoding='utf-8')
for table in tables:
    print(table['start'], ' '.join(f"{r['slot']}={r['target']}" for r in table['entries']))
