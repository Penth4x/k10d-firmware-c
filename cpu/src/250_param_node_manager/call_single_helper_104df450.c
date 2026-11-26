/* @k10d call_single_helper_104df450 @ 0x104df450
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Passes its single argument to set_flag_on_object_at_offset_0x70_104ded7a and returns.
 * summary:
 *   A one-line wrapper that forwards param_1 to the callee
 *   set_flag_on_object_at_offset_0x70_104ded7a. No local state, no side effects beyond the
 *   callee's behavior. The callee's role is unknown, so no camera-subsystem term is
 *   applied.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_104df450(int param_1, uint32_t param_x1)

{
  set_flag_on_object_at_offset_0x70_104ded7a(param_1, param_x1);
  return;
}
