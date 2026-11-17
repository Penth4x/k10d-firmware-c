/* @k10d dispatch_operation_by_mode @ 0x104aea9a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches a specific operation based on the lower two bits of param_2 and updates the
 *   state of param_1 based on the result.
 * summary:
 *   The function extracts a 2-bit mode from param_2 and calls one of four helper functions
 *   (start_async_operation, invoke_virtual_method_and_store_result, or
 *   check_byte_at_offset_0x16) with varying arguments. Based on whether the helper returns
 *   zero, it calls either invoke_virtual_slot_two_104ae294 or
 *   invoke_virtual_slot_two_104ae35c to update the state of the object in param_1. It
 *   returns true if the operation succeeded (helper returned 0).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool dispatch_operation_by_mode(void *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_2 & 3;
  if (uVar1 == 3) {
    iVar2 = start_async_operation((int *)__frv_reg_unset(4));
  }
  else if (uVar1 == 1) {
    iVar2 = invoke_virtual_method_and_store_result(param_3,4);
  }
  else if (uVar1 == 0) {
    iVar2 = invoke_virtual_method_and_store_result(param_3,3);
  }
  else {
    if (uVar1 != 2) {
      invoke_virtual_slot_two_104ae2e4(param_1);
      return false;
    }
    iVar2 = check_byte_at_offset_0x16((int)param_3);
  }
  if (iVar2 == 0) {
    invoke_virtual_slot_two_104ae294(param_1);
  }
  else {
    invoke_virtual_slot_two_104ae35c(param_1);
  }
  return iVar2 == 0;
}
