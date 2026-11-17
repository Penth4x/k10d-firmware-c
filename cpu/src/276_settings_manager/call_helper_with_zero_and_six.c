/* @k10d call_helper_with_zero_and_six @ 0x1051d09c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with the second argument, zero, and six as parameters.
 * summary:
 *   This function is a thin wrapper that forwards its second parameter to
 *   write_word_to_dynamic_array along with the constants 0 and 6. It does not perform any
 *   other operations or access any memory directly. The specific role of
 *   write_word_to_dynamic_array is unknown, so the camera subsystem context cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_zero_and_six(uint32_t param_1,int param_2)

{
  write_word_to_dynamic_array(param_2,0,6);
  return;
}
