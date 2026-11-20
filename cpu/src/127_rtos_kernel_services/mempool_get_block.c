/* @k10d mempool_get_block @ 0x10459b70
 * name: verified (structural evidence: disassembly: bounds check 0..6, entry = heap+idx*0x14, ldi:32 0x10010138,r12; int 0x40)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Allocates from pool param_3 (0-6) of a heap descriptor (7 entries x 0x14 bytes: in-use,
 *   start, end, kernel pool id at +0xc) through kernel routine 0x10010138; returns the
 *   block or 0.
 * summary:
 *   VERIFIED: disassembly: bounds check 0..6, entry = heap+idx*0x14, ldi:32 0x10010138,r12;
 *   int 0x40
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

uint32_t mempool_get_block(void *param_1,void *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t uStack_8;
  
  if ((param_3 < 0) || (6 < param_3)) {
    uStack_8 = 0;
  }
  else {
    pcVar1 = (char *)(param_3 * 0x14 + (int)param_1);
    if (*pcVar1 == '\0') {
      uStack_8 = 0;
    }
    else {
      uStack_8 = 0;
      iVar2 = __trap_kernel_alloc_pool_block((int)(short)*(uint32_t *)(pcVar1 + 0xc),param_2,&uStack_8);
      if (iVar2 != 0) {
        uStack_8 = 0;
      }
    }
  }
  return uStack_8;
}
