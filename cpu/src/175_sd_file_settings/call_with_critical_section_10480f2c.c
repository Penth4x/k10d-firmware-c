/* @k10d call_with_critical_section_10480f2c @ 0x10480f2c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * purpose:
 *   Invokes a target function while holding a lock acquired from an object field.
 * summary:
 *   Acquires a synchronization primitive via call_kernel_with_short_id on the field at
 *   offset 0xc of param_1. Calls store_result_and_check_zero_1047fd7c with the value at
 *   offset 8 of param_1, param_2, and param_3. Releases the lock via
 *   check_kernel_call_success_10459d88 and returns the result of the inner call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_with_critical_section_10480f2c(int param_1,void *param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xc));
  uVar1 = store_result_and_check_zero_1047fd7c(*(uint32_t *)(param_1 + 8),param_2,param_3);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xc));
  return uVar1;
}
