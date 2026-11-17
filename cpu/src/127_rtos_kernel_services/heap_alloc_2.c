/* @k10d heap_alloc_2 @ 0x10459e52
 * name: verified (structural evidence: disassembly identical to heap_alloc)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Same body as heap_alloc: allocates param_1 bytes from the system heap via
 *   mempool_get_block(heap, size, 3) (a second allocator entry point, e.g. operator new[]).
 * summary:
 *   VERIFIED: disassembly identical to heap_alloc
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t heap_alloc_2(int param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  
  pvVar1 = (void *)get_system_heap();
  uVar2 = mempool_get_block(pvVar1,(void *)param_1,3);
  return uVar2;
}
