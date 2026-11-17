/* @k10d initialize_object_with_subsystem_hooks @ 0x103b00bc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Initializes an object by setting a timeout, querying status fields, and invoking a long
 *   sequence of setup routines.
 * summary:
 *   The function sets param_1[0xd] to 15000 and conditionally calls a virtual method if
 *   param_1[1] is null. It then populates several byte fields (0x12, 0x14, 0x49, 0x4e,
 *   0x4f) by calling helper functions with param_1[10] as an argument. Finally, it calls
 *   over twenty other functions in the 0x103bxxxx range, passing the object and other
 *   parameters, before calling three functions on param_1+2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_with_subsystem_hooks(int *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  uint8_t uVar3;
  uint32_t uVar1;
  uint uVar2;
  int *piVar4;
  undefined5 uVar5;
  
  param_1[0xd] = 15000;
  if (*(char *)(param_1 + 1) == '\0') {
    (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1,0);
  }
  uVar3 = query_object_property_via_temp_104f2482(param_1[10]);
  *(uint8_t *)(param_1 + 0x14) = uVar3;
  uVar1 = call_two_helpers_in_sequence_104f1b02(param_1[10]);
  *(char *)(param_1 + 0x12) = (char)uVar1;
  uVar2 = query_object_byte_property_104f1ab6(param_1[10]);
  *(char *)((int)param_1 + 0x49) = (char)uVar2;
  uVar3 = classify_state_by_two_checks(param_1[10]);
  *(uint8_t *)((int)param_1 + 0x4e) = uVar3;
  uVar5 = compute_value_from_object_state(param_1[10],0);
  uVar1 = (uint32_t)uVar5;
  *(char *)((int)param_1 + 0x4f) = (char)((uint5)uVar5 >> 0x20);
  dispatch_virtual_state_toggle(param_1);
  dispatch_state_change_via_vtable_103b055a(param_1);
  dispatch_mode_state_change_103b05ee(param_1);
  toggle_virtual_state_flag_103b0700(param_1);
  register_error_menu_item(param_1,uVar1,param_3,param_4);
  format_and_register_menu_item_103b1ed8(param_1,uVar1,param_3,param_4);
  toggle_virtual_state_with_cleanup(param_1);
  render_menu_item_labels(param_1);
  dispatch_object_state_update_103b0ac2(param_1);
  compute_and_dispatch_state_value(param_1);
  toggle_object_state_via_virtual_call_103b0b44(param_1);
  update_three_ui_elements(param_1);
  configure_menu_item_states_103b0e74(param_1);
  toggle_virtual_state_based_on_flag_103b0fbc(param_1);
  set_menu_item_state_by_query(param_1);
  init_global_offsets_and_dispatch(param_1);
  toggle_virtual_state_flag_103b1788(param_1);
  dispatch_state_change_via_vtable_103b1830(param_1);
  build_date_time_menu_items(param_1);
  format_and_render_menu_item_103b1afc(param_1);
  prepare_and_send_buffer(param_1);
  configure_menu_item_visibility(param_1);
  format_and_register_menu_item_103b22a2(param_1,uVar1,(uint)param_3,(uint)param_4);
  piVar4 = param_1 + 2;
  dispatch_event_to_object_10492252(piVar4,param_1);
  request_ui_sync_and_set_flag(piVar4);
  request_ui_sync_with_flag_10491f5c(piVar4,1);
  return;
}
