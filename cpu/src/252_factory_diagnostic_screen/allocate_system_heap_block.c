/* @k10d allocate_system_heap_block @ 0x104e3fea
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Allocates a memory block from pool 0 of the system heap descriptor.
 * summary:
 *   Retrieves the system heap descriptor via get_system_heap and passes it to
 *   mempool_get_block with pool index 0 and the size in param_1. Returns the allocated
 *   block pointer or 0 on failure. No camera-specific subsystem is indicated by the code or
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_system_heap_block(void *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  
  pvVar1 = (void *)get_system_heap();
  uVar2 = mempool_get_block(pvVar1,param_1,0);
  return uVar2;
}
