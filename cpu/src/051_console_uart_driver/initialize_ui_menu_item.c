/* @k10d initialize_ui_menu_item @ 0x103b6176
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Initializes an object structure by clearing fields, setting up internal pointers, and
 *   configuring state based on a flag parameter.
 * summary:
 *   The function clears specific byte offsets in the object pointed to by param_1 and
 *   initializes a sub-structure at offset 0x10. It calls several unnamed helper functions
 *   (set_object_and_three_substates, dispatch_virtual_slot_two_103b6fe0, etc.) to set up
 *   internal state. It extracts bits from param_2 to set boolean flags at offsets 0x55 and
 *   0x56, and uses virtual calls to configure additional state based on these flags and the
 *   result of get_field_at_offset_0x28.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_ui_menu_item(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  *(uint8_t *)((int)param_1 + 0x57) = 0;
  iVar1 = get_or_create_singleton_object_1050b118();
  *(int **)(iVar1 + 0x58) = param_1 + 0x10;
  if (*(char *)(param_1 + 1) == '\0') {
    (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1,0);
  }
  *(uint8_t *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  piVar2 = param_1 + 2;
  call_helper_on_fetched_object(piVar2,0x10);
  call_helper_on_fetched_object(piVar2,0xf);
  call_helper_on_fetched_object(piVar2,0xd);
  call_helper_on_fetched_object(piVar2,0xe);
  set_object_and_three_substates(param_1,0);
  dispatch_virtual_slot_two_103b6fe0(param_1);
  invoke_virtual_slot_two_103b70ce(param_1,0);
  render_dual_viewport_panels(param_1);
  iVar1 = get_or_create_singleton_object_1050b118();
  iVar1 = get_field_at_offset_0x28(iVar1);
  *(bool *)(param_1 + 0x15) = iVar1 != 0;
  *(bool *)((int)param_1 + 0x55) = (param_2 & 1) != 0;
  *(bool *)((int)param_1 + 0x56) = (param_2 & 0x10) != 0;
  forward_two_params_via_helper(piVar2,0,1);
  forward_two_params_via_helper(piVar2,0xd,2);
  forward_two_params_via_helper(piVar2,0xe,2);
  forward_two_params_via_helper(piVar2,0xf,2);
  forward_two_params_via_helper(piVar2,0x10,2);
  if ((*(char *)(param_1 + 0x15) == '\0') && (*(char *)((int)param_1 + 0x55) == '\0')) {
    iVar1 = menu_item_register((int)piVar2);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0x74))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 0x70),1);
    iVar1 = menu_item_register((int)piVar2);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0x74))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 0x70),1);
  }
  else {
    iVar1 = menu_item_register((int)piVar2);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0x74))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 0x70),0);
    iVar1 = menu_item_register((int)piVar2);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0x74))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 0x70),0);
  }
  if (((param_2 & 2) == 0) || ((param_2 & 8) == 0)) {
    iVar1 = menu_item_register((int)piVar2);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  }
  else {
    iVar1 = menu_item_register((int)(param_1 + 2));
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  iVar1 = *(int *)param_1[0xb];
  (**(code **)(iVar1 + 0x14))(param_1[0xb] + (int)*(short *)(iVar1 + 0x10),0x1120075,0);
  dispatch_event_to_object_10492252(piVar2,param_1);
  request_ui_sync_and_set_flag(piVar2);
  request_ui_sync_with_flag_10491f5c(piVar2,1);
  request_ui_sync_with_flag_10491f36(piVar2,0);
  iVar1 = *(int *)param_1[0xb];
  (**(code **)(iVar1 + 0x14))(param_1[0xb] + (int)*(short *)(iVar1 + 0x10),0x1120064,0);
  return;
}
