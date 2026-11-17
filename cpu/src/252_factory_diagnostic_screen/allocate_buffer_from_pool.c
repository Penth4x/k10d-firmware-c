/* @k10d allocate_buffer_from_pool @ 0x104e46d8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool allocate_buffer_from_pool(int param_1)

{
  int iVar1;
  
  iVar1 = mempool_get_block(*(void **)(param_1 + 0x48),(void *)0x80000,0);
  *(int *)(param_1 + 0x38) = iVar1;
  *(uint32_t *)(param_1 + 0x3c) = 0x20000;
  return iVar1 != 0;
}
