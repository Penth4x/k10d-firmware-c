/* @k10d call_helper_with_zero_and_two_104a22c8 @ 0x104a22c8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with the second argument, zero, and two.
 * summary:
 *   This function is a thin wrapper that forwards its second parameter to
 *   write_word_to_dynamic_array along with the constants 0 and 2. It does not perform any
 *   local computation or memory access. The role of the callee is unknown, so the specific
 *   subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_zero_and_two_104a22c8(uint32_t param_1,int param_2)

{
  write_word_to_dynamic_array(param_2,0,2);
  return;
}
