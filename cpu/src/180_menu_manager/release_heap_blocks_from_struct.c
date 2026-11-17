/* @k10d release_heap_blocks_from_struct @ 0x1048634a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 180_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_heap_blocks_from_struct(int param_1, uint32_t param_x1)

{
  void *pvVar1;
  
  *(uint8_t *)(param_1 + 0x9c) = 0;
  pvVar1 = (void *)get_system_heap();
  mempool_release_block(pvVar1,*(void **)(param_1 + 0xa4));
  pvVar1 = (void *)get_system_heap();
  mempool_release_block(pvVar1,*(void **)(param_1 + 0xa8));
  *(uint32_t *)(param_1 + 0xa4) = 0;
  *(uint32_t *)(param_1 + 0xa8) = 0;
  return;
}
