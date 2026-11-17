/* @k10d call_helper_with_zero_and_one @ 0x104a5dfa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with the second argument, zero, and one.
 * summary:
 *   This function is a thin wrapper that forwards its second parameter to
 *   write_word_to_dynamic_array along with the constants 0 and 1. It performs no other
 *   operations and returns immediately. The specific role of the callee is unknown, so the
 *   wrapper's behavior is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_zero_and_one(uint32_t param_1,int param_2)

{
  write_word_to_dynamic_array(param_2,0,1);
  return;
}
