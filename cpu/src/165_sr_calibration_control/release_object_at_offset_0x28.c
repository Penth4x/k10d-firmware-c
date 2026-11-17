/* @k10d release_object_at_offset_0x28 @ 0x10471864
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_at_offset_0x28(int param_1)

{
  clear_flag_with_notify(*(void **)(param_1 + 0x28));
  return;
}
