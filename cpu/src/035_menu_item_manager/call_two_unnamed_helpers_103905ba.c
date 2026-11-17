/* @k10d call_two_unnamed_helpers_103905ba @ 0x103905ba
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two adjacent helper functions in sequence with no arguments.
 * summary:
 *   The function performs no local computation and only calls
 *   get_or_create_singleton_object_1036c796 followed by
 *   invoke_virtual_slot_on_four_object_arrays. No side effects, globals, or camera-specific
 *   behavior are visible in this wrapper. The callees are unnamed, so the subsystem role
 *   cannot be inferred from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_unnamed_helpers_103905ba(void)

{
  get_or_create_singleton_object_1036c796();
  invoke_virtual_slot_on_four_object_arrays(__frv_reg_unset(4));
  return;
}
