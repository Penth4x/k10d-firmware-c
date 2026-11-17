/* @k10d heap_free_2 @ 0x10459e72
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void heap_free_2(int param_1)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = (void *)get_system_heap();
    mempool_release_block(pvVar1,(void *)param_1);
  }
  return;
}
