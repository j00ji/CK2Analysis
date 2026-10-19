
undefined4 * FUN_14081b7a0(longlong param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  float _X;
  float _X_00;
  undefined8 extraout_XMM0_Qa;
  double dVar20;
  uint *local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined4 local_88;
  undefined **local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  iVar19 = param_3;
  if (param_4 <= param_3) {
    iVar19 = param_4;
    param_4 = param_3;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x32c0) + (longlong)iVar19 * 8);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x32c0) + (longlong)param_4 * 8);
  iVar19 = *(int *)(lVar4 + 0x1b8);
  iVar2 = *(int *)(lVar5 + 0x1b8);
  if ((iVar19 < 0) || (iVar2 < 0)) {
    *param_2 = 0xfffff830;
  }
  else {
    iVar13 = *(int *)(*(longlong *)(param_1 + 0x3b40) +
                     (longlong)(iVar2 * *(int *)(param_1 + 0x3b38) + iVar19) * 4);
    if ((iVar13 < 1) && (iVar17 = -2000, iVar13 != -2000)) {
      local_80 = &PTR_FUN_1410669b0;
      local_78 = &PTR_FUN_1410669c0;
      local_70 = 0;
      local_68 = 0;
      local_a0 = (uint *)0x0;
      uStack_98 = 0;
      local_90 = 0;
      local_8c = 0;
      local_88 = 0;
      uVar1 = *(undefined2 *)(lVar4 + 0x50);
      uVar14 = FUN_140822200(param_1,*(undefined2 *)(lVar5 + 0x50));
      uVar15 = FUN_140822200(param_1,uVar1);
      cVar12 = FUN_1408cf780(extraout_XMM0_Qa,uVar15,uVar14,&local_a0);
      fVar11 = DAT_141164eec;
      fVar10 = DAT_141164be0;
      if (cVar12 != '\0') {
        iVar17 = 0;
        uVar9 = (uint)*(ushort *)(lVar4 + 0x50);
        puVar6 = local_a0;
        while (puVar6 != (uint *)0x0) {
          uVar3 = *puVar6;
          lVar18 = (longlong)(int)uVar3;
          puVar6 = *(uint **)(puVar6 + 4);
          lVar4 = *(longlong *)(param_1 + 0x32c0);
          lVar5 = *(longlong *)(lVar4 + (longlong)(int)uVar9 * 8);
          lVar7 = *(longlong *)(lVar4 + lVar18 * 8);
          iVar13 = (int)(short)(*(short *)(lVar5 + 0xa6) - *(short *)(lVar7 + 0xa6));
          iVar16 = (int)(short)(*(short *)(lVar5 + 0xa4) - *(short *)(lVar7 + 0xa4));
          dVar20 = (double)FUN_140e57a68((double)(iVar16 * iVar16 + iVar13 * iVar13));
          _X = (float)dVar20 * fVar11 + fVar10;
          if ((float)dVar20 < 0.0) {
            _X = floorf(_X);
          }
          _X_00 = ((float)(int)_X / fVar11) * fVar11 + fVar10;
          if ((float)(int)_X / fVar11 < 0.0) {
            _X_00 = floorf(_X_00);
          }
          iVar17 = iVar17 + (int)_X_00;
          *(int *)(*(longlong *)(param_1 + 0x3b40) +
                  (longlong)
                  (*(int *)(*(longlong *)(lVar4 + lVar18 * 8) + 0x1b8) * *(int *)(param_1 + 0x3b38)
                  + iVar19) * 4) = iVar17;
          *(int *)(*(longlong *)(param_1 + 0x3b40) +
                  (longlong)
                  (iVar19 * *(int *)(param_1 + 0x3b38) +
                  *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x32c0) + lVar18 * 8) + 0x1b8)) * 4
                  ) = iVar17;
          uVar9 = uVar3;
        }
      }
      *(int *)(*(longlong *)(param_1 + 0x3b40) +
              (longlong)(iVar2 * *(int *)(param_1 + 0x3b38) + iVar19) * 4) = iVar17;
      *(int *)(*(longlong *)(param_1 + 0x3b40) +
              (longlong)(iVar19 * *(int *)(param_1 + 0x3b38) + iVar2) * 4) = iVar17;
      *(undefined1 *)(param_1 + 0x3d40) = 1;
      puVar6 = local_a0;
      while (puVar6 != (uint *)0x0) {
        puVar8 = *(uint **)(puVar6 + 4);
        thunk_FUN_140e1c5e4(puVar6,0x20);
        puVar6 = puVar8;
      }
      local_a0 = (uint *)0x0;
      uStack_98 = 0;
      local_90 = 0;
      local_78 = &PTR_FUN_1410669c0;
      FUN_1400d4ca0(&local_78);
    }
    *param_2 = *(undefined4 *)
                (*(longlong *)(param_1 + 0x3b40) +
                (longlong)(iVar2 * *(int *)(param_1 + 0x3b38) + iVar19) * 4);
  }
  return param_2;
}

