/* @k10d dispatch_on_field_0x2c_104bb764 @ 0x104bb764
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads the int at offset 0x2c of param_1 and calls one of four handlers based on its
 *   value 0-3.
 * summary:
 *   A simple switch/dispatcher on the 4th int field of a struct passed in param_1. Values 0
 *   and 2 pass param_1 to their handlers (adjust_two_counters_by_delta_104bc9f8,
 *   adjust_two_counters_by_delta_104bc96c); values 1 and 3 call handlers with no argument
 *   (adjust_timer_counters, adjust_exposure_counters). No default case; values outside 0-3
 *   do nothing. The four callees are unnamed, so the subsystem role is not determinable
 *   from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_field_0x2c_104bb764(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x2c);
  if (iVar1 == 0) {
    adjust_two_counters_by_delta_104bc9f8(param_1);
  }
  else if (iVar1 == 1) {
    adjust_timer_counters((void *)__frv_reg_unset(4));
  }
  else if (iVar1 == 2) {
    adjust_two_counters_by_delta_104bc96c(param_1);
  }
  else if (iVar1 == 3) {
    adjust_exposure_counters((uint32_t *)__frv_reg_unset(4));
  }
  return;
}
