/* @k10d call_handler_with_lock_10480e6a @ 0x10480e6a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, calls a handler with a parameter, releases the lock, and returns the
 *   handler's result.
 * summary:
 *   The function takes a pointer to a structure (param_1) and a value (param_2). It calls
 *   call_kernel_with_short_id on the field at offset 0xc, which likely acquires a mutex or
 *   lock. It then calls check_allocation_result, passing the field at offset 8 and param_2,
 *   and stores the return value. Finally, it calls check_kernel_call_success_10459d88 on
 *   the field at offset 0xc, likely releasing the lock, and returns the result from
 *   check_allocation_result. The pattern strongly suggests a critical section wrapper
 *   around a specific operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_handler_with_lock_10480e6a(int param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xc));
  uVar1 = check_allocation_result(*(uint32_t *)(param_1 + 8),param_2);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xc));
  return uVar1;
}
