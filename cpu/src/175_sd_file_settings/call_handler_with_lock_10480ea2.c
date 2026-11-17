/* @k10d call_handler_with_lock_10480ea2 @ 0x10480ea2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * purpose:
 *   Calls a handler function on a struct field while holding a lock acquired on another
 *   field.
 * summary:
 *   The function acquires a lock by calling call_kernel_with_short_id on the pointer at
 *   offset 0xc of param_1. It then calls store_result_and_check_zero_1047fcfa, passing the
 *   value at offset 8 of param_1 and param_2. Finally, it releases the lock by calling
 *   check_kernel_call_success_10459d88 on the same pointer at offset 0xc and returns the
 *   result of the handler call. The pattern suggests a critical section protecting the
 *   execution of store_result_and_check_zero_1047fcfa.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_handler_with_lock_10480ea2(int param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xc));
  uVar1 = store_result_and_check_zero_1047fcfa(*(uint32_t *)(param_1 + 8),param_2);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xc));
  return uVar1;
}
