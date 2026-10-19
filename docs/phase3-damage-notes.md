# Phase 3: battle update and damage investigation

This is a chronological evidence record. Later follow-up sections supersede earlier open questions. The final sections establish channel names, morale writes, casualty formulas, and all-eight-category attack/defense paths; runtime coefficient values and complete modifier semantics remain unresolved.

Date: 2026-10-17. Local static analysis only. Source binary SHA-256:
`cc2d65b51d9099b3d632fe3269fa647aaf7c00fcb00cc0240adbaa8e6bbbb75e`.

Evidence: [p3-battle-lifecycle.json](../artifacts/p3-battle-lifecycle.json),
entry `0x1403a6300`, and [readable pseudocode](../artifacts/phase3/functions/1403a6300.c).
Names such as side, flank, update, and damage below are analyst interpretations
unless explicitly corroborated by strings or previous class construction.

## Update ordering

`FUN_1403a6300` accesses two side objects through battle `+0x10/+0x18`.
It invokes a virtual method at side vtable `+0x40` with the side, opposing
side, and battle, first for one side at `0x1403a67de`, then for the other at
`0x1403a67f1`. It then performs a fixed three-record aggregation, with
stride `0xc8` (decimal 200), and invokes a helper on each opposing record.

The observed numeric data flow, retaining unknown field names:

```c
// For each side, after side virtual+0x40 calls:
for (i = 0; i < 3; ++i) {
    destination = i32(side + 0xc4 + i*0xc8);
    routed0[destination] += i32(side + 0xe0 + i*0xc8) * scale / 1000;
    routed1[destination] += i32(side + 0xe4 + i*0xc8) * scale / 1000;
    i32(side + 0x104 + i*0xc8) = 0;
}
for (i = 0; i < 3; ++i) {
    if (routed0[i] > 0)
        FUN_1403a05e0(opposingSide + 0x48 + i*0xc8,
                      &routed0[i], &routed1[i]);
}
```

This is a simplified transcription; the two sides use separate arrays and
potentially different scale values. Default scale is 1000; combat-type
virtual `+0x60 == 3` and virtual predicate `+0x48` can select other globals.
The calls to `0x1403a05e0` are at `0x1403a69ff` and `0x1403a6a33`.
The fixed three records strongly support a three-flank combat model.
The exact distinction between the two routed values needs helper inspection;
they should not yet be labeled casualties versus morale from arithmetic alone.

Later in the same update, bilateral helper ordering is:

| Call addresses | Helper and side order |
|---|---|
| `0x1403a7508`, `0x1403a7517` | `0x1403a56a0`, side A/B then B/A |
| `0x1403a7526`, `0x1403a7535` | `0x1403a3240`, side A/B then B/A |
| `0x1403a753f`, `0x1403a7549` | `0x1403a5470`, side A then B |
| `0x1403a7c41` | `0x1403a8bb0(battle)` |

`0x1403a5470` also executes before routing, at `0x1403a67f9/0x1403a6803`.
Its role may be recomputing side aggregates, but this remains unconfirmed
pending its body. The decompiler exposes an opaque XMM-related `uVar19`
argument for several helpers. Instruction evidence places the side in RDX
for `0x1403a5470`, and the two sides in RDX/R8 for `0x1403a56a0`;
do not silently replace these with a conventional first-argument signature.

After the final helper, virtual battle `+0x88` is tested. Nonzero returns 1;
otherwise the signed 32-bit battle `+0x38` counter increments and returns 0.
The update contains additional early exit conditions, political/ownership
checks, and events; this note does not claim its simplified ordering covers
every branch.

## Reuse constraints already visible

The update couples both sides to exactly three contiguous records, their
leaders, shared unit/subunit representations, and combat-type switches.
Arithmetic helpers may be reusable, but passing fleets to the existing
entry points is not sufficient evidence of compatibility.

In particular, separately inspected `0x1403a53c0` first requires unit
virtual `+0x68` (the previously resolved army predicate), obtains its army
pointer via `+0x50`, and rejects a nonnull army `+0x230` transport pointer.
Thus this observed battle-joining path explicitly requires an unembarked
army. This constraint is independent of whether the later arithmetic can
operate on the common subunit amount arrays.

## Outstanding evidence

- Resolve side virtual `+0x40`: this produces the values routed into opponents.
- Inspect `0x1403a05e0`: this receives each flank's two incoming values.
- Classify bilateral helpers `0x1403a56a0`, `0x1403a3240`, `0x1403a5470`.
- Inspect `0x1403a8bb0` and battle virtual `+0x88` for end-of-tick/end-battle behavior.
- Trace actual troop amount and morale writes before claiming a complete
  casualty/morale formula or naval compatibility.

## Follow-up: helper roles resolved

Evidence: [p3-damage-registry.json](../artifacts/p3-damage-registry.json),
entries named below. These refine the earlier tentative interpretations.

`0x1403a05e0(flank, incoming0, incoming1)` obtains the flank's eight-category
strength summary from `0x14039cbf0` at `0x1403a062a`. When the sum `S`
and incoming0 are positive, it computes two integer rates:

```c
rate0 = incoming0 * 1000 / S;
rate1 = incoming1 * 1000 / S;
for (subunit in flank.vector_at_0x80_0x88) {
    losses = FUN_140a2dd60(subunit, temporary, &rate0, &rate1, flank);
    // Updates eight flank bookkeeping entries and integer loss counter.
}
```

The main call is at `0x1403a0742`. When global `DAT_1416e2638 > 0`,
it computes an additional rate using the summed returned losses, that
global, and the original `S`, and calls the same subunit routine with
zero first rate at `0x1403a0825`. This is evidence for a loss-derived
second-channel feedback effect; identifying it specifically as morale
requires inspecting the subunit writer. This function has a Ghidra
type-propagation warning; the unusual stack expressions and some
bookkeeping aliasing should not be treated as reliable recovered types.

The bilateral helpers govern flank state and opponent selection:

| Function | Confirmed behavior | Interpretation / confidence |
|---|---|---|
| `0x1403a5470` | For each of three flank records, examines its target on the other side, synchronizes state at flank `+0xb4`, resets flags/counters, and calls `0x14039cf80` on changed records | Phase/target-state synchronization, high; specific phase labels unresolved |
| `0x1403a3240` | Visits three records, checks active predicates and state value 2, searches alternate opposing records, writes flank `+0x7c` target index and adjusts phase/flags | Flank retargeting, high |
| `0x1403a56a0` | Calls `0x1403a0c50` at `0x1403a5707`; on success with a currently targeting active opponent, changes state to 2 and sets flag; then can change opposing records through a random `%100` comparison with script-modified chance | Collapse/pursuit transition candidate, medium until predicate and enum values are classified |
| `0x1403a8bb0` | Scans both side unit lists, sums eight categories through `0x140ba47e0`, de-duplicates units with sum exactly zero, passes them to `0x140786dc0(global, unit, 0)` at `0x1403a8d9f`, then invokes global virtual `+0x18` | Depleted-unit cleanup, high for scan/dispatch; final deletion semantics need callee inspection |

The earlier possible aggregate interpretation of `0x1403a5470` is superseded:
its important effect is state synchronization. `0x1403a8bb0` is not itself
the winner-selection function. The caller checks battle virtual `+0x88`
after this cleanup.

The side constructor `0x1403a1230` explicitly constructs **three objects
of size 200** starting at side `+0x48`, initializes indices 0/1/2 at
side `+0xc0/+0xc4` with the same stride, and stores a battle backpointer
inside each record. This confirms that the fixed-three-record interpretation
is grounded in both construction and update, not an incidental loop bound.

## Follow-up: damage channels and direct morale write

Evidence: [p3-damage-writers-manager.json](../artifacts/p3-damage-writers-manager.json),
entries `0x14039d7d0`, `0x140a2dd60`, `0x1403a0c50`, `0x14039cb40`.

`0x14039d7d0` explicitly labels its first output as `DAMAGE` and second
as `MORALE_DAMAGE` in the `FLANK_DAMAGE_FINAL` tooltip path (string loads
at `0x14039e262/0x14039e278`). This independently identifies the two
channels routed by the battle update. Its main computation calls
`0x140a2d950` per participating subunit at `0x14039da0b`, sums the two
outputs with optional participation scaling, applies a tactic-match factor
(default 1000), and conditionally applies a factor associated with the
`FLANKING_BONUS` display. If flank byte `+0xc0` is nonzero, both outgoing
values become zero. Leader, tactic, phase, flank state, and participation
therefore affect the output; there is no single isolated attack-minus-defense
formula established by this function.

`0x140a2dd60` is the subunit damage receiver. The second incoming rate
changes subunit signed 32-bit `+0x40`: it subtracts a computed value at
`0x140a2e108`, then clamps the result to `[0,1000]` at
`0x140a2e110/0x140a2e11d`. Given the labeled incoming channel, this
establishes `subunit+0x40` as normalized morale with high confidence.
It also retroactively identifies the Phase 2 embark/disembark clamp to 500
as a morale cap, rather than an unidentified subunit statistic.

The morale arithmetic includes incoming morale rate, the sum of all eight
current amount categories, mitigation accumulated from leader/owner contexts,
global `DAT_1416e2b18`, and a denominator produced by `0x140848690`.
Each fixed-point division truncates separately; exact arithmetic should
retain that order. A faithful partial transcription is:

```c
T = sum_i32(subunit + 0xa8, 8);
mitigationScale = max(1000 - accumulatedModifier, 0);
v = incomingMoraleRate * T / 1000;
v = v * mitigationScale / 1000;
v = v * i32(0x1416e2b18) / 1000;
if (normalizer != 0) {
    delta = v * 1000 / normalizer;
    i32(subunit+0x40) = clamp(i32(subunit+0x40) - delta, 0, 1000);
}
```

This omits the modifier-building logic and overflow-width branch details;
the saved pseudocode retains those. `normalizer` is an analyst placeholder
for the value recomputed through `0x140848690`, not a proven troop count.
After morale, `0x140a2dd60` calls `0x140848850` at `0x140a2e172`, passing
the shared amount object at subunit `+0x98`, incoming first-channel rate,
stat data, phase, and damage-reduction factor. Actual per-category casualty
writes must be established in that callee before claiming the casualty formula.

`0x1403a0c50` obtains a flank metric through `0x1403a0a10`. For battle type
3, collapse requires that metric to equal zero. Other types compare
`metric * 100000 / 1000` against a script-evaluated threshold from
`DAT_1416e23d0+0xf0`. The metric is plausibly flank morale, but its helper
and threshold registration require direct evidence before naming it conclusively.

`0x14039cb40` considers a flank nonempty when any member has a nonzero
current amount in **any of eight categories**, including the eighth at
subunit `+0xc4` identified as ship amount. The output participation sums also
include eight categories. This supports common storage, but does not establish
meaningful ship attack/defense coefficients or acceptance by army-only battle
admission paths.

## Follow-up: casualty writes and weighted flank morale

Evidence: [p3-formulas-removal.json](../artifacts/p3-formulas-removal.json),
entries `0x140848850`, `0x140848690`, `0x1403a0a10`, `0x140a2d950`.

`0x140848850` iterates indices 0 through 7 and directly subtracts a computed
loss from current amount `amountObject+0x10+4*i`. Its caller passes
`subunit+0x98`, so the mutated range is subunit `+0xa8..+0xc4`, including
the ship-amount slot. The returned summary records the per-category losses.
A simplified transcription, retaining the observed zero-divisor behavior:

```c
for (i = 0; i < 8; ++i) {
    n = i32(amountObject+0x10+4*i);
    if (n <= 0) continue;
    weightedDefense = FUN_140847fd0(amountObject, i, statInputs, phase);
    d = max(weightedDefense * 1000 / n, 100);
    if (defenseScale != 1000) d = defenseScale * d / 1000;
    loss = (d == 0) ? -1 : ((damageRate * n / 1000) * 1000 / d);
    loss = min(loss, n);
    i32(amountObject+0x10+4*i) = n - loss;
    i32(outputLossSummary+0x10+4*i) += loss;
}
```

`weightedDefense` and `defenseScale` are semantic working names; the
coefficient-producing helper remains to be inspected. The actual helper
uses output pointers and additional stat arguments; this transcription
preserves its role, not its exact recovered signature. Arithmetic is signed
integer with intermediate 64-bit multiplication and truncating division.
The observed `d == 0` branch yields -1, rather than a guessed safe clamp;
the conditions under which that branch is reachable are unproven.

The normalizer helper `0x140848690` likewise iterates all eight categories,
accumulating nonnegative products of amount, category-specific base
coefficient, and modifier scale. Thus the morale denominator is a
stat-weighted total, not simply the number of soldiers. Its precise stat
registration and custom-category handling remain outside this pass.

`0x1403a0a10` confirms the metric used by the collapse predicate:

```c
weighted = 0;
total = 0;
for (subunit in flank.vector_at_0x80_0x88) {
    strength = sum_i32(subunit+0xa8, 8);
    total += strength;
    weighted += i32(subunit+0x40) * strength / 1000;
}
flankMorale = total == 0 ? 0 : weighted * 1000 / total;
```

This establishes strength-weighted normalized flank morale, including
integer rounding at each subunit. Combined with the earlier caller,
`0x1403a0c50` is a morale-collapse predicate, with the exact threshold
evaluated through script settings for non-type-3 combats.

`0x140a2d950` produces outgoing subunit damage via `0x140848320`, scales
that damage by leader/owner-context modifiers, copies it into the morale
channel, then separately scales morale damage. It checks subunit virtual
`+0x48` first; false zeros both outputs. For the concrete shared subunit
class built by `0x140a2a420`, raw PE vtable cell `0x1410fba88`
(`0x1410fba40+0x48`, file offset 17804936) points to `0x1400ae550`,
the already verified `mov al,1; ret` stub. This specific virtual gate
does not discriminate army versus fleet for that concrete subunit class.

Still unresolved: `0x140848320` outgoing per-category coefficients and
`0x140847fd0` incoming-defense coefficients, especially whether the eighth
category has meaningful ship values. Common amount mutation and nonempty
tests prove storage compatibility only; they do not establish functional
naval combat or safe battle integration.

## Configuration names corroborating arithmetic

Evidence: [p3-config-and-stub-listing.json](../artifacts/p3-config-and-stub-listing.json)
and [readable bindings](../artifacts/p3-config-bindings.txt).

| Global | Registration evidence | Consequence |
|---|---|---|
| `0x1416e2b18` | Pointer load `0x14048091d`, `MORALELOSS_FACTOR` string load `0x140480924` | Names the global multiplier in the direct morale calculation |
| `0x1416e2b4c` | Pointer load `0x140480978`, `ATTACK_TO_DAMAGE_MULT` string load `0x14048097f` | Outgoing attack-to-damage multiplier lead |
| `0x1416e2638` | Pointer load `0x14048459a`, `DEATH_MORALE_DAMAGE` string load `0x1404845a1` | Confirms the loss-derived additional morale channel in `0x1403a05e0` |
| `0x1416e2670` | Pointer load `0x1404808c2`, `MORALE_COLLAPSE_THRESHOLD` string load `0x1404808c9` | Registered setting exists; its direct use by the script threshold evaluator has not been established |

These are configuration bindings, not observations of loaded runtime values.
The collapse predicate's script-evaluated threshold must not be silently
equated with the last global merely because its setting name matches.

## Final follow-up: outgoing attack and incoming defense include category 7

Evidence: [category math](../artifacts/p3-scheduler-category-math.json), [final contracts](../artifacts/p3-final-contracts.json), [subunit virtual gate](../artifacts/phase3-subunit-vtable.json), and [static modifier-index arrays](../artifacts/phase3-category-index-tables.json). Confidence: high for loop coverage, indices, and arithmetic; loaded ship coefficients remain unknown.

`0x140848320` iterates all eight current-amount slots. For each positive amount, it calls `0x140847de0`, accumulates the result, and applies owner/leader-context category modifiers. Category 6 has special subtype handling; category 7 is not excluded. The accumulated total is modified inside the loop, so an isolated sum-of-attacks formula would omit ordering effects.

`0x140847de0` produces per-category outgoing attack. For ordinary categories, its base coefficient is indexed at `0x1417ead80 + 4*(category*3 + phase)`, with modifiers selected through the eight-entry table at `0x1410fbb78`. A special modifier index `0x4e` uses a custom subtype's phase coefficients instead. Simplified ordinary-category arithmetic, retaining truncation order:

```c
weightedAttack = baseAttack[category][phase] * amount / 1000;
weightedAttack = weightedAttack * (1000 + accumulatedModifiers) / 1000;
if (weightedAttack < 0) return 0;
return ATTACK_TO_DAMAGE_MULT * weightedAttack / 1000;
```

`0x140847fd0`, used by the casualty writer, uses corresponding defense coefficients at `0x1417eacf0 + 4*(category*3 + phase)` and modifier indices at `0x1410fbb98`. Special index `0x4f` redirects to custom subtype data. It multiplies amount, defense coefficient, and accumulated modifier scale with separate divisions by 1000, then clamps a negative result to zero. This closes the previously unresolved `weightedDefense` input in the casualty formula above.

Together these establish that category 7, the stored ship quantity, reaches attack, defense, morale-weighting, and casualty arithmetic structurally. They do **not** establish nonzero/meaningful loaded ship statistics, naval tactics, valid fleet side construction, or successful fleet battle execution. The coefficient arrays are runtime state; their loaded values were not observed. Static modifier-index bytes must not be presented as attack/defense values.

`0x1404748c0` is the separate fixed-point configuration reader used by most listed combat multipliers. It reads a numeric value, applies scale/bias constants and negative rounding, then writes an integer. `MIN_COMBAT_DAYS` uses the integer reader `0x140474ab0` instead. No default values are inferred from either binding.

The direct damage/morale writer confirms Phase 2's component `+0x40` clamp to 500 is a normalized-morale cap. Complete balance equations would still require the modifier builders, tactic selection, external configuration/scripts, and all phase transitions; the pseudocode here intentionally preserves those boundaries.
