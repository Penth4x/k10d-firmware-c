/* @k10d dispatch_on_field_0x2c_104bb7f8 @ 0x104bb7f8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads the int at offset 0x2c of param_1 and dispatches to one of four handlers based on
 *   its value 0-3.
 * summary:
 *   The function loads *(int*)(param_1+0x2c) and branches: value 0 calls
 *   adjust_exposure_counters, 1 calls adjust_two_counters_by_delta_104bc9f8(param_1), 2
 *   calls adjust_timer_counters, and 3 calls
 *   adjust_two_counters_by_delta_104bc96c(param_1). No other values are handled. The four
 *   callees are unnamed, so the subsystem role cannot be determined from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_field_0x2c_104bb7f8(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x2c);
  if (iVar1 == 0) {
    adjust_exposure_counters((uint32_t *)__frv_reg_unset(4));
  }
  else if (iVar1 == 1) {
    adjust_two_counters_by_delta_104bc9f8(param_1);
  }
  else if (iVar1 == 2) {
    adjust_timer_counters((void *)__frv_reg_unset(4));
  }
  else if (iVar1 == 3) {
    adjust_two_counters_by_delta_104bc96c(param_1);
  }
  return;
}
