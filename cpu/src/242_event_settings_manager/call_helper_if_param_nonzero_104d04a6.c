/* @k10d call_helper_if_param_nonzero_104d04a6 @ 0x104d04a6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls write_word_to_dynamic_array with (param_2,0,1) when param_2 is non-zero and
 *   returns that boolean.
 * summary:
 *   The function checks whether param_2 is non-zero. If so, it invokes
 *   write_word_to_dynamic_array passing param_2, 0, and 1 as arguments. It then returns the
 *   result of the non-zero test. The role of write_word_to_dynamic_array is unknown, so the
 *   specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool call_helper_if_param_nonzero_104d04a6(uint32_t param_1, int param_2, uint32_t param_x2)

{
  if (param_2 != 0) {
    write_word_to_dynamic_array(param_2,0,1);
  }
  return param_2 != 0;
}
