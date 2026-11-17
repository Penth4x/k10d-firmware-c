/* @k10d call_helper_with_lock_pair @ 0x10480d20
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * purpose:
 *   Calls a helper function on a field of param_1 while bracketing it with two other helper
 *   calls.
 * summary:
 *   The function calls call_kernel_with_short_id on the pointer at param_1+0xc, then calls
 *   store_result_and_check_zero_1047fbda with the value at param_1+8 and param_2, and
 *   finally calls check_kernel_call_success_10459d88 on the pointer at param_1+0xc. It
 *   returns the result of the middle call. The pattern suggests a lock/unlock or begin/end
 *   pair around a core operation, but the specific roles of the callees are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_lock_pair(int param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xc));
  uVar1 = store_result_and_check_zero_1047fbda(*(uint32_t *)(param_1 + 8),param_2);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xc));
  return uVar1;
}
