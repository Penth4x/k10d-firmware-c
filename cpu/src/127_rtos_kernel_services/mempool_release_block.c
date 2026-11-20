/* @k10d mempool_release_block @ 0x10459bb8
 * name: verified (structural evidence: disassembly: scans 7 entries x 0x14 for start<=ptr<=end, ldi:32 0x10010660,r12; int 0x40)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Frees a block from a heap pool by locating its pool entry and calling the kernel free
 *   routine.
 * summary:
 *   Scans the 7-entry heap descriptor (0x14 bytes each) in param_1 for an entry whose
 *   [start,end) range contains param_2. On match, reads the kernel pool id at offset +0xc
 *   of that entry and passes it to __trap_heap_pool_free_block(the kernel free routine,
 *   counterpart to the alloc at 0x10010138 used by mempool_get_block). Returns 1 if the
 *   block was found and freed, 0 otherwise. This is the release counterpart to
 *   mempool_get_block in the rtos_wrappers_and_heap module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

/* WARNING: Instruction at (ram,0x10459bd6) overlaps instruction at (ram,0x10459bd4)
    */

uint32_t mempool_release_block(void *param_1,void *param_2)

{
  /* Single loop index with a freshly-computed entry pointer: the loop variables stay
     caller-saved (no STM1 of R8-R11), matching the original's small frame. Equivalent to
     the decompiled while-scan: find the first non-empty entry whose [start,end] contains
     param_2, free it, and return 1 on success. */
  int off;

  for (off = 0; off <= 0x8b; off += 0x14) {
    char *e = (char *)param_1 + off;
    if ((*e != '\0' && *(void **)(e + 4) <= param_2) && (param_2 <= *(void **)(e + 8))) {
      return __trap_heap_pool_free_block((int)(short)*(uint32_t *)(e + 0xc),(int *)param_2) == 0;
    }
  }
  return 0;
}
