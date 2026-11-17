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

void initialize_menu_item_state(int *param_1,uint param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  empty_stub_function_103b76f0();
  empty_noop_stub_103b76f2();
  if (*(char *)(param_1 + 1) == '\0') {
    (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1,0);
  }
  uVar1 = call_two_helpers_in_sequence_104f1b02(param_1[10]);
  *(char *)(param_1 + 0x10) = (char)uVar1;
  compute_and_send_two_offsets_103aa31a(param_1);
  toggle_virtual_state_flag_103a9a46(param_1);
  dispatch_state_change_event_103a9c3e(param_1);
  dispatch_event_by_type_103a9db4(param_1,(uint)((param_2 & 8) != 0));
  dispatch_mode_state_transition_103a9b0a(param_1,(uint)((param_2 & 4) != 0));
  piVar4 = param_1 + 2;
  iVar2 = menu_item_register((int)piVar4);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  if (*(char *)(param_1 + 0x10) == '\n') {
    iVar2 = menu_item_register((int)piVar4);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  iVar2 = menu_item_register((int)piVar4);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  uVar3 = check_object_property_43(param_1[10]);
  if (uVar3 != 0) {
    iVar2 = menu_item_register((int)piVar4);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  iVar2 = menu_item_register((int)piVar4);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  if (*(char *)(param_1 + 0x10) == '\f') {
    iVar2 = menu_item_register((int)piVar4);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  }
  dispatch_event_to_object_10492252(piVar4,param_1);
  iVar2 = *(int *)param_1[0xb];
  (**(code **)(iVar2 + 0x14))(param_1[0xb] + (int)*(short *)(iVar2 + 0x10),0x1120069,1);
  call_helper_on_fetched_object(piVar4,0x10);
  call_helper_on_fetched_object(piVar4,0xf);
  call_helper_on_fetched_object(piVar4,0xd);
  call_helper_on_fetched_object(piVar4,0xe);
  request_ui_sync_and_set_flag(piVar4);
  request_ui_sync_with_flag_10491f5c(piVar4,1);
  return;
}
