/* @k10d call_helper_with_offset_pointer_104aa00e @ 0x104aa00e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Passes a pointer offset by 0xc from the input argument to a single helper function.
 * summary:
 *   The function takes a single integer parameter, adds 0xc to it, and passes the result to
 *   check_kernel_object_id_valid. It acts as a thin wrapper or thunk that adjusts the
 *   pointer before delegating to the callee. No other operations or side effects are
 *   visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_pointer_104aa00e(int param_1)

{
  check_kernel_object_id_valid((void *)(param_1 + 0xc));
  return;
}
