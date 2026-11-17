/* @k10d turn_on_rear_display @ 0x104b52e2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Enables the rear display output by calling display_output_enable on the given display
 *   object.
 * summary:
 *   Single-line wrapper that invokes the verified display_output_enable routine with the
 *   first argument. No other side effects or state changes are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void turn_on_rear_display(uint32_t *param_1)

{
  display_output_enable(*param_1);
  return;
}
