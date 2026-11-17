/* @k10d call_with_two_byte_lock @ 0x10480cdc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, calls a helper with three parameters, releases the lock, and returns
 *   the helper's result.
 * summary:
 *   The function calls call_kernel_with_short_id on the pointer at offset 0xc of param_1,
 *   then invokes allocate_buffer_or_store_error with the value at offset 8 of param_1,
 *   param_2, param_3, and param_4. It then calls check_kernel_call_success_10459d88 on the
 *   same pointer at offset 0xc and returns the result from allocate_buffer_or_store_error.
 *   The pattern suggests a critical section or mutex lock/unlock around the core operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_with_two_byte_lock(int param_1,uint32_t param_2,uint32_t param_3,int *param_4)

{
  uint32_t uVar1;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xc));
  uVar1 = allocate_buffer_or_store_error(*(uint32_t *)(param_1 + 8),param_2,param_3,param_4);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xc));
  return uVar1;
}
