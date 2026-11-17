/* @k10d store_result_and_flag @ 0x1047fd44
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 171_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool store_result_and_flag(int param_1,void *param_2,uint *param_3)

{
  uint32_t uVar1;
  uintptr_t sp;
  byte bStack_9;
  
  bStack_9 = 0;
  uVar1 = read_byte_via_helper(param_2,&bStack_9);
  *(uint32_t *)(param_1 + 4) = uVar1;
  *param_3 = (uint)bStack_9;
  return *(int *)(param_1 + 4) == 0;
}
