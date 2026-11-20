/* @k10d wait_sem_obj @ 0x10459f36
 * name: model (proposed by the local model from the decompile, confidence 0.82)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Waits on a semaphore object (id in first halfword) with a timeout value in the second
 *   halfword.
 * summary:
 *   Takes a pointer to a 32-bit value, shifts the upper halfword (timeout) into the low
 *   word, and calls kernel entry get_timeout_queue_entry with the semaphore id (lower
 *   halfword) and the timeout. Returns 0 (likely E_OK) on success. Sits in the
 *   rtos_wrappers_and_heap module alongside verified twai_sem_obj and sig_sem_obj,
 *   indicating it is the third semaphore primitive (wait with timeout).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

uint32_t wait_sem_obj(int *param_1)

{
  uintptr_t sp;
  int iStack_c;
  uint32_t uStack_8;
  
  uStack_8 = 0;
  iStack_c = *param_1 << 0x10;
  __trap_get_timeout_queue_entry((int)(short)*param_1,&iStack_c);
  return uStack_8;
}
