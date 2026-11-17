/* @k10d run_sr_state_machine @ 0x1052b97c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions on a struct pointer and two additional parameters.
 * summary:
 *   The function takes a pointer param_1 and two undefined4 parameters. It calls
 *   call_kernel_with_short_id with param_1+1, then sr_state_machine with *param_1, param_2,
 *   and param_3, and finally check_kernel_call_success_10459d88 with param_1+1. The
 *   specific roles of the callees are unknown, so the operation is described mechanically
 *   as a sequence of three helper calls on a struct-like object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void run_sr_state_machine(int *param_1,uint32_t param_2,uint32_t param_3)

{
  call_kernel_with_short_id(param_1 + 1);
  sr_state_machine(*param_1,param_2,param_3);
  check_kernel_call_success_10459d88(param_1 + 1);
  return;
}
