/* @k10d call_helper_with_fixed_args_104af7aa @ 0x104af7aa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with the input pointer and two fixed constants.
 * summary:
 *   The function takes a single pointer argument and immediately calls
 *   dispatch_by_type_field_104af7e6 with that pointer, the constant 0x20, and 0. It returns
 *   void. The specific role of the helper is unknown, so the behavior is described
 *   mechanically as a wrapper call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_104af7aa(cls_105b7838 *param_1)

{
  dispatch_by_type_field_104af7e6((void *)param_1, 0x20, 0);
  return;
}
