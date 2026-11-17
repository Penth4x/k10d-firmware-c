/* @k10d call_two_initializers_10466f6e @ 0x10466f6e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 143_ui_task5_state (unit names are model-proposed)
 * purpose:
 *   Invokes two unnamed helper functions sequentially with the same pointer argument.
 * summary:
 *   The function takes a single void pointer and passes it to
 *   set_flag_at_offset_0x28_10466fde, then to invoke_virtual_slot_3_on_member_10466ffa. No
 *   other operations, memory accesses, or state changes are visible in the pseudocode. The
 *   specific roles of the callees are unknown, so the overall purpose is limited to
 *   describing this two-step call sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_initializers_10466f6e(void *param_1)

{
  set_flag_at_offset_0x28_10466fde(param_1);
  invoke_virtual_slot_3_on_member_10466ffa(param_1);
  return;
}
