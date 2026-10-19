# Where can AI fleets avoid stronger hostile fleets?

**Status:** movement-command boundary mapped; AI decision boundary unresolved  
**Confidence:** high for command routing; low for AI caller roles  
**New Ghidra queries:** 3

## Finding

The previous strength filter ran at encounter admission and stopped battles,
including player-ordered arrivals. It has been removed from the source and
rebuilt DLL. The user's intended behavior is for AI fleets to avoid stronger
enemy fleets while selecting movement routes, while encounters remain enabled.

Saved movement notes establish that fleet movement uses route command executor
`0x140ba8980`, which resolves a unit/destination, computes a route through
`0x1408cebc0`, and applies it through `0x140ba1800`. The known hostility
look-ahead in movement follower updater `0x140ba5040` is army-only. New query
`p33-naval-route-command.json` confirms the route executor has no visible
enemy-strength comparison or AI/player source distinction.

The route executor is called from `0x14042da30`; its xrefs include
`0x140a76b50`, `0x140bab530`, `0x140bad790`, and `0x140baed50`. Function
`0x14042da30` ranks a supplied candidate-province list using `0x140ba10f0` and
issues a movement command to its selected candidate. The roles of those callers
and the candidate-generation policy are not established in this bounded pass.

## Build and limits

The rebuilt RelWithDebInfo DLL passes the supported executable hash and all
seven hook-signature checks. SHA-256:
`73c830ce2a9cf4a25dd8bcc60195266a3013b266851402bf535d95b7d9eb256e`.
The adjacent build INI retains `manual_creation=0`; keep the user's existing
INI with `manual_creation=1` when copying the DLL.

The current evidence does not justify a route hook yet. The next bounded trace
should identify which caller supplies the candidate list and whether it is
used by fleet AI; then enemy relation and relative GALLEYS strength can be
filtered before route selection.

## Next question

Should the next bounded trace follow the AI candidate-list caller `0x140bab530`
to establish whether it is the naval route decision point?
