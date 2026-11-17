/* @k10d init_and_check_subobject @ 0x104ce7ea
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 238_settings_framework (unit names are model-proposed)
 * purpose:
 *   Initializes a sub-object at offset 8 and returns whether a check on offset 0x24 is
 *   positive.
 * summary:
 *   Calls alloc_pool_and_init_task to initialize a 0x14-byte region at param_1+8 with
 *   parameters 0x1000 and 4. Then calls wait_flg_obj on param_1+0x24 with argument 0 and
 *   returns true if the result is greater than 0. The function acts as a virtual method
 *   (slot 2) of cls_105b9674, likely performing setup and a validity check on an object
 *   member.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool init_and_check_subobject(int param_1)

{
  int iVar1;
  
  alloc_pool_and_init_task((int *)(param_1 + 8),0x14,0x1000,4);
  iVar1 = wait_flg_obj((void *)(param_1 + 0x24),0);
  return 0 < iVar1;
}
