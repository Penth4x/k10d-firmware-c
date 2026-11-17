/* @k10d transfer_sr_calibration_data @ 0x1052ba16
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Calls three helper functions in sequence, passing param_1+1 to the first and third, and
 *   the full parameter set to the middle one.
 * summary:
 *   The function takes a pointer (param_1) and two scalar values. It invokes
 *   call_kernel_with_short_id with param_1+1, then sr_cal_transfer with all three original
 *   arguments, and finally check_kernel_call_success_10459d88 with param_1+1. The first and
 *   third callees are adjacent in memory (0x10459d74 and 0x10459d88), suggesting they may
 *   be paired operations (e.g., lock/unlock or enable/disable) bracketing the main
 *   operation in sr_cal_transfer. No camera-specific behavior is evident from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void transfer_sr_calibration_data(uint32_t *param_1,uint32_t param_2,uint32_t param_3)

{
  call_kernel_with_short_id(param_1 + 1);
  sr_cal_transfer(*param_1,param_2,param_3);
  check_kernel_call_success_10459d88(param_1 + 1);
  return;
}
