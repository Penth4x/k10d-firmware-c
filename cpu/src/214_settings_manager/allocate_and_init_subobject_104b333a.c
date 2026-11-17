/* @k10d allocate_and_init_subobject_104b333a @ 0x104b333a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a new object, stores it at offset 0x44, and initializes it with two helper
 *   calls.
 * summary:
 *   Calls cls_105a2af8_new(0) to allocate a new object. Stores the resulting pointer at
 *   param_1 + 0x44. If allocation succeeds, calls wait_flg_obj on the new object and
 *   alloc_pool_and_init_task with parameters derived from param_1. Returns true if
 *   allocation succeeded.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool allocate_and_init_subobject_104b333a(int param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)cls_105a2af8_new((uint32_t *)0x0);
  *(void **)(param_1 + 0x44) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    wait_flg_obj(pvVar1,0);
    alloc_pool_and_init_task((int *)(param_1 + 4),0x13,0x2000,4);
  }
  return pvVar1 != (void *)0x0;
}
