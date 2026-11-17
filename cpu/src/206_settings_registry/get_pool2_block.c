/* @k10d get_pool2_block @ 0x104a8e46
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Allocates a block from pool index 2 of the heap descriptor at 0x8004907c.
 * summary:
 *   Thin wrapper around mempool_get_block that passes the fixed pool index 2 and the
 *   caller-supplied size (param_1). Returns the allocated block pointer or 0. Called from
 *   constructor/destructor bodies of three classes, suggesting it is used to obtain a
 *   fixed-size object from a dedicated memory pool.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_pool2_block(void *param_1)

{
  uint32_t uVar1;
  
  uVar1 = mempool_get_block((void *)_DAT_8004907c/*SDRAM*/,param_1,2);
  return uVar1;
}
