
void FUN_140474ab0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 local_res10;
  longlong local_30;
  int local_28;
  longlong local_20 [3];
  
  local_res10 = param_2;
  uVar2 = FUN_14048c910(param_1,local_20,&local_res10);
  FUN_14048c870(uVar2,&local_30);
  if (local_20[0] != 0) {
    FUN_140db0bd0(local_20[0],0xfffffffe);
  }
  FUN_140db0780(local_30,0xffffd8f0,local_28);
  iVar1 = FUN_140db0f70(local_30,0xffffffff);
  FUN_140db0bd0(local_30,0xfffffffe);
  if (iVar1 == 3) {
    fVar3 = (float)FUN_14048ca00(&local_30);
    *param_3 = (int)fVar3;
  }
  if ((local_30 != 0) && (local_28 != -2)) {
    FUN_140db2650(local_30,0xffffd8f0,local_28);
  }
  return;
}

