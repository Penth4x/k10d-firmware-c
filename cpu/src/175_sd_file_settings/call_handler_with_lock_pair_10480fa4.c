/* @k10d call_handler_with_lock_pair_10480fa4 @ 0x10480fa4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * purpose:
 *   Calls a handler function while holding a lock acquired via a paired lock/unlock helper.
 * summary:
 *   The function acquires a lock by calling call_kernel_with_short_id on a pointer derived
 *   from param_1+0xc. It then calls store_result_and_check_zero_1047fe0e with the value at
 *   param_1+8 and the other two parameters, capturing the boolean return value. Finally, it
 *   releases the lock by calling check_kernel_call_success_10459d88 on the same pointer and
 *   returns the handler's result. The specific subsystem is not identifiable from the
 *   available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool call_handler_with_lock_pair_10480fa4(int param_1,void *param_2,void *param_3)

{
  bool bVar1;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xc));
  bVar1 = store_result_and_check_zero_1047fe0e(*(int *)(param_1 + 8),param_2,param_3);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xc));
  return bVar1;
}
