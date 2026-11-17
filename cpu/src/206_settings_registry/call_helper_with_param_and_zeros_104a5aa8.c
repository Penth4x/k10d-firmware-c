/* @k10d call_helper_with_param_and_zeros_104a5aa8 @ 0x104a5aa8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Forwards param_2 to write_to_dynamic_array with two zero arguments.
 * summary:
 *   The function takes two parameters and immediately calls write_to_dynamic_array, passing
 *   param_2 as the first argument and 0 as the second and third arguments. It returns void.
 *   The specific role of write_to_dynamic_array is unknown, so the camera subsystem cannot
 *   be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_param_and_zeros_104a5aa8(uint32_t param_1,int param_2)

{
  write_to_dynamic_array(param_2,0,0);
  return;
}
