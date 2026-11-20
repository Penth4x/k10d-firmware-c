/* @k10d mempool_release_block @ 0x10459bb8
 * name: verified (structural evidence: disassembly: scans 7 entries x 0x14 for start<=ptr<=end, ldi:32 0x10010660,r12; int 0x40)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Frees a block from a heap pool by locating its pool entry and calling the kernel free
 *   routine.
 * summary:
 *   Scans the 7-entry heap descriptor (0x14 bytes each) in param_1 for an entry whose
 *   [start,end) range contains param_2. On match, reads the kernel pool id at offset +0xc
 *   of that entry and passes it to heap_pool_free_block (the kernel free routine,
 *   counterpart to the alloc at 0x10010138 used by mempool_get_block). Returns 1 if the
 *   block was found and freed, 0 otherwise. This is the release counterpart to
 *   mempool_get_block in the rtos_wrappers_and_heap module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10459bd6) overlaps instruction at (ram,0x10459bd4)
    */

uint32_t mempool_release_block(void *param_1,void *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  while (((pcVar2 = (char *)((int)param_1 + iVar1), *pcVar2 == '\0' ||
          (param_2 < *(void **)(pcVar2 + 4))) || (*(void **)(pcVar2 + 8) < param_2))) {
    iVar1 = iVar1 + 0x14;
    iVar3 = iVar3 + 1;
    if (0x8b < iVar1) {
      return 0;
    }
  }
  iVar1 = heap_pool_free_block((int)(short)*(uint32_t *)((int)param_1 + iVar3 * 0x14 + 0xc),(int *)__frv_reg_unset(5));
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}
