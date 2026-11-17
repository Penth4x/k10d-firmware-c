/* @k10d compute_scaled_value @ 0x10421410
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 098_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint compute_scaled_value(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x2c) + 4);
  iVar1 = (**(code **)(iVar1 + 0x14c))
                    (*(int *)((int)param_1 + 0x2c) + (int)*(short *)(iVar1 + 0x148));
  return (uint)(*(int *)((int)param_1 + 0x9c) * iVar1) / 10;
}
