/* @k10d clear_flag_at_offset_0x58_1051ff7c @ 0x1051ff7c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_at_offset_0x58_1051ff7c(void *param_1)

{
  *(uint8_t *)((int)param_1 + 0x58) = 0;
  return;
}
