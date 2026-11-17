/* @k10d call_helper_twice_with_indices_1051a804 @ 0x1051a804
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls write_to_dynamic_array twice with param_2 and indices 0 and 1, passing 1 as the
 *   third argument.
 * summary:
 *   The function takes two parameters and invokes the callee write_to_dynamic_array twice.
 *   The first call uses index 0, and the second uses index 1, both with the second
 *   parameter as the first argument and 1 as the third argument. No other operations or
 *   side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_twice_with_indices_1051a804(uint32_t param_1,int param_2)

{
  write_to_dynamic_array(param_2,0,1);
  write_to_dynamic_array(param_2,1,1);
  return;
}
