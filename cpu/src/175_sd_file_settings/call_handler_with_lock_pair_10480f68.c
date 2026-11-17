/* @k10d call_handler_with_lock_pair_10480f68 @ 0x10480f68
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * purpose:
 *   Invokes a handler function while bracketing it with two calls on a field at offset 0xc.
 * summary:
 *   The function calls call_kernel_with_short_id on the pointer at param_1+0xc, then calls
 *   store_result_and_check_zero_1047fd1e with the value at param_1+8 plus param_2 and
 *   param_3, and finally calls check_kernel_call_success_10459d88 on the same pointer at
 *   param_1+0xc. The return value of store_result_and_check_zero_1047fd1e is returned. The
 *   paired calls on the same field suggest a lock/unlock or begin/end pattern around the
 *   handler invocation, but the specific subsystem is not determinable from the available
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_handler_with_lock_pair_10480f68(int param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xc));
  uVar1 = store_result_and_check_zero_1047fd1e(*(uint32_t *)(param_1 + 8),param_2,param_3);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xc));
  return uVar1;
}
