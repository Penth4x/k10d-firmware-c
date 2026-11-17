/* @k10d update_settings_on_mode_change @ 0x10390c06
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 038_settings_manager (unit names are model-proposed)
 * purpose:
 *   Detects a change in the current mode ID and refreshes the working settings copy if it
 *   differs from the stored value.
 * summary:
 *   The function retrieves the current mode ID via
 *   get_or_create_singleton_object_1036c796/read_array_element_bounded and compares it to a
 *   value stored at param_1+0x60. If they differ, it clears the stored value, calls
 *   invoke_virtual_slot_10_1036b74c and check_and_reset_object_field, and then refreshes
 *   the settings working copy. It reads several specific settings (0x51, 0x52, 0x53, 0x54,
 *   0x5b, 0xc2) and passes them to compute_conditional_offset, likely to update a dependent
 *   subsystem or state machine. Finally, it calls forward_params_via_offset with the
 *   result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t update_settings_on_mode_change(int param_1, uint32_t param_x1)

{
  uint32_t uVar1;
  int iVar2;
  bool bVar6;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  int iVar7;
  void *pvVar8;
  uintptr_t sp;
  uint8_t *puVar9;
  uint8_t *puVar10;
  uint8_t auStack_30 [12];
  uint8_t uStack_9;
  
  puVar9 = auStack_30;
  iVar7 = *(int *)(param_1 + 0x60);
  puVar10 = auStack_30;
  if (iVar7 != 0) {
    *(uint32_t *)(param_1 + 0x60) = 0;
    invoke_virtual_slot_10_1036b74c((void *)iVar7);
    check_and_reset_object_field(param_1);
    puVar10 = puVar9;
  }
  invoke_virtual_slot_two_on_four_objects_1036b766();
  call_single_helper_with_global();
  uVar1 = get_or_create_singleton_object_1036c796();
  iVar2 = read_array_element_bounded(uVar1,0xf);
  if (iVar7 != iVar2) {
    iVar7 = get_or_create_singleton_object_10485138();
    pvVar8 = *(void **)(iVar7 + 0x14);
    bVar6 = check_object_field_via_helper(pvVar8);
    if (bVar6) {
      settings_refresh_working_copy(pvVar8);
    }
    iVar7 = setting_get((int)pvVar8,0x51);
    iVar2 = setting_get((int)pvVar8,0x54);
    uVar1 = setting_get((int)pvVar8,0x53);
    uVar3 = setting_get((int)pvVar8,0x52);
    uVar4 = setting_get((int)pvVar8,0xc2);
    uVar5 = setting_get((int)pvVar8,0x5b);
    puVar10[3] = (char)uVar3;
    puVar10[7] = (char)uVar4;
    puVar10[0xb] = (char)uVar5;
    iVar7 = compute_conditional_offset(&uStack_9,iVar7,iVar2,uVar1,puVar10[3],puVar10[7],puVar10[0xb]);
    uVar1 = get_or_create_singleton_object_1050b118();
    forward_params_via_offset(uVar1,iVar7,1);
  }
  return 1;
}
