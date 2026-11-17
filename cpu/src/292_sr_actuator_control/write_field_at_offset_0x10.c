/* @k10d write_field_at_offset_0x10 @ 0x105340a0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_field_at_offset_0x10(int param_1,uint32_t param_2)

{
  *(uint32_t *)(param_1 + 0x10) = param_2;
  return;
}
