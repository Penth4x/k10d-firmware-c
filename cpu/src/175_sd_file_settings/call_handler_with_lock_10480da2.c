/* @k10d call_handler_with_lock_10480da2 @ 0x10480da2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, calls a handler function with three parameters, releases the lock, and
 *   returns the handler's result.
 * summary:
 *   The function calls call_kernel_with_short_id on a pointer derived from param_1 + 0xc,
 *   likely acquiring a mutex or disabling interrupts. It then reads a function pointer from
 *   param_1 + 8 and calls store_result_and_check_zero_1047fc38 with that pointer and the
 *   remaining arguments (param_2, param_3, param_4). Finally, it calls
 *   check_kernel_call_success_10459d88 on the same pointer, likely releasing the lock, and
 *   returns the value from store_result_and_check_zero_1047fc38. The pattern suggests a
 *   thread-safe or interrupt-safe invocation of a callback stored in a structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_handler_with_lock_10480da2(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  uint32_t uVar1;
  uintptr_t sp;
  uint32_t *puVar2;
  uint8_t auStack_20 [4];
  
  puVar2 = (uint32_t *)auStack_20;
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xc));
  uVar1 = *(uint32_t *)(param_1 + 8);
  *puVar2 = 1;
  uVar1 = store_result_and_check_zero_1047fc38(uVar1,param_2,param_3,param_4);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xc));
  return uVar1;
}
