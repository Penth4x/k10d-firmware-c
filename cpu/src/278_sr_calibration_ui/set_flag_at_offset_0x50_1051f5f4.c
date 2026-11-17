/* @k10d set_flag_at_offset_0x50_1051f5f4 @ 0x1051f5f4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_0x50_1051f5f4(int param_1)

{
  *(uint8_t *)(param_1 + 0x50) = 1;
  return;
}
