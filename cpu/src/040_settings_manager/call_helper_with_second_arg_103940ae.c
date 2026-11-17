/* @k10d call_helper_with_second_arg_103940ae @ 0x103940ae
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls forward_params_via_helper_10394686 with param_1, the value at param_1+4, and the
 *   constant 1.
 * summary:
 *   This function is a thin wrapper that dereferences the second field (offset 4) of the
 *   object pointed to by param_1 and passes it as the second argument to
 *   forward_params_via_helper_10394686, along with param_1 and the integer constant 1. It
 *   performs no other operations or side effects. The specific role of
 *   forward_params_via_helper_10394686 is unknown, so the camera subsystem context cannot
 *   be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_second_arg_103940ae(void *param_1)

{
  forward_params_via_helper_10394686(param_1,*(int **)((int)param_1 + 4),1);
  return;
}
