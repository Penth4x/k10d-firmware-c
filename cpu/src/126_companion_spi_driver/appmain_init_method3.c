/* @k10d appmain_init_method3 @ 0x10438b28
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed call_three_init_helpers)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes three sequential helper functions, passing the input parameter to the last two.
 * summary:
 *   The function acts as a simple wrapper that calls invoke_virtual_slot_on_eight_objects
 *   with no arguments, followed by invoke_virtual_slot_on_sixteen_objects_1043913e and
 *   invoke_virtual_slot_on_two_objects_1043934c, both of which receive param_1. The prior
 *   notes suggest this is part of a post-initialization sequence, but the specific
 *   subsystems are not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void appmain_init_method3(uint32_t param_1)

{
  invoke_virtual_slot_on_eight_objects();
  invoke_virtual_slot_on_sixteen_objects_1043913e(param_1);
  invoke_virtual_slot_on_two_objects_1043934c(param_1);
  return;
}
