/* @k10d initialize_object_from_source_1047aae8 @ 0x1047aae8
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies fields from a source struct into an object and initializes several sub-objects.
 * summary:
 *   Writes two 32-bit values from param_2 into offsets 0x64 and 0x68 of param_1. Uses the
 *   value at offset 0x68 as an index to fetch four additional values from arrays returned
 *   by get_or_create_sram_object_10478100, get_or_create_singleton_object_1047a73e,
 *   get_or_create_sram_object_104816ee, and get_or_create_sram_object_104a79b2, storing
 *   them at offsets 0x50-0x60. Calls wait_flg_obj twice to initialize sub-objects at
 *   offsets 0x24 and 0x2c, and calls alloc_pool_and_init_task with parameters (0x14,
 *   0x1800, 4) on a sub-object at offset 4, returning whether the result is positive.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool initialize_object_from_source_1047aae8(void *param_1,uint32_t *param_2)

{
  int iVar1;
  
  *(uint32_t *)((int)param_1 + 100) = *param_2;
  *(uint32_t *)((int)param_1 + 0x68) = param_2[1];
  iVar1 = get_or_create_sram_object_10478100();
  *(uint32_t *)((int)param_1 + 0x50) =
       *(uint32_t *)(*(int *)((int)param_1 + 0x68) * 4 + iVar1 + 0x24);
  iVar1 = get_or_create_singleton_object_1047a73e();
  *(uint32_t *)((int)param_1 + 0x54) =
       *(uint32_t *)(*(int *)((int)param_1 + 0x68) * 4 + iVar1 + 4);
  iVar1 = get_or_create_sram_object_104816ee();
  *(uint32_t *)((int)param_1 + 0x58) = *(uint32_t *)(iVar1 + 0xc);
  iVar1 = get_or_create_sram_object_104816ee();
  *(uint32_t *)((int)param_1 + 0x5c) = *(uint32_t *)(iVar1 + 0x10);
  iVar1 = get_or_create_sram_object_104a79b2();
  *(uint32_t *)((int)param_1 + 0x60) = *(uint32_t *)(iVar1 + 4);
  wait_flg_obj((void *)((int)param_1 + 0x24),0);
  wait_flg_obj((void *)((int)param_1 + 0x2c),0x80000000/*SDRAM*/);
  iVar1 = alloc_pool_and_init_task((int *)((int)param_1 + 4),0x14,0x1800,4);
  return 0 < iVar1;
}
