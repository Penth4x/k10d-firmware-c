/* @k10d call_helper_with_fixed_args_104af79e @ 0x104af79e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with the input pointer and two fixed constants.
 * summary:
 *   The function takes a single pointer argument and immediately calls
 *   dispatch_by_type_field_104af7e6, passing the pointer as the first argument, 0x40 as the
 *   second, and 0 as the third. It returns void. The specific role of the helper is
 *   unknown, so the behavior is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_104af79e(int *param_1)

{
  dispatch_by_type_field_104af7e6(param_1,0x40,0);
  return;
}
