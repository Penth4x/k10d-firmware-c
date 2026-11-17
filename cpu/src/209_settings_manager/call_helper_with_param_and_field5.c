/* @k10d call_helper_with_param_and_field5 @ 0x104aaafc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 209_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls merge_masked_word_fields passing param_1 and its 5th element twice as the second
 *   and third arguments.
 * summary:
 *   A one-line wrapper that forwards param_1 and param_1[5] to the callee
 *   merge_masked_word_fields. No local state is modified and no return value is used. The
 *   role of merge_masked_word_fields is unknown, so the camera subsystem cannot be
 *   inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_param_and_field5(uint32_t *param_1)

{
  merge_masked_word_fields(param_1,param_1[5],param_1[5]);
  return;
}
