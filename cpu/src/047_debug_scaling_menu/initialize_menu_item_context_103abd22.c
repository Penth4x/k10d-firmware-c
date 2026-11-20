/* @k10d initialize_menu_item_context_103abd22 @ 0x103abd22
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Initializes an object structure by calling a series of setup routines and populating
 *   fields from helper functions.
 * summary:
 *   The function begins by calling two unknown initialization routines
 *   (empty_stub_function_103b76f0, empty_noop_stub_103b76f2). It conditionally invokes a
 *   virtual method if a specific byte in the object is zero. It then initializes a sub-
 *   structure at offset 0x8 with two calls to forward_params_to_helper_1049207a. The core
 *   of the function involves a long sequence of calls to functions in the
 *   0x103ac000-0x103ad000 range, passing the object pointer, which likely sets up various
 *   subsystems or states. It also populates several byte fields (offsets 0x4e, 0x49, 0x4b,
 *   0x13, 0x4d) and an integer field (0x34) using values returned from functions in the
 *   0x104f0000 range based on the value at object offset 0x28. Finally, it performs further
 *   setup on the sub-structure and conditionally calls check_heap_alloc_success if the
 *   second parameter's least significant bit is set.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_menu_item_context_103abd22(cls_10565770 *param_1,uint param_2)

{
  int iVar1;
  uint8_t uVar3;
  uint32_t uVar2;
  char cVar4;
  uint8_t *puVar5;
  
  empty_stub_function_103b76f0();
  empty_noop_stub_103b76f2();
  if (param_1->field_0x4 == '\0') {
    (((vtbl_entry*)(param_1->field_0x0))[8].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj,0);
  }
  puVar5 = &param_1->field5_0x8;
  forward_params_to_helper_1049207a(puVar5,0,100);
  forward_params_to_helper_1049207a(puVar5,1,100);
  iVar1 = get_setting_delay_ms_104f1820(param_1->field_0x28);
  param_1->field_0x34 = iVar1;
  uVar3 = query_object_property_via_temp_104f2482(param_1->field_0x28);
  param_1->field_0x4e = uVar3;
  empty_stub_function_103b76f0();
  empty_noop_stub_103b76f2();
  register_menu_item_and_set_state_103ad2e6(param_1);
  build_date_time_string(param_1);
  set_object_flag_based_on_state(param_1);
  toggle_object_state_via_virtual_call_103ac416(param_1);
  toggle_virtual_state_flag_103ac4b0(param_1);
  toggle_virtual_state_based_on_flag_103ac544(param_1);
  uVar2 = call_two_helpers_in_sequence_104f1b02(param_1->field_0x28);
  param_1->field_0x48 = (char)uVar2;
  uVar3 = query_object_property_25(param_1->field_0x28);
  param_1->field_0x49 = uVar3;
  dispatch_state_transition_103ac18e(param_1);
  uVar3 = query_object_via_temp_buffer_104f2788(param_1->field_0x28);
  param_1->field_0x4b = uVar3;
  cVar4 = check_setting_0xd2_is_one(param_1->field_0x28);
  param_1->field_0x4c = cVar4;
  uVar3 = check_string_length_limit(param_1->field_0x28);
  param_1->field_0x4d = uVar3;
  dispatch_mode_state_update_103ac814(param_1);
  dispatch_mode_state_transition_103acf06(param_1);
  register_menu_item_and_set_state_103ad23e(param_1);
  dispatch_mode_state_update_103ac6a8(param_1);
  toggle_object_state_via_virtual_call_103ac2a0(param_1);
  dispatch_object_state_update_103ad5b2(param_1);
  iVar1 = menu_item_register((int)puVar5);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  forward_two_params_via_helper(puVar5,0x29,1);
  forward_two_params_via_helper(puVar5,0x2b,2);
  dispatch_event_to_object_10492252((cls_105b4254 *)puVar5,param_1);
  request_ui_sync_and_set_flag((cls_105b4254 *)puVar5);
  request_ui_sync_with_flag_10491f5c(puVar5,1);
  if ((param_2 & 1) != 0) {
    check_heap_alloc_success((int *)&param_1->field_0x40,0x96);
  }
  return;
}
