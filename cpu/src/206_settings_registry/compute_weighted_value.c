/* @k10d compute_weighted_value @ 0x104a8ca4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int compute_weighted_value(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = map_mode_to_bitmask(_DAT_80049078/*SDRAM*/,*(uint16_t *)(param_1 + 2));
  return iVar1 * iVar2;
}
