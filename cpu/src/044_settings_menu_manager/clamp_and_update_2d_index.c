/* @k10d clamp_and_update_2d_index @ 0x103a3084
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Clamps a 2D coordinate pair within bounds and updates stored indices if changed.
 * summary:
 *   The function reads two 16-bit indices from offsets 0x44 and 0x45 of the object pointed
 *   to by param_1. It calculates new values based on param_2, param_3, and param_4,
 *   applying clamping logic against bounds stored at offsets 0x46, 0x48, and 0x4a. If the
 *   calculated indices differ from the stored ones, it updates the stored bytes and calls
 *   update_six_settings_from_calcs with the new values and a parameter from offset 0x41.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clamp_and_update_2d_index(int param_1,int param_2,int param_3,uint param_4)

{
  uint8_t uVar1;
  uint8_t uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar5 = (uint)*(ushort *)((uint)*(byte *)(param_1 + 0x44) * 2 + param_1 + 0x50);
  uVar4 = (uint)*(ushort *)(param_1 + 0x50 + (uint)*(byte *)(param_1 + 0x45) * 2);
  if (param_2 == 0) {
    uVar7 = uVar4;
    if ((param_3 == 0) && (uVar5 - param_4 * *(ushort *)(param_1 + 0x46) <= uVar4)) {
      uVar3 = *(ushort *)(param_1 + 0x46) + uVar4 & 0xffff;
    }
    else if ((param_3 == 0) ||
            (uVar3 = (uint)*(ushort *)(param_1 + 0x48),
            param_4 * *(ushort *)(param_1 + 0x46) + uVar5 < (uint)*(ushort *)(param_1 + 0x48))) {
      iVar6 = 1;
      if (param_3 != 1) {
        iVar6 = -1;
      }
      uVar3 = (param_4 & 0xffff) * iVar6 * (uint)*(ushort *)(param_1 + 0x46) + uVar5 & 0xffff;
    }
  }
  else {
    uVar3 = uVar5;
    if ((param_3 == 0) || (param_4 * *(ushort *)(param_1 + 0x46) + uVar4 < uVar5)) {
      if ((param_3 != 0) ||
         (uVar7 = (uint)*(ushort *)(param_1 + 0x4a),
         uVar7 < uVar4 - param_4 * *(ushort *)(param_1 + 0x46))) {
        iVar6 = 1;
        if (param_3 != 1) {
          iVar6 = -1;
        }
        uVar7 = (param_4 & 0xffff) * iVar6 * (uint)*(ushort *)(param_1 + 0x46) + uVar4 & 0xffff;
      }
    }
    else {
      uVar7 = uVar5 - *(ushort *)(param_1 + 0x46) & 0xffff;
    }
  }
  if ((uVar5 != uVar3) || (uVar4 != uVar7)) {
    uVar1 = *(uint8_t *)(uVar3 + param_1 + 0xb4);
    *(uint8_t *)(param_1 + 0x44) = uVar1;
    uVar2 = *(uint8_t *)(param_1 + 0xb4 + uVar7);
    *(uint8_t *)(param_1 + 0x45) = uVar2;
    update_six_settings_from_calcs(*(uint32_t *)(param_1 + 0x28),uVar2,uVar1,*(uint8_t *)(param_1 + 0x41));
  }
  return;
}
