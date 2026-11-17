/* @k10d allocate_heap_block_by_index @ 0x104a8b00
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_heap_block_by_index(uint32_t param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_system_heap();
  mempool_get_block(pvVar1,(void *)(param_2 << 2),2);
  return;
}
