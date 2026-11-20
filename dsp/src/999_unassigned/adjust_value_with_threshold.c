/* @k10d adjust_value_with_threshold @ 0x000d18ba
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Adjusts a short value based on a computed offset and threshold comparisons, storing the
 *   result in a global.
 * summary:
 *   The function reads a flag byte and several global variables. It calls
 *   compute_clamped_delta_value to compute a base value and FUN_000d1cf8 to compute an
 *   offset. It then divides the base value by 1, 2, or 4 depending on how the offset
 *   compares to a threshold constant. The result is stored in a global short variable. If
 *   the result is zero or meets other conditions, it updates additional globals and calls
 *   two other functions.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void adjust_value_with_threshold(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  
  uVar1 = _DAT_0003ce24;
  if (((DAT_0003ce05 & 1) != 0) && ((DAT_0003ce05 & 0x10) != 0)) {
    uVar7 = (uint)_DAT_0003cc6a;
    uVar5 = (uint)_DAT_0003ce18;
    if ((DAT_0003ce05 & 2) != 0) {
      if (_DAT_0003ce38 < 0) {
        uVar5 = uVar5 + (int)_DAT_0003ce38;
        if ((int)uVar5 < 0) {
          uVar5 = 0;
        }
      }
      else {
        uVar7 = 0;
      }
    }
    uVar3 = compute_clamped_delta_value(_DAT_0003ce30,uVar5);
    uVar6 = (ushort)uVar3;
    uVar1 = uVar6;
    if ((DAT_0003c128 & 0x40) == 0) {
      uVar2 = (uint)_DAT_0003ce1c;
      iVar4 = FUN_000d1cf8(uVar5,(uint)_DAT_0003ce30,uVar3);
      uVar5 = (uVar2 - uVar7) - iVar4;
      if (uVar2 - uVar7 < _DAT_0000005a) {
        iVar4 = 3;
      }
      else if (uVar5 + 5 < _DAT_0000005a) {
        iVar4 = 2;
      }
      else {
        iVar4 = 1;
      }
      _DAT_0003ce24 = (ushort)(uVar3 >> iVar4);
      if (((_DAT_0000005a <= uVar5) || (200 < _DAT_0003ce22)) ||
         (uVar1 = _DAT_0003ce24, _DAT_0003ce24 == 0)) {
        if ((DAT_0003ce05 & 2) == 0) {
          _DAT_0003ce36 = _DAT_0003ce30;
          _DAT_0003ce30 = uVar6;
        }
        else if (_DAT_0003ce38 < 0) {
          _DAT_0003ce38 = 0;
          _DAT_0003ce30 = uVar6;
        }
        DAT_0003ce05 = DAT_0003ce05 & 0xef;
        FUN_000cc5c6();
        FUN_000cc938();
        DAT_0003ce05 = DAT_0003ce05 | 2;
        uVar1 = _DAT_0003ce24;
      }
    }
  }
  _DAT_0003ce24 = uVar1;
  return;
}
