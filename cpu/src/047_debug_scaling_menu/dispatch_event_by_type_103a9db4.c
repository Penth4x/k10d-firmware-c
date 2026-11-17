/* @k10d dispatch_event_by_type_103a9db4 @ 0x103a9db4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Dispatches an event object based on its type field, calling specific handlers and
 *   updating state.
 * summary:
 *   The function reads a type byte from offset 0x40 of the object in param_1. It branches
 *   on this type to call different helper functions (compute_exposure_params,
 *   compute_value_from_object_state, classify_state_by_two_checks,
 *   get_mode_dependent_setting_104f0252) with data from offset 0x28. It also invokes a
 *   virtual method (slot 2) on an object retrieved via menu_item_register, passing 0 or 1
 *   as an argument, likely to signal state changes. Finally, it calls
 *   render_exposure_value_digits_103a9ed6 with the result of the handler.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_by_type_103a9db4(void *param_1,uint32_t param_2)

{
  char cVar1;
  int iVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)param_1 + 8;
  iVar2 = menu_item_register(iVar6);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  if (*(char *)((int)param_1 + 0x40) == '\f') {
    uVar4 = *(uint32_t *)((int)param_1 + 0x28);
    uVar3 = query_object_property_via_temp_104f2482(uVar4);
    iVar2 = compute_exposure_params(uVar4,uVar3);
  }
  else {
    iVar2 = compute_value_from_object_state(*(uint32_t *)((int)param_1 + 0x28),param_2);
  }
  cVar1 = *(char *)((int)param_1 + 0x40);
  if (((cVar1 == '\x1e') || (cVar1 == '\x1c')) || (cVar1 == '\x18')) {
    if (iVar2 == 0) {
      iVar5 = *(int *)((int)param_1 + 0x28);
      iVar2 = classify_state_by_two_checks(iVar5);
      iVar2 = get_mode_dependent_setting_104f0252(iVar5,iVar2);
    }
  }
  else {
    if (cVar1 == '\x16') {
      iVar2 = menu_item_register(iVar6);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
      goto LAB_103a9eac;
    }
    if (iVar2 == 0) {
      iVar2 = menu_item_register((int)param_1 + 8);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
      goto LAB_103a9eac;
    }
  }
  render_exposure_value_digits_103a9ed6((int)param_1,iVar2);
LAB_103a9eac:
  iVar2 = menu_item_register(iVar6);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  return;
}
