/* @k10d call_helper_with_constant_two_104af7c2 @ 0x104af7c2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function passing the first argument, the constant 2, and the
 *   second argument.
 * summary:
 *   This function is a thin wrapper that forwards its two parameters to
 *   dispatch_by_type_field_104af7e6, inserting the constant value 2 as the second argument.
 *   It performs no other operations, has no visible side effects beyond the callee's
 *   behavior, and returns void. The specific role of the callee is unknown, so the
 *   wrapper's purpose is purely mechanical forwarding.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_constant_two_104af7c2(int *param_1,uint32_t param_2)

{
  dispatch_by_type_field_104af7e6(param_1,2,param_2);
  return;
}
