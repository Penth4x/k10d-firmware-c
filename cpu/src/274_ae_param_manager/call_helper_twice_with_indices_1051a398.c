/* @k10d call_helper_twice_with_indices_1051a398 @ 0x1051a398
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper twice with the same first argument and second argument values 0 and 1,
 *   third argument 2.
 * summary:
 *   The function takes two parameters and invokes write_word_to_dynamic_array twice. The
 *   first call passes param_2, 0, and 2. The second call passes param_2, 1, and 2. The
 *   first parameter param_1 is unused in the visible pseudocode. No other side effects or
 *   global accesses are evident.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_twice_with_indices_1051a398(uint32_t param_1,int param_2)

{
  write_word_to_dynamic_array(param_2,0,2);
  write_word_to_dynamic_array(param_2,1,2);
  return;
}
