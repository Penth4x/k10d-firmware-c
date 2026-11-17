/* @k10d alloc_heap_block_pool2 @ 0x1047c578
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t alloc_heap_block_pool2(uint32_t param_1,void *param_2)

{
  void *pvVar1;
  uint32_t uVar2;
  
  pvVar1 = (void *)get_system_heap();
  uVar2 = mempool_get_block(pvVar1,param_2,2);
  return uVar2;
}
