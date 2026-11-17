/* @k10d dispatch_on_flag_param @ 0x104436b4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls one of two adjacent helper functions based on whether the second integer
 *   parameter is zero.
 * summary:
 *   The function branches on param_2. If param_2 is 0, it calls
 *   call_helper_with_zero_104436a0 with param_1; otherwise it calls
 *   call_helper_with_flag_one_104436aa with param_1. The callees are unnamed, so the
 *   specific subsystem behavior is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_flag_param(void *param_1,int param_2)

{
  if (param_2 == 0) {
    call_helper_with_zero_104436a0(param_1);
  }
  else {
    call_helper_with_flag_one_104436aa(param_1);
  }
  return;
}
