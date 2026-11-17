/* @k10d adjust_value_within_bounds @ 0x103b441e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Clamps a computed value to a range defined by object fields and updates the object
 *   state if changed.
 * summary:
 *   The function checks a status flag at offset 0x40. If active, it calculates a new value
 *   based on param_3 and a step size at offset 0x46, clamping it between limits at offsets
 *   0x4a and 0x48. If the new value differs from the current value at offset 0x4c, it calls
 *   lookup_index_in_table to process the value, update_two_settings_by_mode to update an
 *   internal structure, and dispatch_object_event_103b456c to finalize the change.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103b4480) overlaps instruction at (ram,0x103b447e)
    */

void adjust_value_within_bounds(void *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  uint uVar4;
  
  if (*(int *)((int)param_1 + 0x40) != 1) {
    iVar2 = get_setting_by_mode_flag_104f16cc(*(int *)((int)param_1 + 0x28),(uint)*(byte *)((int)param_1 + 0x45));
    uVar1 = (uint)*(ushort *)((int)param_1 + iVar2 * 2 + 0x4c);
    if (((param_2 == 0) ||
        (uVar4 = (uint)*(ushort *)((int)param_1 + 0x48),
        (int)((param_3 & 0xffff) * (uint)*(ushort *)((int)param_1 + 0x46) + uVar1) < (int)uVar4)) &&
       ((param_2 != 0 ||
        (uVar4 = (uint)*(ushort *)((int)param_1 + 0x4a),
        (int)uVar4 < (int)(uVar1 - (param_3 & 0xffff) * (uint)*(ushort *)((int)param_1 + 0x46))))))
    {
      iVar2 = 1;
      if (param_2 != 1) {
        iVar2 = -1;
      }
      uVar4 = (param_3 & 0xffff) * iVar2 * (uint)*(ushort *)((int)param_1 + 0x46) + uVar1 & 0xffff;
    }
    if (uVar4 != uVar1) {
      uVar3 = lookup_index_in_table((int)param_1,uVar4);
      update_two_settings_by_mode(*(uint32_t *)((int)param_1 + 0x28),uVar3,*(uint8_t *)((int)param_1 + 0x45));
      dispatch_object_event_103b456c(param_1);
    }
  }
  return;
}
