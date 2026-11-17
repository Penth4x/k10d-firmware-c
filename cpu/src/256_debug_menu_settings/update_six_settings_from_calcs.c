/* @k10d update_six_settings_from_calcs @ 0x104f0090
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Computes six values from parameters, adjusts two based on equality checks, and writes
 *   them to settings via setting_set.
 * summary:
 *   The function calls six helper functions (normalize_mode_index,
 *   map_even_index_to_odd_104f063e, adjust_index_value, map_mode_index_to_group,
 *   map_even_index_to_odd_104f0610, map_index_to_next_value) to derive values. It
 *   conditionally decrements two of these values by 4 or 2 (masked to 8 bits) if they match
 *   other computed values. It then checks check_object_property_43 to select between two
 *   sets of setting indices (0x6, 0xc, 0x9, 0x5, 0xb, 0x8 vs 0x12e, 0x134, 0x131, 0x12d,
 *   0x133, 0x130) and writes the computed values using setting_set. Finally, it calls
 *   send_two_mmio_commands with the object pointer at offset 0x20 and the original
 *   parameters.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_six_settings_from_calcs(int param_1, uint32_t param_2, uint32_t param_3, uint32_t param_x3)

{
  uint uVar1;
  uint uVar2;
  uint32_t uVar3;
  uint uVar4;
  uint uVar5;
  uint32_t uVar6;
  uint uVar7;
  
  uVar1 = normalize_mode_index(__frv_reg_unset(4), __frv_reg_unset(5));
  uVar2 = map_even_index_to_odd_104f063e(param_1,param_2);
  uVar3 = adjust_index_value(param_1,param_2);
  uVar4 = map_mode_index_to_group(param_1,param_3);
  uVar5 = map_even_index_to_odd_104f0610(param_1,param_3);
  uVar6 = map_index_to_next_value(param_1,param_3);
  if (uVar1 == uVar4) {
    uVar1 = uVar1 - 4 & 0xff;
  }
  if (uVar2 == uVar5) {
    uVar2 = uVar2 - 2 & 0xff;
  }
  uVar7 = check_object_property_43(param_1);
  if (uVar7 == 0) {
    setting_set(*(int *)(param_1 + 0xc),6,uVar4);
    setting_set(*(int *)(param_1 + 0xc),0xc,uVar5);
    setting_set(*(int *)(param_1 + 0xc),9,uVar6);
    setting_set(*(int *)(param_1 + 0xc),5,uVar1);
    setting_set(*(int *)(param_1 + 0xc),0xb,uVar2);
    setting_set(*(int *)(param_1 + 0xc),8,uVar3);
  }
  else {
    uVar7 = check_object_property_43(param_1);
    if (uVar7 != 0) {
      setting_set(*(int *)(param_1 + 0xc),0x12e,uVar4);
      setting_set(*(int *)(param_1 + 0xc),0x134,uVar5);
      setting_set(*(int *)(param_1 + 0xc),0x131,uVar6);
      setting_set(*(int *)(param_1 + 0xc),0x12d,uVar1);
      setting_set(*(int *)(param_1 + 0xc),0x133,uVar2);
      setting_set(*(int *)(param_1 + 0xc),0x130,uVar3);
    }
  }
  send_two_mmio_commands(*(uint32_t *)(param_1 + 0x20),param_2,param_3,1);
  return;
}
