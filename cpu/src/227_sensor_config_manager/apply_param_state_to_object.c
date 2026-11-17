/* @k10d apply_param_state_to_object @ 0x104c0dfe
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * purpose:
 *   Compares param_3 against an object field and updates the object's state fields, then
 *   calls helpers to process the change.
 * summary:
 *   The function checks if a pointer at offset 0xfd94 matches specific fields in param_3.
 *   If it matches, it calls copy_struct_fields_to_offset_104c22d4. Otherwise, it calls
 *   several helpers (process_three_string_slots_per_entry, store_value_at_two_offsets,
 *   write_two_words_to_struct_104c1ff4) and updates multiple fields in the object (param_1)
 *   with values from param_3 and other object fields. It then calls
 *   invoke_object_method_and_check_flag_104bf71e and
 *   invoke_virtual_callback_on_object_104bfe9e, and conditionally calls
 *   invoke_object_method_and_check_flag_104bf9c0 and copy_four_channel_params. The function
 *   returns a boolean indicating success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool apply_param_state_to_object(int param_1,uint32_t param_2,uint32_t *param_3)

{
  bool bVar1;
  uint32_t uVar2;
  char *pcVar3;
  int iVar4;
  void *pvVar5;
  bool bVar6;
  int *piVar7;
  int iStack_14;
  
  bVar1 = false;
  pcVar3 = *(char **)(param_1 + 0xfd94);
  if ((((*pcVar3 != '\0') && (*(short *)(pcVar3 + 8) == *(short *)(param_3 + 1))) &&
      (*(short *)(pcVar3 + 10) == *(short *)((int)param_3 + 6))) &&
     (*(int *)(pcVar3 + 0xc) == param_3[2])) {
    bVar1 = true;
  }
  iStack_14 = 0;
  if (bVar1) {
    iStack_14 = copy_struct_fields_to_offset_104c22d4(pcVar3);
  }
  else {
    process_three_string_slots_per_entry(param_1);
    store_value_at_two_offsets(param_1,*param_3);
    write_two_words_to_struct_104c1ff4(param_1,*(uint16_t *)(param_3 + 1),*(uint16_t *)((int)param_3 + 6));
    *(uint32_t *)(param_1 + 0x3c) = param_3[2];
    *(uint32_t *)(param_1 + 0x23c) = *(uint32_t *)(param_1 + 0x34);
    if ((uint16_t *)(param_1 + 0x238) != (uint16_t *)(param_1 + 0x44)) {
      *(uint16_t *)(param_1 + 0x238) = *(uint16_t *)(param_1 + 0x44);
      *(uint16_t *)(param_1 + 0x23a) = *(uint16_t *)(param_1 + 0x46);
    }
    *(uint32_t *)(param_1 + 0x234) = *(uint32_t *)(param_1 + 0x3c);
    iVar4 = invoke_object_method_and_check_flag_104bf71e(param_1,param_1 + 0x230);
    if (iVar4 != 0) {
      iStack_14 = param_1 + 0x230;
    }
  }
  bVar6 = false;
  if (iStack_14 != 0) {
    *(int *)(param_1 + 0x4b0) = iStack_14;
    *(uint32_t *)(param_1 + 0x4d8) = param_2;
    *(uint32_t *)(param_1 + 0x4b8) = *(uint32_t *)(param_1 + 0x8c4);
    *(uint32_t *)(param_1 + 0x4bc) = *(uint32_t *)(param_1 + 0x8c8);
    iVar4 = invoke_virtual_callback_on_object_104bfe9e(param_1, __frv_reg_unset(5));
    bVar6 = false;
    if (iVar4 != 0) {
      if (bVar1) {
        iVar4 = *(int *)(param_1 + 0xfd94);
        uVar2 = *(uint32_t *)(param_1 + 0x8c8);
        *(uint32_t *)(iVar4 + 0x2f0) = *(uint32_t *)(param_1 + 0x8c4);
        *(uint32_t *)(iVar4 + 0x2f4) = uVar2;
        *(uint32_t *)(param_1 + 0x40) = 0xffffffff;
        *(uint32_t *)(*(int *)(param_1 + 0xfd94) + 0x10) = 0xffffffff;
        pvVar5 = (void *)copy_struct_fields_to_offset_104c2310(*(uint32_t *)(param_1 + 0xfd94));
        *(uint32_t *)((int)pvVar5 + 0x1b0) = 0;
        bVar6 = invoke_object_method_and_check_flag_104bf9c0(param_1,pvVar5);
        if (bVar6) {
          copy_four_channel_params(param_1,param_3,pvVar5);
        }
      }
      else {
        *(uint32_t *)(param_1 + 0x40) = 0xffffffff;
        piVar7 = (int *)(param_1 + 0x74);
        *piVar7 = param_1 + 0x230;
        *(uint32_t *)(param_1 + 0x78) = *(uint32_t *)(param_1 + 0x40);
        *(uint32_t *)(param_1 + 0x80) = *(uint32_t *)(param_1 + 0x8c4);
        *(uint32_t *)(param_1 + 0x84) = *(uint32_t *)(param_1 + 0x8c8);
        *(uint32_t *)(param_1 + 0x224) = 0;
        bVar6 = invoke_object_method_and_check_flag_104bf9c0(param_1,piVar7);
        if (bVar6) {
          copy_four_channel_params(param_1,param_3,piVar7);
        }
      }
    }
    if (!bVar1) {
      invoke_virtual_method_on_object_104bf7ee(param_1,param_1 + 0x230);
    }
  }
  return bVar6;
}
