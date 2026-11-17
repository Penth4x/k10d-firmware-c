/* @k10d call_single_helper_with_param_1045c10e @ 0x1045c10e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Passes its single argument to get_second_word_of_struct and returns the result
 *   unchanged.
 * summary:
 *   A one-line wrapper that forwards param_1 to get_second_word_of_struct and returns the
 *   callee's return value in r4. No local state, no side effects beyond the callee. The
 *   role of get_second_word_of_struct is unknown, so no subsystem can be inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_single_helper_with_param_1045c10e(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = get_second_word_of_struct((void *)param_1);
  return uVar1;
}
