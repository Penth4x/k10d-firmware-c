/* @k10d compute_signed_delta_and_store @ 0x000d3b68
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Computes a signed difference between two 16-bit values, applies a scaling lookup, and
 *   stores the result.
 * summary:
 *   The function reads two 16-bit values from DAT_0003ccb0/4 or DAT_0003ccba/6 based on bit
 *   2 of DAT_0003cbd4. It calculates the difference between these values and a third value
 *   from DAT_0003ccb2/8. If the difference is non-zero, it calls unsigned_divide with the
 *   difference shifted left by 7 bits. The result is added to or subtracted from a base
 *   value (DAT_0003cc95 * 0x100) depending on the sign of the difference, and the final
 *   result is stored in DAT_0003cbf0. Flags in DAT_0003cbd4 and DAT_0003cb80 are updated to
 *   indicate overflow or zero-difference conditions.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_signed_delta_and_store(void)

{
  ushort uVar1;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  ushort uVar2;
  
  uVar3 = _DAT_0003ccb0;
  uVar1 = _DAT_0003ccb4;
  uVar2 = _DAT_0003ccb2;
  if ((DAT_0003cbd4 & 4) != 0) {
    uVar3 = _DAT_0003ccba;
    uVar1 = _DAT_0003ccb6;
    uVar2 = _DAT_0003ccb8;
  }
  uVar5 = (uint)uVar1;
  uVar4 = (uint)uVar3;
  DAT_0003cbd4 = DAT_0003cbd4 & 0xe7;
  sVar8 = DAT_0003cc95 * 0x100;
  if (uVar4 == uVar5) {
    DAT_0003cbd4 = DAT_0003cbd4 | 0x10;
    iVar6 = 0;
    iVar7 = 0;
  }
  else if (uVar4 < uVar5) {
    iVar7 = uVar5 - uVar4;
    iVar6 = uVar5 - uVar2;
  }
  else {
    DAT_0003cbd4 = DAT_0003cbd4 | 8;
    iVar7 = uVar4 - uVar5;
    iVar6 = uVar4 - uVar2;
  }
  if (iVar7 != 0) {
    if (iVar6 == 0) {
      DAT_0003cb80 = DAT_0003cb80 | 0x40;
    }
    else {
      uVar4 = unsigned_divide(iVar7 << 7, __frv_reg_unset(5));
      if (uVar4 < 0x100) {
        if ((DAT_0003cbd4 & 8) == 0) {
          sVar8 = sVar8 + (short)uVar4;
        }
        else {
          sVar8 = sVar8 - (short)uVar4;
        }
      }
      else {
        DAT_0003cb80 = DAT_0003cb80 | 0x40;
      }
    }
  }
  _DAT_0003cbf0 = sVar8;
  return;
}
