/* @k10d update_three_settings_by_mode @ 0x104efd92
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Computes three values based on param_3 and writes them to settings block at param_1+0xc
 *   using mode-dependent IDs.
 * summary:
 *   The function conditionally calls map_mode_index_to_group,
 *   map_even_index_to_odd_104f0610, or map_index_to_next_value based on param_3 to derive
 *   three values. It queries check_object_property_43 to select between two sets of setting
 *   IDs (4/10/7 vs 300/0x132/0x12f) and writes the computed values via setting_set.
 *   Finally, it calls send_command_with_payload with a pointer from param_1+0x20.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_three_settings_by_mode(int param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint uVar4;
  
  uVar1 = param_2;
  if (param_3 != 0) {
    uVar1 = map_mode_index_to_group(param_1,param_2);
  }
  uVar2 = param_2;
  if (param_3 == 2) {
    uVar2 = map_even_index_to_odd_104f0610(param_1,param_2);
  }
  uVar3 = param_2;
  if (param_3 == 1) {
    uVar3 = map_index_to_next_value(param_1,param_2);
  }
  uVar4 = check_object_property_43(param_1);
  if (uVar4 == 0) {
    setting_set(*(int *)(param_1 + 0xc),4,uVar1);
    setting_set(*(int *)(param_1 + 0xc),10,uVar2);
    setting_set(*(int *)(param_1 + 0xc),7,uVar3);
  }
  else {
    uVar4 = check_object_property_43(param_1);
    if (uVar4 != 0) {
      setting_set(*(int *)(param_1 + 0xc),300,uVar1);
      setting_set(*(int *)(param_1 + 0xc),0x132,uVar2);
      setting_set(*(int *)(param_1 + 0xc),0x12f,uVar3);
    }
  }
  send_command_with_payload(*(uint32_t *)(param_1 + 0x20),param_2,1);
  return;
}
