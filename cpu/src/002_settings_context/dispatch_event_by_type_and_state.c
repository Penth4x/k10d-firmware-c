/* @k10d dispatch_event_by_type_and_state @ 0x103631f4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 002_settings_context (unit names are model-proposed)
 * purpose:
 *   Routes an event based on its type and the object's internal state field, calling
 *   specific handlers or updating state flags.
 * summary:
 *   The function acts as a dispatcher for an event object (param_2) within a class instance
 *   (param_1). It first checks a state field at offset 0x81; if non-zero, it branches on
 *   that state and the event type (param_2[1]) to call specific handlers like
 *   init_object_and_call_virtual_slot_10364ba6 or read_two_words_from_buffer. If the state
 *   is zero, it uses a large switch statement on the event type to perform actions such as
 *   setting flags, calling dispatch_event_by_type_103642ca with various arguments, or
 *   invoking other handlers. It also manages a linked-list-like pointer at offset 0x18
 *   (param_1[6]) using get_or_create_singleton_object_1036c796 and
 *   read_array_element_bounded, likely for queueing or state tracking. The function returns
 *   the value stored at param_1[6].
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */

uint32_t dispatch_event_by_type_and_state(cls_105575b0 *param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int iVar4;
  
  param_1->field_0x18 = (uint32_t)(param_1);
  check_and_update_object_state((void *)(uint32_t)param_1);
  iVar1 = *param_2;
  if (((iVar1 == 1) || (iVar1 == 2)) || (iVar1 != 4)) goto LAB_10363492;
  iVar1 = param_1->field_0x204;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      if (param_2[1] == 0xc) {
        init_object_and_call_virtual_slot_10364ba6((void*)(param_1));
        goto LAB_10363492;
      }
      if (param_2[1] != 0x11) goto LAB_10363492;
      iVar4 = param_1->field_0x20c;
      iVar1 = *(int *)param_1->field_0x70;
      iVar1 = (((vtbl_entry*)(iVar1))[33].fn)
                        ((int)param_1->field_0x70 + (int)((vtbl_entry*)(iVar1))[33].adj);
      param_1->field_0x220 = iVar4 == iVar1;
      iVar1 = process_event_and_update_state_103652c6((int *)param_1);
      goto joined_r0x103633e6;
    }
    if (iVar1 == 2) {
      iVar1 = param_2[1];
      if (((iVar1 == 0xc) || (iVar1 == 0x27)) || (iVar1 == 0x28)) {
        read_two_words_from_buffer((int)param_1);
        reset_field_and_call_virtual_slot(param_1);
        goto LAB_10363492;
      }
      if (iVar1 != 0x11) goto LAB_10363492;
      iVar1 = process_short_value_change((void*)(param_1));
      goto joined_r0x103633e6;
    }
    if (iVar1 != 3) {
      if ((iVar1 != 5) || (param_2[1] != 0x11)) goto LAB_10363492;
      goto code_r0x1036347c;
    }
    if (param_2[1] == 0xc) {
      reset_field_and_call_virtual_slot(param_1);
      goto LAB_10363492;
    }
    if (param_2[1] != 0x11) goto LAB_10363492;
    uVar2 = (uint32_t)(process_sensor_readout_cycle_10363d4c(param_1));
    goto LAB_10363490;
  }
  switch(param_2[1]) {
  case 5:
  case 9:
code_r0x1036347c:
    uVar2 = get_or_create_singleton_object_1036c796();
    uVar3 = 3;
    goto LAB_10363280;
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
    break;
  case 0xc:
    param_1->field_0x15 = 1;
    break;
  case 0xd:
    iVar1 = dispatch_event_by_type_103642ca(param_1,3);
    goto joined_r0x10363314;
  case 0xe:
    iVar1 = dispatch_event_by_type_103642ca(param_1,2);
    goto joined_r0x103633e6;
  case 0xf:
    iVar1 = dispatch_event_by_type_103642ca(param_1,1);
    goto joined_r0x103633e6;
  case 0x10:
    iVar1 = dispatch_event_by_type_103642ca(param_1,0);
    goto joined_r0x103633e6;
  case 0x11:
    iVar1 = process_short_value_change((void*)(param_1));
joined_r0x10363314:
    if (iVar1 != 0) break;
    goto LAB_1036342e;
  case 0x18:
    set_flags_and_call_virtual_slot((void*)(param_1));
    break;
  case 0x19:
    if (param_1->field_0x21e != 0) {
      set_state_and_init_subobject(param_1);
    }
    break;
  case 0x25:
    iVar1 = dispatch_event_by_type_103642ca(param_1,5);
    goto joined_r0x103633e6;
  case 0x26:
    iVar1 = dispatch_event_by_type_103642ca(param_1,4);
joined_r0x103633e6:
    if (iVar1 == 0) {
LAB_1036342e:
      uVar2 = get_or_create_singleton_object_1036c796();
      uVar3 = 1;
LAB_10363280:
      uVar2 = read_array_element_bounded(uVar2,uVar3);
LAB_10363490:
      param_1->field_0x18 = uVar2;
    }
    break;
  case 0x27:
  case 0x28:
    dispatch_mode_transition_10364bdc(param_1);
    break;
  default:
  }
LAB_10363492:
  if (param_1->field_0x204 == 0) {
    if (param_1->field_0x15 != '\0') {
      uVar2 = get_or_create_singleton_object_1036c796();
      uVar2 = read_array_element_bounded(uVar2,3);
      param_1->field_0x18 = uVar2;
    }
  }
  else {
    param_1->field_0x14 = 0;
    param_1->field_0x15 = 0;
  }
  return param_1->field_0x18;
}
