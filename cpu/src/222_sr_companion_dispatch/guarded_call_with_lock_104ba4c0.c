/* @k10d guarded_call_with_lock_104ba4c0 @ 0x104ba4c0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, calls a helper and a dispatcher, then releases the lock, returning the
 *   dispatcher's result.
 * summary:
 *   The function calls set_pointer_and_clear_flag on a pointer derived from param_1 (offset
 *   0x2c) and param_1+4, likely acquiring a mutex or lock. If successful, it calls
 *   copy_buffer_with_padding with param_1, param_2, a value from param_1+0x48, and param_3.
 *   It then calls forward_to_virtual_slot_2 with pointers from param_1+0x18, param_1+4, and
 *   param_1+0x48, storing the result in uVar2. Finally, it calls delete_signal_semaphore on
 *   param_1+0x2c, likely releasing the lock. The return value is the result of
 *   forward_to_virtual_slot_2 or 0 if the initial check failed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t guarded_call_with_lock_104ba4c0(int param_1,uint32_t param_2,uint32_t param_3)

{
  bool bVar1;
  uint32_t uVar2;
  
  bVar1 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  uVar2 = 0;
  if (bVar1) {
    copy_buffer_with_padding(param_1,param_2,*(uint32_t *)(param_1 + 0x48),param_3);
    uVar2 = forward_to_virtual_slot_2(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),*(void **)(param_1 + 0x48))
    ;
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return uVar2;
}
