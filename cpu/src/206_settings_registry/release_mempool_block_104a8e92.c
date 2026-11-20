/* @k10d release_mempool_block_104a8e92 @ 0x104a8e92
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void release_mempool_block_104a8e92(void *param_1)

{
  mempool_release_block((void *)(_DAT_8004907c/*SDRAM*/),(void *)(param_1));
  return;
}
