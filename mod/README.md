# CK2 Naval interface package

This folder contains a full `combat.gui` override based on the locally
installed CK2 interface file. It adds a scaled longship symbol and
`galleys_total` count control to both attacker and defender rows. The existing
stock `GALLEYS` localization is reused.

To install, copy `CK2Naval.mod` and the `CK2Naval` folder into:

```text
%USERPROFILE%\Documents\Paradox Interactive\Crusader Kings II\mod
```

Enable **CK2 Naval** in the CK2 launcher. The native hook in
`native/build/bin/ck2_naval.dll` must also be installed through the existing
D3D9 proxy setup; the interface package alone cannot calculate the battle
count. No file in the Steam installation was modified.

The row has been structurally prepared but not launch-tested. If the game
rejects the override or the icon/count does not line up, remove the mod entry
and leave the Steam `interface/combat.gui` untouched; the project copy is the
only file to adjust.
