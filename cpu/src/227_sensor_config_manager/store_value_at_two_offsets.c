/* @k10d store_value_at_two_offsets @ 0x104c1004
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_at_two_offsets(int param_1,uint32_t param_2)

{
  *(uint32_t *)(param_1 + 0x8cc) = param_2;
  *(uint32_t *)(param_1 + 0x34) = param_2;
  return;
}
