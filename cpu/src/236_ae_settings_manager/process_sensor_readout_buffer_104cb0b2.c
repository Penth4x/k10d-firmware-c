/* @k10d process_sensor_readout_buffer_104cb0b2 @ 0x104cb0b2
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 236_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes and processes a sensor data buffer, performing validation and
 *   transformation steps before finalizing the result.
 * summary:
 *   The function allocates three local objects via cls_105b9458_new and retrieves pointers
 *   from param_1 (offsets 0x60 and 0x64), falling back to the local objects if null. It
 *   calls propagate_state_to_three_objects and process_sensor_readout_request_104c50e4 to
 *   process the data, then uses set_object_state_and_notify to check status codes (0xc0001)
 *   at steps 6, 7, 8, and 9. It manipulates 16-bit values from
 *   return_first_word_1045c514/1045c51e and passes them to dispatch_six_param_object_ops,
 *   suggesting a data conversion or scaling operation. On failure, it sets error flags at
 *   param_1+0x210/0x214 and calls compare_two_structs_by_mode. Finally, it cleans up the
 *   local objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */

void process_sensor_readout_buffer_104cb0b2(int param_1)

{
  uint8_t *puVar1;
  int iVar2;
  uint32_t uVar3;
  uint uVar4;
  uint uVar5;
  uint8_t *puVar6;
  int iVar7;
  uintptr_t sp;
  int *piVar8;
  uint8_t auStack_704 [8];
  uint uStack_6c4;
  uint8_t auStack_6c0 [4];
  uint32_t uStack_6bc;
  uint8_t auStack_6b8 [8];
  uint8_t auStack_6b0 [532];
  uint8_t auStack_49c [532];
  uint8_t auStack_288 [532];
  uint8_t auStack_74 [44];
  int iStack_48;
  uint32_t uStack_1c;
  uint8_t auStack_18 [4];
  uint32_t uStack_14;
  uint8_t auStack_10 [8];
  
  piVar8 = (int *)auStack_704;
  cls_105b9458_new((void *)auStack_6b0);
  cls_105b9458_new((void *)auStack_49c);
  cls_105b9458_new((void *)auStack_288);
  puVar1 = *(uint8_t **)(param_1 + 100);
  if (puVar1 == (uint8_t *)0x0) {
    puVar1 = auStack_6b0;
  }
  puVar6 = *(uint8_t **)(param_1 + 0x60);
  if (puVar6 == (uint8_t *)0x0) {
    puVar6 = auStack_49c;
  }
  propagate_state_to_three_objects(param_1,puVar1,puVar6,*(int *)(param_1 + 0x5c));
  iVar2 = process_sensor_readout_request_104c50e4(param_1,puVar1);
  iVar2 = set_object_state_and_notify(param_1,iVar2,0xc0001,6);
  if (iVar2 == 0) goto code_r0x104cb3be;
  uVar3 = dispatch_param_based_on_flag(param_1,puVar1,puVar6);
  iVar2 = set_object_state_and_notify(param_1,uVar3,0xc0001,7);
  if (iVar2 == 0) goto code_r0x104cb3be;
  alloc_and_zero_struct_104bb416((void *)auStack_74);
  uVar4 = return_first_word_1045c514((uint32_t *)(param_1 + 0x54));
  uVar5 = read_struct_field_at_offset_4((uint32_t *)(param_1 + 0x54));
  copy_two_words_from_param2((int)auStack_18,(int)puVar6);
  iVar2 = 8;
  do {
    iVar7 = iVar2 + -4;
    *(uint32_t *)((int)&uStack_6c4 + iVar2) = *(uint32_t *)((int)&uStack_1c + iVar2);
    iVar2 = iVar7;
  } while (iVar7 != 0);
  uStack_6c4 = return_first_word_1045c514((uint32_t *)auStack_6c0);
  uStack_6c4 = uStack_6c4 & 0xffff;
  copy_two_words_from_param2((int)auStack_10,(int)puVar6);
  iVar2 = 8;
  do {
    iVar7 = iVar2 + -4;
    *(uint32_t *)(auStack_6b8 + iVar2 + -4) = *(uint32_t *)((int)&uStack_14 + iVar2);
    iVar2 = iVar7;
  } while (iVar7 != 0);
  uVar3 = read_struct_field_at_offset_4(auStack_6b8);
  *(short *)((int)piVar8 + 2) = (short)uVar3;
  *(uint16_t *)((int)piVar8 + 6) = 100;
  dispatch_six_param_object_ops(auStack_74,uVar4 & 0xffff,uVar5 & 0xffff,uStack_6c4,*(uint16_t *)((int)piVar8 + 2),
               *(uint16_t *)((int)piVar8 + 6));
  free_heap_if_flagged_1045c402(auStack_6b8,2);
  free_heap_if_flagged_1045c402(auStack_6c0,2);
  if (*(char *)(param_1 + 0x6c) == '\0') {
    uVar3 = 5;
  }
  else {
    uVar3 = read_struct_field_at_index_104c2890(puVar6 + 0x34,0);
  }
  transform_and_store_value(auStack_74,uVar3);
  copy_structured_record_104bbb28(auStack_6b8,auStack_74);
  copy_two_words_from_param2((int)auStack_6c0,(int)puVar6);
  iVar2 = compare_two_int_pairs((void *)auStack_6b8,(void *)auStack_6c0);
  free_heap_if_flagged_1045c402(auStack_6c0,2);
  free_heap_if_flagged_1045c402(auStack_6b8,2);
  if (iVar2 == 0) {
    *piVar8 = *(uint32_t *)(param_1 + 0x68);
    iVar2 = dispatch_exposure_mode_handler(param_1,auStack_74,(int)puVar6,(int)auStack_288,*piVar8);
    iVar2 = set_object_state_and_notify(param_1,iVar2,0xc0001,8);
    if (iVar2 != 0) {
      puVar6 = auStack_288;
      goto LAB_104cb384;
    }
  }
  else {
LAB_104cb384:
    iVar2 = compare_two_structs_by_mode(param_1,iStack_48,puVar6,*(void **)(param_1 + 0x5c));
    iVar2 = set_object_state_and_notify(param_1,iVar2,0xc0001,9);
    if (iVar2 != 0) {
      *(uint32_t *)(param_1 + 0x214) = 1;
      *(uint32_t *)(param_1 + 0x210) = 0xc0001;
    }
  }
  destroy_five_member_objects(auStack_74,2);
code_r0x104cb3be:
  cls_105b9458_delete(auStack_288,2);
  cls_105b9458_delete(auStack_49c,2);
  cls_105b9458_delete(auStack_6b0,2);
  return;
}
