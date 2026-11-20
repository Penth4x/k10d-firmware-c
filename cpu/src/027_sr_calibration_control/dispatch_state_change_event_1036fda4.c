/* @k10d dispatch_state_change_event_1036fda4 @ 0x1036fda4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 027_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Detects a change in a state field and dispatches a notification event with computed
 *   parameters.
 * summary:
 *   The function compares the value at offset 0x2c of the object before and after calling
 *   two helper functions. If the state changed, it constructs a message structure on the
 *   stack using values from helper functions and a global flag, then calls
 *   retry_virtual_call_until_success_1036f0fe to send the event. It also invokes a virtual
 *   method on the object and conditionally calls another helper if the state changed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_change_event_1036fda4(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint32_t uVar5;
  uintptr_t sp;
  uint32_t *puVar6;
  uint8_t auStack_b4 [8];
  uint32_t uStack_8c;
  uint8_t auStack_84 [92];
  uint32_t auStack_28 [4];
  uint8_t auStack_18 [16];
  
  puVar6 = (uint32_t *)auStack_b4;
  iVar1 = param_1[0xb];
  dispatch_event_with_state_check_1036f384(param_1,0);
  initialize_mode_context_block(param_1);
  if (iVar1 != param_1[0xb]) {
    if (DAT_800043a0/*SDRAM*/ == '\0') {
      uStack_8c = 5;
    }
    else {
      uStack_8c = read_struct_field_at_index_104c2890((void *)0x80015b24/*SDRAM*/,0);
    }
    alloc_and_zero_struct_104bb416(auStack_84);
    uVar2 = return_first_word_1045c514(param_1 + 0x2a);
    uVar3 = read_struct_field_at_offset_4(param_1 + 0x2a);
    copy_two_words_from_param2((int)auStack_28,-0x7ffea510);
    uVar4 = return_first_word_1045c514(auStack_28);
    copy_two_words_from_param2((int)auStack_18,-0x7ffea510);
    uVar5 = read_struct_field_at_offset_4(auStack_18);
    *(short *)((int)puVar6 + 2) = (short)uVar5;
    *(uint16_t *)((int)puVar6 + 6) = 100;
    dispatch_six_param_object_ops(auStack_84,uVar2 & 0xffff,uVar3 & 0xffff,uVar4 & 0xffff,
                 *(uint16_t *)((int)puVar6 + 2),*(uint16_t *)((int)puVar6 + 6));
    free_heap_if_flagged_1045c402(auStack_18,2);
    free_heap_if_flagged_1045c402(auStack_28,2);
    transform_and_store_value(auStack_84,uStack_8c);
    reset_object_fields_and_call_base((cls_105b9458 *)0x80015d04/*SDRAM*/);
    *puVar6 = 3;
    retry_virtual_call_until_success_1036f0fe((int)param_1,(int)auStack_84,0x80015af0/*SDRAM*/,-0x7ffea2fc,*puVar6);
    destroy_five_member_objects(auStack_84,2);
  }
  (((vtbl_entry*)(*param_1))[8].fn)((int)((vtbl_entry*)(*param_1))[8].adj + (int)param_1);
  if (iVar1 != param_1[0xb]) {
    release_object_at_offset_0x2c_1036f2b4(param_1);
  }
  iVar1 = check_setting_0x72_enabled((int *)(0x800158d4/*SDRAM*/));
  dispatch_event_with_state_check_1036f384(param_1,iVar1);
  return;
}
