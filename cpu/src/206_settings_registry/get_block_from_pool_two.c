/* @k10d get_block_from_pool_two @ 0x104a8e78
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_block_from_pool_two(void *param_1)

{
  mempool_get_block((void *)(_DAT_8004907c/*SDRAM*/),(void *)(param_1),(int)(2));
  return;
}
