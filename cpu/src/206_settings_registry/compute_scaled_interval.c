/* @k10d compute_scaled_interval @ 0x104a8a2a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_scaled_interval(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  return ((int)(((uint)(iVar1 >> 1) >> 0x1e) + iVar1) >> 2) * 0xc;
}
