/* @k10d compute_exposure_value_from_settings @ 0x10434abe
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 122_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Reads exposure-related settings, computes a clamped value, and writes it to a control
 *   register.
 * summary:
 *   Refreshes the settings working copy if needed. Selects a set of setting IDs based on
 *   param_2 (0x12 vs other), likely corresponding to different exposure modes or metering
 *   states. Calls call_helper_and_notify_result with these values to compute a result,
 *   clamps it to 9999, and writes the lower 16 bits to an object obtained from
 *   get_or_init_singleton_104aa272 via write_two_words_to_channel.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compute_exposure_value_from_settings(int param_1,int param_2)

{
  bool bVar4;
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint extraout_r4;
  int iVar5;
  uint uVar6;
  uint8_t uVar7;
  uint8_t uVar8;
  uintptr_t sp;
  uint8_t *puVar9;
  uint8_t auStack_30 [12];
  uint32_t uStack_14;
  int iStack_10;
  uint8_t uStack_9;
  
  puVar9 = auStack_30;
  bVar4 = check_object_field_via_helper(*(void **)(param_1 + 0xc));
  if (bVar4) {
    settings_refresh_working_copy(*(void **)(param_1 + 0xc));
  }
  if (param_2 == 0x12) {
    iStack_10 = setting_get(*(int *)(param_1 + 0xc),0x161);
    iVar1 = setting_get(*(int *)(param_1 + 0xc),0x164);
    uStack_14 = setting_get(*(int *)(param_1 + 0xc),0x163);
    uVar2 = setting_get(*(int *)(param_1 + 0xc),0x162);
    uVar3 = setting_get(*(int *)(param_1 + 0xc),0xc2);
    iVar5 = 0x16b;
    uVar8 = (char)uVar2;
    uVar7 = (char)uVar3;
  }
  else {
    iStack_10 = setting_get(*(int *)(param_1 + 0xc),0x51);
    iVar1 = setting_get(*(int *)(param_1 + 0xc),0x54);
    uStack_14 = setting_get(*(int *)(param_1 + 0xc),0x53);
    uVar2 = setting_get(*(int *)(param_1 + 0xc),0x52);
    uVar3 = setting_get(*(int *)(param_1 + 0xc),0xc2);
    iVar5 = 0x5b;
    uVar8 = (char)uVar2;
    uVar7 = (char)uVar3;
  }
  uVar2 = setting_get(*(int *)(param_1 + 0xc),iVar5);
  puVar9[3] = uVar8;
  puVar9[7] = uVar7;
  puVar9[0xb] = (char)uVar2;
  call_helper_and_notify_result(&uStack_9,iStack_10,iVar1,uStack_14,puVar9[3],puVar9[7],puVar9[0xb]);
  uVar6 = extraout_r4;
  if (9999 < extraout_r4) {
    uVar6 = 9999;
  }
  iVar1 = get_or_init_singleton_104aa272();
  write_two_words_to_channel(*(uint32_t *)(iVar1 + 4),0,uVar6 & 0xffff);
  return 1;
}
