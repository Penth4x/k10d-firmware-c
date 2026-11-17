/* @k10d mode_ctrl_on_status_h_104329b0 @ 0x104329b0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 117_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Handles the 'H' status event by setting a flag and initializing two cls_1059f170
 *   objects with specific parameters.
 * summary:
 *   The function first calls set_flag_if_param_in_range_or_fields_nonzero and sets a byte
 *   at offset 0x2c of the object to 1. It then calls call_two_helpers_with_flag and
 *   resubmit_cpucom_context. If a flag at offset 0x9e is clear, it sets it based on offset
 *   0x9c, creates two instances of cls_1059f170 on the stack, and configures them using
 *   store_value_to_pointer_1043309c (with values 2 and 3) and other setters. It finally
 *   calls set_flg_obj and clone_object_with_sem_guard. The caller mode_ctrl_on_event
 *   identifies this as the handler for event 0xa0009 ('H' status).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void mode_ctrl_on_status_h_104329b0(int param_1,void *param_2)

{
  uintptr_t sp;
  uint8_t auStack_3c [20];
  uint8_t auStack_28 [20];
  int iStack_14;
  uint8_t uStack_10;
  void *pvStack_c;
  
  set_flag_if_param_in_range_or_fields_nonzero(param_1,(int)param_2);
  *(uint8_t *)(param_1 + 0x2c) = 1;
  call_two_helpers_with_flag(*(uint32_t *)(param_1 + 0x34),(int)param_2,1);
  resubmit_cpucom_context(*(uint32_t *)(param_1 + 0x30));
  if (*(char *)(param_1 + 0x9e) == '\0') {
    *(bool *)(param_1 + 0x9e) = *(char *)(param_1 + 0x9c) != '\0';
    cls_1059f170_new((void *)auStack_3c);
    cls_1059f170_new((void *)auStack_28);
    uStack_10 = 0;
    pvStack_c = (void *)0x0;
    iStack_14 = param_1 + 0x20;
    store_value_to_pointer_1043309c((void *)auStack_3c,2);
    write_field_at_offset_four_104330a0(auStack_3c,0);
    store_value_at_offset_eight_104330a6(auStack_3c,0);
    set_byte_at_offset_0xc(auStack_3c,0);
    store_value_to_pointer_1043309c((void *)auStack_28,3);
    write_field_at_offset_four_104330a0(auStack_28,0);
    store_value_at_offset_eight_104330a6(auStack_28,0);
    set_byte_at_offset_0xc(auStack_28,0);
    uStack_10 = 1;
    pvStack_c = param_2;
    set_flg_obj((uint32_t *)(param_1 + 0x7c));
    mode_ctrl_on_status_h(param_1);
    clone_object_with_sem_guard(param_1,auStack_3c);
    cls_1059f170_destructor(auStack_28,2);
    cls_1059f170_destructor(auStack_3c,2);
  }
  return;
}
