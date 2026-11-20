/* @k10d compute_adjusted_value_000d0770 @ 0x000d0770
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Calculates a value by adding a scaled offset to a base, with the offset derived from a
 *   loop count and global variables.
 * summary:
 *   The function reads a base value from _DAT_0003f250 and adds a masked value from
 *   DAT_0003cfc7. If specific conditions on DAT_0003f255 and DAT_0003cf0e are met, it
 *   calculates a shift amount based on param_1, computes an offset using DAT_0003f254 and
 *   DAT_0003f255, and adds this to the base. If the result differs from _DAT_0003c010 and
 *   param_1 is non-zero, it calls write_byte_to_ram_and_call_two_routines with the lower 16
 *   bits of the result. The final computed value is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint compute_adjusted_value_000d0770(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)_DAT_0003f250 + (DAT_0003cfc7 & 0x7f);
  if ((DAT_0003f255 != 0) && ((DAT_0003cf0e & 0x10) == 0)) {
    iVar1 = 4;
    if (param_1 < 0x10) {
      param_1 = 0;
    }
    for (; 0x1f < param_1; param_1 = param_1 >> 1) {
      iVar1 = iVar1 + -1;
    }
    uVar2 = uVar2 + ((int)(((iVar1 * 8 - (param_1 >> 1 & 7)) + (uint)DAT_0003f254) *
                          (uint)DAT_0003f255) >> 3);
    if ((uVar2 != _DAT_0003c010) && (param_1 != 0)) {
      write_byte_to_ram_and_call_two_routines(0xe,uVar2 & 0xffff);
    }
  }
  return uVar2;
}
