/* @k10d FUN_000df418 @ 0x000df418
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000df418(void)

{
  uint8_t uVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  
  DAT_0003f362 = 4;
  DAT_0003f363 = 0xe0;
  _DAT_0003c81a = 0x180;
  _DAT_0003c81c = 0x180;
  _DAT_0003c81e = 0x180;
  set_bit_1_and_5_in_three_flags();
  dispatch_three_subcalls((int)_DAT_0003c81a,(int)_DAT_0003c81c,(int)_DAT_0003c81e);
  uVar3 = DAT_0003f38c;
  uVar2 = DAT_0003f38a;
  uVar1 = DAT_0003f388;
  DAT_0003f388 = 0x4e;
  DAT_0003f38a = 0x4e;
  DAT_0003f38c = 0x4e;
  FUN_000ddc7e();
  FUN_000d5642(5);
  do {
  } while ((DAT_00000005 & 4) == 0);
  do {
  } while ((DAT_00000005 & 4) != 0);
  DAT_0000000a = DAT_0000000a & 0x7f;
  dispatch_three_subcalls(0,0,0);
  DAT_0003f388 = uVar1;
  DAT_0003f38a = uVar2;
  DAT_0003f38c = uVar3;
  FUN_000ddc7e();
  return;
}
