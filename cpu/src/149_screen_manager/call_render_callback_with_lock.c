/* @k10d call_render_callback_with_lock @ 0x1046bd00
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 149_screen_manager (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, invokes a registered callback at a fixed address with four parameters,
 *   and releases the lock.
 * summary:
 *   The function calls call_kernel_with_short_id on the object at param_1+0x1ac, likely
 *   acquiring a mutex or semaphore. It then calls the function at 0x1046b38a, passing
 *   param_1+0x78 and the other three parameters. Finally, it calls
 *   check_kernel_call_success_10459d88 on the same object, likely releasing the lock. The
 *   caller is a status-LCD render function, suggesting this is a protected dispatch to a
 *   rendering sink or callback.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_render_callback_with_lock(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5)

{
  uintptr_t sp;
  uint32_t *puVar1;
  uint8_t auStack_20 [4];
  
  puVar1 = (uint32_t *)auStack_20;
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x1ac));
  *puVar1 = param_5;
  (*(code *)0x1046b38a/*ROM*/)(param_1 + 0x78,param_2,param_3,param_4);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x1ac));
  return;
}
