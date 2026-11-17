/* @k10d dispatch_mode_state_transition_103a9b0a @ 0x103a9b0a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object derived from param_1, computes a state value, and
 *   branches based on a mode byte.
 * summary:
 *   The function retrieves an object pointer via menu_item_register and calls a virtual
 *   method (slot 2) with argument 0. It then calls query_object_property_via_temp_104f15c4
 *   or get_setting_or_compute_value based on param_2 to compute a value. A large switch
 *   statement on the byte at param_1+0x40 and the computed value determines control flow,
 *   though all branches currently lead to break or fall-through. Finally, it calls the same
 *   virtual method with argument 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_state_transition_103a9b0a(void *param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = menu_item_register((int)param_1 + 8);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  if (param_2 == 0) {
    uVar2 = query_object_property_via_temp_104f15c4(*(uint32_t *)((int)param_1 + 0x28));
  }
  else {
    uVar2 = get_setting_or_compute_value(*(uint32_t *)((int)param_1 + 0x28),param_2);
  }
  empty_stub_function_103b76f0();
  empty_noop_stub_103b76f2();
  switch(*(uint8_t *)((int)param_1 + 0x40)) {
  case 6:
  case 8:
  case 0xc:
    switch(uVar2) {
    case 0:
    case 5:
      goto switchD_103a9bfc_caseD_0;
    case 1:
    case 6:
switchD_103a9bfc_caseD_1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
    case 7:
      break;
    case 8:
switchD_103a9bfc_caseD_8:
    }
    break;
  default:
switchD_103a9bfc_caseD_0:
    break;
  case 10:
    switch(uVar2) {
    case 0:
    case 2:
    case 4:
    case 5:
    case 7:
    case 8:
      break;
    case 1:
    case 3:
    case 6:
    }
    break;
  case 0xe:
  case 0x16:
  case 0x1c:
  case 0x1e:
    switch(uVar2) {
    case 0:
    case 2:
    case 5:
      goto switchD_103a9bfc_caseD_0;
    case 1:
    case 3:
    case 6:
      goto switchD_103a9bfc_caseD_1;
    case 4:
    case 7:
      break;
    case 8:
      goto switchD_103a9bfc_caseD_8;
    }
    break;
  case 0x18:
    switch(uVar2) {
    case 0:
    case 2:
    case 4:
    case 5:
    case 7:
      goto switchD_103a9bfc_caseD_0;
    case 1:
    case 3:
    case 6:
      goto switchD_103a9bfc_caseD_1;
    case 8:
      goto switchD_103a9bfc_caseD_8;
    default:
      break;
    }
  }
  iVar1 = menu_item_register((int)param_1 + 8);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  return;
}
