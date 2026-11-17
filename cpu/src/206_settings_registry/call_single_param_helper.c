/* @k10d call_single_param_helper @ 0x104a5548
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Forwards param_2 to write_to_dynamic_array with two zero arguments and ignores param_1.
 * summary:
 *   The function takes two parameters but only uses param_2, passing it as the first
 *   argument to write_to_dynamic_array along with two zero values. It does not use param_1
 *   at all. The role of write_to_dynamic_array is unknown, so the specific subsystem cannot
 *   be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_param_helper(uint32_t param_1,int param_2)

{
  write_to_dynamic_array(param_2,0,0);
  return;
}
