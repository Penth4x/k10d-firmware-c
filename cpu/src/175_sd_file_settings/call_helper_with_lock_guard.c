/* @k10d call_helper_with_lock_guard @ 0x10481152
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * purpose:
 *   Calls a helper function on param_1/param_2 while guarding the call with two adjacent
 *   lock/unlock operations on a field at offset 0xc.
 * summary:
 *   The function first calls call_kernel_with_short_id on the pointer at param_1+0xc, which
 *   appears to be a lock or disable operation. It then checks if the integer at param_2+4
 *   is zero; if so, it returns 0, otherwise it calls parse_and_store_pattern_match with
 *   param_1 and param_2. Finally, it calls check_kernel_call_success_10459d88 on
 *   param_1+0xc, likely an unlock or enable operation, and returns the result of the helper
 *   call. The pattern suggests a critical section or resource-guarded operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_lock_guard(int param_1,void *param_2)

{
  uint32_t uVar1;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xc));
  if (*(int *)((int)param_2 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = parse_and_store_pattern_match(param_1,param_2);
  }
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xc));
  return uVar1;
}
