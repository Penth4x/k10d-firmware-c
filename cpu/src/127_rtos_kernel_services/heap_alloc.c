/* @k10d heap_alloc @ 0x10459e10
 * name: verified (structural evidence: disassembly: get_system_heap then mempool_get_block(heap, size, 3); constructors call it and store a vtable into the result)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Allocates param_1 bytes from the system heap (pool set from get_system_heap, mode 3);
 *   also the operator new behind constructors.
 * summary:
 *   VERIFIED: disassembly: get_system_heap then mempool_get_block(heap, size, 3);
 *   constructors call it and store a vtable into the result
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* Settings store reader. Callers pass index in r4 via delay slot (ldi:8 idx,r4 in call's delay
   slot) */

uint32_t heap_alloc(void *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  
  pvVar1 = (void *)get_system_heap();
  uVar2 = mempool_get_block(pvVar1,param_1,3);
  return uVar2;
}
