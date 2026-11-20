/* @k10d dispatch_mode_state_change_103b05ee @ 0x103b05ee
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Dispatches a state change event to a virtual object based on a mode byte and a sub-
 *   state value.
 * summary:
 *   The function reads a mode identifier from offset 0x48 of the input object and a sub-
 *   state value via query_object_property_via_temp_104f15c4. It uses a nested switch
 *   statement to determine if a specific event should be triggered. If the combination of
 *   mode and sub-state matches a valid case, it calls a virtual method (slot 1) on an
 *   object retrieved via menu_item_register with argument 1; otherwise, it calls the same
 *   virtual method with argument 0. This pattern suggests a state machine transition or
 *   event notification mechanism.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_state_change_103b05ee(void *param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = query_object_property_via_temp_104f15c4(*(uint32_t *)((int)param_1 + 0x28));
  iVar2 = menu_item_register((int)param_1 + 8);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  switch(*(uint8_t *)((int)param_1 + 0x48)) {
  case 6:
  case 8:
  case 0xc:
    switch(uVar1) {
    case 0:
    case 5:
switchD_103b0680_caseD_0:
      break;
    case 1:
    case 6:
switchD_103b0680_caseD_1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
    case 7:
      break;
    case 8:
switchD_103b0680_caseD_8:
    default:
      goto LAB_103b06da;
    }
    goto LAB_103b06dc;
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
      break;
    default:
      goto LAB_103b06da;
    }
    goto LAB_103b06dc;
  case 0xe:
  case 0x16:
  case 0x1c:
  case 0x1e:
    switch(uVar1) {
    case 0:
    case 2:
    case 5:
      goto switchD_103b0680_caseD_0;
    case 1:
    case 3:
    case 6:
      goto switchD_103b0680_caseD_1;
    case 4:
    case 7:
      goto LAB_103b06dc;
    case 8:
      goto switchD_103b0680_caseD_8;
    }
    break;
  case 0x18:
    switch(uVar1) {
    case 0:
    case 2:
    case 4:
    case 5:
    case 7:
      goto switchD_103b0680_caseD_0;
    case 1:
    case 3:
    case 6:
      goto switchD_103b0680_caseD_1;
    case 8:
      goto switchD_103b0680_caseD_8;
    }
  }
LAB_103b06da:
LAB_103b06dc:
  iVar2 = menu_item_register((int)param_1 + 8);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  return;
}
