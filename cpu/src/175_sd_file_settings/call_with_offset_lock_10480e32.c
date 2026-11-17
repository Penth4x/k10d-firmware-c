/* @k10d call_with_offset_lock_10480e32 @ 0x10480e32
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * purpose:
 *   Locks a field at offset 0xc, calls a helper with field at offset 8 and param_2, then
 *   unlocks.
 * summary:
 *   The function calls call_kernel_with_short_id on the pointer at param_1+0xc, likely
 *   acquiring a lock or setting a state. It then calls store_result_and_check_zero_1047fca6
 *   with the value at param_1+8 and param_2, capturing the return value. Finally, it calls
 *   check_kernel_call_success_10459d88 on param_1+0xc, likely releasing the lock or
 *   resetting the state, and returns the result from store_result_and_check_zero_1047fca6.
 *   The pattern suggests a critical section wrapper around a specific operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_with_offset_lock_10480e32(void *param_1,void *param_2)

{
  uint32_t uVar1;
  
  call_kernel_with_short_id((uint32_t *)((int)param_1 + 0xc));
  uVar1 = store_result_and_check_zero_1047fca6(*(uint32_t *)((int)param_1 + 8),param_2);
  check_kernel_call_success_10459d88((uint32_t *)((int)param_1 + 0xc));
  return uVar1;
}
