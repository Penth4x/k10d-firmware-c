/* @k10d set_object_field_and_invoke_virtual_104a29b0 @ 0x104a29b0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_field_and_invoke_virtual_104a29b0(uint32_t *param_1,void *param_2)

{
  *param_1 = (uint32_t)param_2;
  (**(code **)(param_1[1] + 0x34))((int)*(short *)(param_1[1] + 0x30) + (int)param_1);
  return;
}
