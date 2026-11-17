/* @k10d collect_exposure_settings @ 0x104e2f5a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Reads multiple exposure-related settings from the working copy and passes them to a
 *   helper function.
 * summary:
 *   Refreshes the settings working copy, then retrieves several setting values (IDs
 *   0x51/0x161, 0x54, 0x53/0x163, 0x52/0x162, 0xc2, 0x5b/0x16b) based on a mode flag. These
 *   values are packed into a local buffer and passed to call_helper_and_notify_result along
 *   with the other retrieved settings. The function returns the result of
 *   call_helper_and_notify_result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t collect_exposure_settings(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint32_t extraout_r4;
  int iVar8;
  void *pvVar9;
  uintptr_t sp;
  uint8_t *puVar10;
  uint8_t auStack_34 [12];
  uint8_t uStack_9;
  
  puVar10 = auStack_34;
  iVar1 = get_or_create_singleton_object_10485138();
  pvVar9 = *(void **)(iVar1 + 0x18);
  settings_refresh_working_copy(pvVar9);
  iVar1 = get_or_create_singleton_object_104fb12e();
  uVar2 = check_object_property_43(*(int *)(iVar1 + 0x74));
  if (uVar2 == 0) {
    iVar1 = 0x51;
  }
  else {
    iVar1 = 0x161;
  }
  iVar1 = setting_get((int)pvVar9,iVar1);
  iVar3 = setting_get((int)pvVar9,0x54);
  if (uVar2 == 0) {
    iVar8 = 0x53;
  }
  else {
    iVar8 = 0x163;
  }
  uVar4 = setting_get((int)pvVar9,iVar8);
  if (uVar2 == 0) {
    iVar8 = 0x52;
  }
  else {
    iVar8 = 0x162;
  }
  uVar5 = setting_get((int)pvVar9,iVar8);
  uVar6 = setting_get((int)pvVar9,0xc2);
  if (uVar2 == 0) {
    iVar8 = 0x5b;
  }
  else {
    iVar8 = 0x16b;
  }
  uVar7 = setting_get((int)pvVar9,iVar8);
  puVar10[3] = (char)uVar5;
  puVar10[7] = (char)uVar6;
  puVar10[0xb] = (char)uVar7;
  call_helper_and_notify_result(&uStack_9,iVar1,iVar3,uVar4,puVar10[3],puVar10[7],puVar10[0xb]);
  return extraout_r4;
}
