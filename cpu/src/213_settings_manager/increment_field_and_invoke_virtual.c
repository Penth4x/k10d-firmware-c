/* @k10d increment_field_and_invoke_virtual @ 0x104af072
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void increment_field_and_invoke_virtual(int param_1,int param_2)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_2;
  (**(code **)(*(int *)(param_1 + 0x18) + 0x1c))
            (*(short *)(*(int *)(param_1 + 0x18) + 0x18) + param_1);
  return;
}
