/* @k10d call_helper_with_param_and_zeros_104a2310 @ 0x104a2310
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function passing param_2 and two zero arguments.
 * summary:
 *   The function is a thin wrapper that invokes write_word_to_dynamic_array with the second
 *   argument from the caller and two hardcoded zero values. It does not perform any local
 *   computation or memory access. The specific role of the callee is unknown, so the
 *   wrapper's behavior is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_param_and_zeros_104a2310(uint32_t param_1,int param_2)

{
  write_word_to_dynamic_array(param_2,0,0);
  return;
}
