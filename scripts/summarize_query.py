"""Export readable pseudocode from a retained CK2Query function result.

The JSON remains authoritative, including instructions and reference limits.
"""
import argparse
import json
from pathlib import Path

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument('input', type=Path)
parser.add_argument('--output', type=Path, default=Path('artifacts/phase2/functions'))
args = parser.parse_args()
data = json.loads(args.input.read_text(encoding='utf-8-sig'))
assert data['mode'] == 'function'
args.output.mkdir(parents=True, exist_ok=True)
for f in data['result']:
    if 'entry' not in f:
        print(f)
        continue
    code = f.get('pseudocode')
    if code:
        (args.output / (f['entry'] + '.c')).write_text(code.replace('\r\n', '\n'), encoding='utf-8')
    print(json.dumps({k: f.get(k) for k in ('entry', 'decompile_completed', 'decompile_error', 'instructions_truncated')}))
