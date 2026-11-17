/* @k10d dispatch_mode_change_request_104aea08 @ 0x104aea08
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Maps a 4-bit mode code to a priority, queries a state function, and updates the object
 *   state accordingly.
 * summary:
 *   The function extracts bits 4-7 of param_2 to determine a mode category (0x10-0x40). It
 *   calls invoke_virtual_method_and_store_result with a corresponding priority value (4, 3,
 *   2, or 1) and param_3. Based on the result, it calls either
 *   invoke_virtual_slot_two_104ae294 (on success/zero) or invoke_virtual_slot_two_104ae35c
 *   (on non-zero) to update the state of param_1. If the mode code is invalid, it calls
 *   invoke_virtual_slot_two_104ae2e4 and returns false. This appears to be a state machine
 *   transition handler for a camera mode or subsystem.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool dispatch_mode_change_request_104aea08(void *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_2 & 0xf0;
  if (uVar1 == 0x10) {
    iVar2 = invoke_virtual_method_and_store_result(param_3,4);
  }
  else if (uVar1 == 0x20) {
    iVar2 = invoke_virtual_method_and_store_result(param_3,3);
  }
  else if (uVar1 == 0x30) {
    iVar2 = invoke_virtual_method_and_store_result(param_3,2);
  }
  else {
    if (uVar1 != 0x40) {
      invoke_virtual_slot_two_104ae2e4(param_1);
      return false;
    }
    iVar2 = invoke_virtual_method_and_store_result(param_3,1);
  }
  if (iVar2 == 0) {
    invoke_virtual_slot_two_104ae294(param_1);
  }
  else {
    invoke_virtual_slot_two_104ae35c(param_1);
  }
  return iVar2 == 0;
}
