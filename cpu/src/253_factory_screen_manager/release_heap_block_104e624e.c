/* @k10d release_heap_block_104e624e @ 0x104e624e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_heap_block_104e624e(void *param_1)

{
  void *pvVar1;
  
  if (param_1 != (void *)0x0) {
    pvVar1 = (void *)get_system_heap();
    mempool_release_block(pvVar1,param_1);
  }
  return;
}
