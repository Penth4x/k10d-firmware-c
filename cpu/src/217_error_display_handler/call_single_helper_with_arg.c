/* @k10d call_single_helper_with_arg @ 0x104b52f2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function, passing the first element of the input pointer as its
 *   argument.
 * summary:
 *   This function is a thin wrapper that dereferences the input pointer and passes the
 *   resulting value to deactivate_display_state. It performs no other operations or state
 *   changes. The specific role of the callee is unknown, so the wrapper's behavior is
 *   described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_arg(int *param_1)

{
  deactivate_display_state(*param_1);
  return;
}
