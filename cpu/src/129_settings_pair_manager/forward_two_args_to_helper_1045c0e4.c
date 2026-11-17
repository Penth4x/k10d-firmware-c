/* @k10d forward_two_args_to_helper_1045c0e4 @ 0x1045c0e4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Forwards its two arguments unchanged to store_word_to_pointer_1045bd48 and returns.
 * summary:
 *   A one-line wrapper that calls store_word_to_pointer_1045bd48 with param_1 and param_2
 *   and returns void. No local state, no side effects beyond the callee. The callee's role
 *   is unknown, so no subsystem can be inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_two_args_to_helper_1045c0e4(uint32_t *param_1,uint32_t param_2)

{
  store_word_to_pointer_1045bd48(param_1,param_2);
  return;
}
