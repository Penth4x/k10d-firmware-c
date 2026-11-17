/* @k10d release_heap_block_and_null @ 0x10516adc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_heap_block_and_null(int *param_1)

{
  void *pvVar1;
  
  if (*param_1 != 0) {
    pvVar1 = (void *)get_system_heap();
    mempool_release_block(pvVar1,(void *)*param_1);
  }
  *param_1 = 0;
  *(uint8_t *)(param_1 + 2) = 0;
  return;
}
