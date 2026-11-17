/* @k10d store_value_at_offset_0x48 @ 0x10471b4c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_at_offset_0x48(int param_1,uint32_t param_2)

{
  *(uint32_t *)(param_1 + 0x48) = param_2;
  return;
}
