/* @k10d release_heap_block_1047a6ec @ 0x1047a6ec
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_heap_block_1047a6ec(uint32_t param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_system_heap();
  mempool_release_block(pvVar1,param_2);
  return;
}
