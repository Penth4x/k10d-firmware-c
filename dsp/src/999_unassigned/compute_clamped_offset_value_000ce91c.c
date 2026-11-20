/* @k10d compute_clamped_offset_value_000ce91c @ 0x000ce91c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Computes a signed 8-bit value from two pointer differences and a state flag, clamping
 *   the result to [-128, 127].
 * summary:
 *   The function calculates a difference between two globals (_DAT_0003f24e and
 *   _DAT_0003cd78), adjusting the sign based on DAT_0003f1b2. It calls unsigned_divide with
 *   a shifted difference and a parameter derived from DAT_0003f1b3/b4/b5. The final result
 *   is clamped to the signed 8-bit range, stored in DAT_0003ce88, and returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint compute_clamped_offset_value_000ce91c(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (DAT_0003f1b2 == 0) {
    iVar1 = (uint)_DAT_0003f24e - (uint)_DAT_0003cd78;
    uVar2 = 0x2a;
  }
  else {
    uVar2 = 1;
    iVar1 = (uint)_DAT_0003cd78 - (uint)_DAT_0003f24e;
  }
  if (iVar1 < 0) {
    iVar1 = (int)(short)-(short)iVar1;
    if (DAT_0003f1b2 != 0) {
      uVar2 = (uint)DAT_0003f1b3;
      iVar3 = (int)(short)(uVar2 * 3 >> 1);
      if (iVar3 < iVar1) {
        iVar1 = iVar1 - iVar3;
        uVar2 = (uint)DAT_0003f1b2;
        iVar3 = 0;
      }
      else {
        iVar3 = 0x19;
      }
    }
    iVar1 = unsigned_divide(iVar1 << 4,uVar2);
    uVar2 = iVar3 - iVar1;
    if ((int)uVar2 < -0x80) {
      uVar2 = 0x80;
    }
  }
  else {
    if (DAT_0003f1b2 != 0) {
      uVar2 = (uint)DAT_0003f1b4;
      if (iVar1 < (short)(ushort)DAT_0003f1b4) {
        iVar3 = 0x19;
      }
      else {
        iVar1 = iVar1 - (short)(ushort)DAT_0003f1b4;
        uVar2 = (uint)DAT_0003f1b5;
        iVar3 = 0x28;
      }
    }
    iVar1 = unsigned_divide(iVar1 << 4,uVar2);
    uVar2 = iVar3 + iVar1;
    if (0x7f < (int)uVar2) {
      uVar2 = 0x7f;
    }
  }
  DAT_0003ce88 = (char)uVar2;
  return uVar2 & 0xff;
}
