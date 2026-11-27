/* @k10d call_three_initializers_1048359c @ 0x1048359c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions in sequence, passing param_1 to the last two.
 * summary:
 *   The function takes a single pointer argument and calls invoke_virtual_slot_15_1048360c
 *   with no arguments, then calls invoke_virtual_slot_7_10483700 and
 *   invoke_virtual_slot_on_five_objects_1048389c, both receiving param_1. The specific
 *   roles of the callees are unknown, so the overall purpose is a sequential initialization
 *   or setup routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_initializers_1048359c(void *param_1)

{
  invoke_virtual_slot_15_1048360c((uint32_t)param_1);
  invoke_virtual_slot_7_10483700(param_1);
  invoke_virtual_slot_on_five_objects_1048389c(param_1);
  return;
}
