/* @k10d dispatch_on_mode_field_104bb71a @ 0x104bb71a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a 4-state field at offset 0x2c of the object and calls one of four handlers based
 *   on its value.
 * summary:
 *   The function loads an integer from param_1 + 0x2c and branches on it: 0 calls
 *   adjust_two_counters_by_delta_104bc96c(param_1), 1 calls adjust_exposure_counters(), 2
 *   calls adjust_two_counters_by_delta_104bc9f8(param_1), and 3 calls
 *   adjust_timer_counters(). No other values are handled. The callees are unnamed, so the
 *   specific subsystem (e.g., exposure mode, AF state) cannot be confirmed from this code
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_mode_field_104bb71a(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x2c);
  if (iVar1 == 0) {
    adjust_two_counters_by_delta_104bc96c(param_1);
  }
  else if (iVar1 == 1) {
    adjust_exposure_counters((uint32_t *)(uint32_t)param_1);
  }
  else if (iVar1 == 2) {
    adjust_two_counters_by_delta_104bc9f8(param_1);
  }
  else if (iVar1 == 3) {
    adjust_timer_counters((void *)(uint32_t)param_1);
  }
  return;
}
