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

uint32_t mempool_get_block(void *pool_heap_base,void *alloc_size,int pool_index)

{
  char *pool_entry;
  int trap_ret;
  uint32_t out_block;

  if ((pool_index < 0) || (6 < pool_index)) {
    out_block = 0;
  }
  else {
    pool_entry = (char *)(pool_index * 0x14 + (int)pool_heap_base);
    if (*pool_entry == '\0') {
      out_block = 0;
    }
    else {
      out_block = 0;
      trap_ret = __trap_kernel_alloc_pool_block((int)(short)*(uint32_t *)(pool_entry + 0xc),alloc_size,&out_block);
      if (trap_ret != 0) {
        out_block = 0;
      }
    }
  }
  return out_block;
}
