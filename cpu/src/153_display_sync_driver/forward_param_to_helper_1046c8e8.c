/* @k10d forward_param_to_helper_1046c8e8 @ 0x1046c8e8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 153_display_sync_driver (unit names are model-proposed)
 * purpose:
 *   Passes the value at param_1+4 and param_2 to a single helper function.
 * summary:
 *   This is a one-line wrapper that dereferences the second field of the object pointed to
 *   by param_1 and forwards it along with param_2 to build_message_from_param2. No other
 *   operations, side effects, or state changes are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_param_to_helper_1046c8e8(int param_1,void *param_2)

{
  build_message_from_param2(*(int *)(param_1 + 4),param_2);
  return;
}
