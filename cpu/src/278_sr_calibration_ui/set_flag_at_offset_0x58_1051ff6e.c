/* @k10d set_flag_at_offset_0x58_1051ff6e @ 0x1051ff6e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_0x58_1051ff6e(int param_1)

{
  *(uint8_t *)(param_1 + 0x58) = 1;
  return;
}
