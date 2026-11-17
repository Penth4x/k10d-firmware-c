/* @k10d call_helper_with_two_args_1051a384 @ 0x1051a384
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Forwards its two parameters to a single helper function with a fixed third argument of
 *   1.
 * summary:
 *   The function takes an undefined4 and an int, then immediately calls
 *   write_word_to_dynamic_array with the int as the first argument, 0 as the second, and 1
 *   as the third. It returns void. The specific role of write_word_to_dynamic_array is
 *   unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_two_args_1051a384(uint32_t param_1,int param_2)

{
  write_word_to_dynamic_array(param_2,0,1);
  return;
}
