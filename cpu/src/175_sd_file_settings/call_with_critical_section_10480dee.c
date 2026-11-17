/* @k10d call_with_critical_section_10480dee @ 0x10480dee
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, calls a target function with three parameters, releases the lock, and
 *   returns the result.
 * summary:
 *   The function calls call_kernel_with_short_id on a pointer derived from param_1 + 0xc,
 *   likely acquiring a mutex or disabling interrupts. It then calls
 *   store_result_and_check_zero_1047fc6e, passing the value at param_1 + 8 as the first
 *   argument along with param_2, param_3, and param_4. Finally, it calls
 *   check_kernel_call_success_10459d88 on the same pointer, likely releasing the lock, and
 *   returns the value from store_result_and_check_zero_1047fc6e. The pattern strongly
 *   suggests a critical section wrapper around an operation on an object pointed to by
 *   param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_with_critical_section_10480dee(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  uint32_t uVar1;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xc));
  uVar1 = store_result_and_check_zero_1047fc6e(*(uint32_t *)(param_1 + 8),param_2,param_3,param_4);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xc));
  return uVar1;
}
