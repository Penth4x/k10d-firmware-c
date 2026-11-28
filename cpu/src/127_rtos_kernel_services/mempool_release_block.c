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

uint32_t mempool_release_block(void *pool_base, void *block_ptr)

{
  /* Scan 7 pool entries (0x14 bytes each) for one whose [start,end] range
     contains block_ptr.  On match, extract the signed 16-bit pool id at
     entry+0xc and issue the kernel free syscall (int #0x40).  Returns 1
     if the kernel reported success (rc==0), 0 otherwise. */
  int entry_off;

  for (entry_off = 0; entry_off <= 0x8b; entry_off += 0x14) {
    char *e = (char *)pool_base + entry_off;
    if ((*e != '\0' && *(void **)(e + 4) <= block_ptr) && (block_ptr <= *(void **)(e + 8))) {
      return __trap_heap_pool_free_block((int)(short)*(uint32_t *)(e + 0xc),(int *)block_ptr) == 0;
    }
  }
  return 0;
}
