/* @k10d set_flag_at_offset_0x58_1048a70c @ 0x1048a70c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 186_sr_calibration_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_0x58_1048a70c(int param_1)

{
  *(uint8_t *)(param_1 + 0x58) = 1;
  return;
}
