/* @k10d free_heap_block_if_valid @ 0x104e6290
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_heap_block_if_valid(void *param_1)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = (void *)get_system_heap();
    mempool_release_block(pvVar1,param_1);
  }
  return;
}
