/* @k10d call_helper_with_lock_10480d58 @ 0x10480d58
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, calls a helper with four parameters, releases the lock, and returns
 *   the helper's result.
 * summary:
 *   The function calls call_kernel_with_short_id on a pointer derived from param_1 + 0xc,
 *   likely acquiring a lock or entering a critical section. It then reads an integer from
 *   param_1 + 8 and calls call_helper_and_store_result_1047fbfe with that value, param_2,
 *   param_3, the constant 1, and param_4. Finally, it calls
 *   check_kernel_call_success_10459d88 on the same pointer, likely releasing the lock, and
 *   returns the boolean result from call_helper_and_store_result_1047fbfe. The pattern
 *   strongly suggests a synchronized call to an underlying operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool call_helper_with_lock_10480d58(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  bool bVar2;
  uintptr_t sp;
  int *piVar3;
  uint8_t auStack_20 [4];
  
  piVar3 = (int *)auStack_20;
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xc));
  iVar1 = *(int *)(param_1 + 8);
  *piVar3 = param_4;
  bVar2 = call_helper_and_store_result_1047fbfe(iVar1,param_2,param_3,1,*piVar3);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xc));
  return bVar2;
}
