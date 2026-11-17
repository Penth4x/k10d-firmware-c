/* @k10d release_object_at_offset_0x24_104717d4 @ 0x104717d4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_at_offset_0x24_104717d4(int param_1)

{
  set_flag_with_notify(*(void **)(param_1 + 0x24));
  return;
}
