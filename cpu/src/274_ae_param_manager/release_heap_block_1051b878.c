/* @k10d release_heap_block_1051b878 @ 0x1051b878
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_heap_block_1051b878(uint32_t param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_system_heap();
  mempool_release_block(pvVar1,param_2);
  return;
}
