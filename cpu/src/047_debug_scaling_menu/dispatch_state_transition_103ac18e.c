/* @k10d dispatch_state_transition_103ac18e @ 0x103ac18e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Performs a state transition on an object based on a mode and status code.
 * summary:
 *   The function reads a status code from param_1+0x28 via
 *   query_object_property_via_temp_104f15c4 and a mode byte from param_1+0x48. It uses
 *   these values in a nested switch statement to determine a target state (0, 1, or 8). It
 *   then retrieves an object pointer via menu_item_register and invokes a virtual method
 *   (slot 1) on it, passing the determined state as an argument. The specific camera
 *   subsystem is not identifiable from the provided code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_transition_103ac18e(void *param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = query_object_property_via_temp_104f15c4(*(uint32_t *)((int)param_1 + 0x28));
  iVar2 = menu_item_register((int)param_1 + 8);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  switch(*(uint8_t *)((int)param_1 + 0x48)) {
  case 6:
  case 8:
  case 0xc:
    switch(uVar1) {
    case 0:
    case 5:
      goto switchD_103ac220_caseD_0;
    case 1:
    case 6:
switchD_103ac220_caseD_1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
    case 7:
      break;
    case 8:
switchD_103ac220_caseD_8:
    }
    break;
  default:
switchD_103ac220_caseD_0:
    break;
  case 10:
    switch(uVar1) {
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
    switch(uVar1) {
    case 0:
    case 2:
    case 5:
      goto switchD_103ac220_caseD_0;
    case 1:
    case 3:
    case 6:
      goto switchD_103ac220_caseD_1;
    case 4:
    case 7:
      break;
    case 8:
      goto switchD_103ac220_caseD_8;
    }
    break;
  case 0x18:
    switch(uVar1) {
    case 0:
    case 2:
    case 4:
    case 5:
    case 7:
      goto switchD_103ac220_caseD_0;
    case 1:
    case 3:
    case 6:
      goto switchD_103ac220_caseD_1;
    case 8:
      goto switchD_103ac220_caseD_8;
    default:
      break;
    }
  }
  iVar2 = menu_item_register((int)param_1 + 8);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  return;
}
