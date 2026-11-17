/* @k10d release_heap_block_and_clear_104df4d2 @ 0x104df4d2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 250_param_node_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_heap_block_and_clear_104df4d2(uint32_t *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_system_heap();
  mempool_release_block(pvVar1,(void *)*param_1);
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}
