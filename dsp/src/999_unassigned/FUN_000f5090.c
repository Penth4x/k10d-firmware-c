/* @k10d FUN_000f5090 @ 0x000f5090
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t FUN_000f5090(void)

{
  short sVar2;
  uint32_t uVar1;
  
  if (DAT_0003c3ac == '\0') {
    sVar2 = (short)(DAT_0003c48a + 2 >> 2) + -9;
  }
  else {
    sVar2 = (ushort)(DAT_0003c48a >> 3) * 3 + (ushort)(byte)(&DAT_000fc8f0)[DAT_0003c48a & 7] +
            -0x11;
  }
  uVar1 = clamp_value_to_range_000d9ac0((int)sVar2,0,0xe);
  return uVar1;
}
