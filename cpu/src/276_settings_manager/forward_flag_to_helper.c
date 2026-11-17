/* @k10d forward_flag_to_helper @ 0x1051ca56
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes a boolean derived from param_3 to write_to_dynamic_array along with param_2.
 * summary:
 *   The function converts the third argument into a 0/1 boolean and calls
 *   write_to_dynamic_array with param_2, 0, and that boolean. It performs no other
 *   operations and returns void. The specific role of write_to_dynamic_array is unknown, so
 *   the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_flag_to_helper(uint32_t param_1,void *param_2,int param_3)

{
  write_to_dynamic_array((int)param_2,0,(uint)(param_3 != 0));
  return;
}
