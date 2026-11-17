/* @k10d clear_flag_at_offset_0x58_1048a71a @ 0x1048a71a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 186_sr_calibration_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_at_offset_0x58_1048a71a(void *param_1)

{
  *(uint8_t *)((int)param_1 + 0x58) = 0;
  return;
}
