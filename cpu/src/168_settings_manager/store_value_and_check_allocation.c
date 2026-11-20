/* @k10d store_value_and_check_allocation @ 0x1047cbba
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Stores a value at offset 0x28 of an object and returns whether a helper call on offset
 *   8 succeeds.
 * summary:
 *   The function writes the 32-bit value pointed to by param_2 into the object at param_1 +
 *   0x28. It then calls alloc_pool_and_init_task with the pointer at param_1 + 8, and
 *   constants 0x14, 0x800, and 4. The return value is true if alloc_pool_and_init_task
 *   returns a positive integer. The role of alloc_pool_and_init_task is not established, so
 *   the specific subsystem is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool store_value_and_check_allocation(cls_105aaa50 *param_1,uint32_t *param_2)

{
  int iVar1;
  
  param_1->field_0x28 = *param_2;
  iVar1 = alloc_pool_and_init_task((int *)&param_1->field_0x8,0x14,0x800,4);
  return 0 < iVar1;
}
