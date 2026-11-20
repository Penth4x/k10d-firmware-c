/* @k10d step_pointer_by_flagged_interval @ 0x000d0950
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Updates a global pointer by a flag-dependent step size, looping until a calculated
 *   limit is reached.
 * summary:
 *   The function selects a step size (0x9c4 or 0x823) and an offset (500 or 0x535) based on
 *   bits in DAT_0003f285 and DAT_0003c023. It iterates, adjusting the global pointer
 *   _DAT_0003ce70 and calling unsigned_divide or compute_modulo_000f7ca0 depending on the
 *   sign of the input parameter and the calculated difference between _DAT_000000d8 and
 *   _DAT_0003ce70. The loop terminates when the difference exceeds the parameter or a
 *   specific value (0x7ef4) is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void step_pointer_by_flagged_interval(uint param_1)

{
  short sVar1;
  short sVar3;
  int iVar2;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if ((DAT_0003f285 & 0x10) != 0) {
    if ((DAT_0003c023 & 8) == 0) {
      iVar6 = 0x9c4;
      sVar1 = 500;
    }
    else {
      iVar6 = 0x823;
      sVar1 = 0x535;
    }
    do {
      uVar4 = (_DAT_000000d8 - (uint)_DAT_0003ce70) + iVar5;
      if ((int)param_1 < 0) {
        sVar3 = compute_modulo_000f7ca0(_DAT_0003ce70,iVar6);
        _DAT_0003ce70 = sVar3 + sVar1;
        _DAT_0003ce72 = sVar1;
        return;
      }
      if ((int)uVar4 < 0) {
        iVar5 = _DAT_0003ce72 + 32000;
        uVar4 = uVar4 + iVar5;
        _DAT_0003ce72 = 0;
        param_1 = 0;
      }
      if (param_1 == 0) {
        iVar2 = unsigned_divide(uVar4,iVar6);
        param_1 = (iVar2 + 1) * iVar6;
        if (param_1 == 0x7ef4) {
          return;
        }
      }
    } while (uVar4 < param_1);
  }
  return;
}
