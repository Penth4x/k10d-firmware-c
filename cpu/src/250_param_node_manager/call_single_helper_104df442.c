/* @k10d call_single_helper_104df442 @ 0x104df442
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Calls poll_event_queue_for_mask and returns its result unchanged.
 * summary:
 *   A one-line wrapper that invokes poll_event_queue_for_mask with no arguments and returns
 *   the 32-bit value in r4. No local state is modified and no other side effects are
 *   visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_single_helper_104df442(void)

{
  uint32_t uVar1;
  
  uVar1 = poll_event_queue_for_mask(__frv_reg_unset(4), __frv_reg_unset(5), __frv_reg_unset(6));
  return uVar1;
}
