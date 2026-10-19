# CK2 Naval Battles — Project Status

This project prototypes fleet-versus-fleet battles in Crusader Kings II by
adapting CK2's existing type-1 combat machinery. It uses a version-guarded
native DLL; it does not patch `CK2game.exe`.

## Current state

- Naval encounters can be created when hostile fleets meet in a sea province.
- The prototype runs stock type-1 updates and routes defeated fleets away after
  combat. Battles have worked in-game, but occasional encounters still fail to
  start and need controlled testing.
- Fleets use the shared halfway movement lock.
- Embarked troops cannot receive new movement orders during their fleet's
  combat. If an army already has a route when combat starts, the prototype asks
  CK2 to force-cancel that route without detaching the army.
- AI fleet route avoidance is **not implemented** yet. The current research has
  not identified a confirmed AI-only route-selection hook, so no broad movement
  filter is enabled.
- The existing transport ship type is used; new ship classes are future work.

This remains a prototype. Runtime testing is required, and saves from battles
created by the prototype should be treated as disposable.

## Build and validation

The x64 RelWithDebInfo DLL and offline verifier are built under
`native/build/bin/`:

```powershell
& 'C:\Program Files\Microsoft Visual Studio\2022\Community\MSBuild\Current\Bin\MSBuild.exe' `
  native/build/ck2_naval.sln /m /p:Configuration=RelWithDebInfo `
  /t:ck2_naval,ck2_naval_verify /v:minimal
native/build/bin/ck2_naval_verify.exe CK2game.exe
```

The most recently verified DLL SHA-256 is
`15420d7ba1ba8087bb5d4b6607803b66b0213ac43e4b674b3ee2fdf774b9ef8b`.
The verifier accepts only the analyzed executable and checks all eight hook
signatures. The copied game executable is research input: never modify it or
point analysis scripts at the Steam installation.

For an in-game test, use a disposable, non-Ironman save and do not save after
prototype combat. Copy the new `ck2_naval.dll` beside the tested proxy, but keep
the game-folder `ck2_naval.ini` set to `manual_creation=1`. Check that:

1. Two hostile fleets entering the same sea province start a battle.
2. An already-moving embarked army stops when its fleet enters battle, remains
   aboard, and can move again after combat.
3. The loser retreats and the result window returns.

Exit without saving and preserve the new `ck2_naval.log` for diagnosis. See
[`native/README.md`](native/README.md) for detailed installation and test notes.

## Research notes

- [Implementation and runtime notes](docs/phase36-cargo-interruption-and-ai-avoidance.md)
- [Intermittent encounter evidence](docs/phase35-cargo-orders-and-intermittent-admission.md)
- [Native build and safety notes](native/README.md)
- [Full research index](README.md)

AI avoidance is the next unresolved implementation area. Research should first
locate a route-selection decision that is specific to AI-controlled fleets;
then avoidance can be added without blocking player-ordered engagements.
