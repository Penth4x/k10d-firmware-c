/* @k10d initialize_menu_item_state @ 0x103a96c0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling setup routines and configuring state based on param_2
 *   flags.
 * summary:
 *   The function calls two unknown initialization helpers, then invokes a virtual method if
 *   a specific byte in the object is zero. It stores the result of
 *   call_two_helpers_in_sequence_104f1b02 into the object and calls four setup functions
 *   (compute_and_send_two_offsets_103aa31a, toggle_virtual_state_flag_103a9a46,
 *   dispatch_state_change_event_103a9c3e, dispatch_event_by_type_103a9db4,
 *   dispatch_mode_state_transition_103a9b0a) passing bits from param_2. It then performs a
 *   series of virtual calls on a related object (obtained via menu_item_register) with
 *   various arguments, and finally calls several other helpers
 *   (dispatch_event_to_object_10492252, call_helper_on_fetched_object,
 *   request_ui_sync_and_set_flag, request_ui_sync_with_flag_10491f5c) to complete the
 *   initialization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_menu_item_state(cls_10565468 *param_1,uint param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uint8_t *puVar4;
  
  empty_stub_function_103b76f0();
  empty_noop_stub_103b76f2();
  if (param_1->field_0x4 == '\0') {
    (((vtbl_entry*)(param_1->field_0x0))[8].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj,0);
  }
  uVar1 = call_two_helpers_in_sequence_104f1b02(param_1->field_0x28);
  param_1->field_0x40 = (char)uVar1;
  compute_and_send_two_offsets_103aa31a(param_1);
  toggle_virtual_state_flag_103a9a46(param_1);
  dispatch_state_change_event_103a9c3e(param_1);
  dispatch_event_by_type_103a9db4(param_1,(uint)((param_2 & 8) != 0));
  dispatch_mode_state_transition_103a9b0a(param_1,(uint)((param_2 & 4) != 0));
  puVar4 = &param_1->field5_0x8;
  iVar2 = menu_item_register((int)puVar4);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  if (param_1->field_0x40 == '\n') {
    iVar2 = menu_item_register((int)puVar4);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  iVar2 = menu_item_register((int)puVar4);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  uVar3 = check_object_property_43(param_1->field_0x28);
  if (uVar3 != 0) {
    iVar2 = menu_item_register((int)puVar4);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  iVar2 = menu_item_register((int)puVar4);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  if (param_1->field_0x40 == '\f') {
    iVar2 = menu_item_register((int)puVar4);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  }
  dispatch_event_to_object_10492252((cls_105b4254 *)puVar4,param_1);
  iVar2 = *(uint32_t *)(param_1->field_0x2c);
  (((vtbl_entry*)(iVar2))[2].fn)((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar2))[2].adj,0x1120069,1);
  call_helper_on_fetched_object(puVar4,0x10);
  call_helper_on_fetched_object(puVar4,0xf);
  call_helper_on_fetched_object(puVar4,0xd);
  call_helper_on_fetched_object(puVar4,0xe);
  request_ui_sync_and_set_flag((cls_105b4254 *)puVar4);
  request_ui_sync_with_flag_10491f5c(puVar4,1);
  return;
}
