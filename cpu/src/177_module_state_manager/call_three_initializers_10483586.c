/* @k10d call_three_initializers_10483586 @ 0x10483586
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions in sequence, passing the input pointer to the last two.
 * summary:
 *   The function takes a void pointer argument and calls invoke_virtual_slot_13_104835f0
 *   with no arguments, then calls invoke_virtual_slot_6_104836e4 and
 *   invoke_virtual_slot_on_five_objects_104837e6, both receiving the original pointer. The
 *   specific roles of the callees are unknown, so the operation is described mechanically
 *   as a sequence of three calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_initializers_10483586(void *param_1)

{
  invoke_virtual_slot_13_104835f0(__frv_reg_unset(4));
  invoke_virtual_slot_6_104836e4(param_1);
  invoke_virtual_slot_on_five_objects_104837e6(param_1);
  return;
}
