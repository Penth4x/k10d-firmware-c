/* @k10d call_two_unnamed_helpers_1052bf5c @ 0x1052bf5c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 287_factory_menu_init (unit names are model-proposed)
 * purpose:
 *   Invokes two unnamed helper functions in sequence with no arguments.
 * summary:
 *   The function is a thin wrapper that calls get_shared_sram_buffer followed by
 *   invoke_virtual_slot_10_104e4ca6 and returns void. It is virtual slot 4 of class
 *   cls_105f9f74, but the callees have no established names or roles, so no camera
 *   subsystem can be inferred. No local state is modified.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_unnamed_helpers_1052bf5c(void)

{
  get_shared_sram_buffer();
  invoke_virtual_slot_10_104e4ca6(__frv_reg_unset(4));
  return;
}
