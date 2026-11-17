/* @k10d release_heap_block_104e400a @ 0x104e400a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_heap_block_104e400a(void *param_1)

{
  void *pvVar1;
  
  if (param_1 != (void *)0x0) {
    pvVar1 = (void *)get_system_heap();
    mempool_release_block(pvVar1,param_1);
  }
  return;
}
