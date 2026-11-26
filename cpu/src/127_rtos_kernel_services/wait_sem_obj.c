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
  /* B-13 FIX (d329): the kernel reads a 2-word descriptor {input@+0, result@+4} ASCENDING from the
   * pointer it is passed and WRITES the result word at base+4. The original lays the two words out
   * CONTIGUOUSLY at sp-8 (st 0,@sp-8; st 0,@sp-4; sth input,@sp-8; call; return *(sp-4)). The decompiler
   * split them into NON-ADJACENT DESCENDING locals (iStack_c@sp+0xc as base, uStack_8@sp+8 = base-4) and
   * RETURNED uStack_8 (base-4) — a slot the trap never writes — so wait_sem_obj ALWAYS returned 0 and the
   * real result (timeout/error at base+4) was lost. Lay it out contiguously; return the result (desc[1]). */
  uint32_t desc[2];

  desc[0] = (uint32_t)*param_1 << 0x10;   /* input word: timeout in the high halfword (orig st 0 + sth) */
  desc[1] = 0;                            /* result slot the trap writes (orig sp-4) */
  __trap_get_timeout_queue_entry((int)(short)*param_1, desc);
  return desc[1];
}
