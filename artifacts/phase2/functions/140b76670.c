
void FUN_140b76670(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 == 0x6b) {
    FUN_1406da950(param_1 + 0x90,param_2 + 0x438);
    return;
  }
  if (param_3 != 0x29fd) {
    FUN_140c35600(param_2);
    return;
  }
  FUN_140ad0b40(param_1,param_2 + 0x438);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x234);
  return;
}

