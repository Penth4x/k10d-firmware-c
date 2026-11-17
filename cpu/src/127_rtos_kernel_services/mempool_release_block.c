/* @k10d mempool_release_block @ 0x10459bb8
 * name: verified (structural evidence: disassembly: scans 7 entries x 0x14 for start<=ptr<=end, ldi:32 0x10010660,r12; int 0x40)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Finds the heap pool whose [start,end] range contains the pointer and releases the block
 *   through kernel routine 0x10010660.
 * summary:
 *   VERIFIED: disassembly: scans 7 entries x 0x14 for start<=ptr<=end, ldi:32
 *   0x10010660,r12; int 0x40
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
