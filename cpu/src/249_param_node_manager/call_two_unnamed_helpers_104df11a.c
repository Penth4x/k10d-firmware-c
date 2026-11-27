/* @k10d call_two_unnamed_helpers_104df11a @ 0x104df11a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 249_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two unnamed helper functions in sequence with no arguments.
 * summary:
 *   The function takes no parameters and simply calls get_or_init_sram_block_10391bfa
 *   followed by invoke_virtual_slot_one_and_null, then returns. It is virtual slot 4 of
 *   cls_105bb2e4, but the callees have no established names or known roles, so no camera
 *   subsystem can be inferred. No side effects beyond those of the two callees are visible
 *   in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_unnamed_helpers_104df11a(uint32_t param_x0)
{
  get_or_init_sram_block_10391bfa();
  invoke_virtual_slot_one_and_null((int *)(uint32_t)param_x0);
  return;
}
