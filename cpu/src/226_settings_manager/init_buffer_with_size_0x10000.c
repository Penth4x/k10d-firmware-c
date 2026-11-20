/* @k10d init_buffer_with_size_0x10000 @ 0x104bf57e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 226_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool init_buffer_with_size_0x10000(int param_1)

{
  int iVar1;
  
  *(uint32_t *)(param_1 + 0x8c8) = 0x10000;
  iVar1 = init_buffer_with_pool_alloc((int *)(param_1 + 0x8ac),(int)(0x10000));
  *(int *)(param_1 + 0x8c4) = iVar1;
  return iVar1 != 0;
}
