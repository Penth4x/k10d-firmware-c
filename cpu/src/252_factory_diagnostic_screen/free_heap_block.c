/* @k10d free_heap_block @ 0x104e404c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_heap_block(void *param_1)

{
  void *pvVar1;
  
  if (param_1 != (void *)0x0) {
    pvVar1 = (void *)get_system_heap();
    mempool_release_block(pvVar1,param_1);
  }
  return;
}
