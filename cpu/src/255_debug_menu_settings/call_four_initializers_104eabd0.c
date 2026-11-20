/* @k10d call_four_initializers_104eabd0 @ 0x104eabd0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Invokes four helper functions in sequence, passing param_1 to the last three.
 * summary:
 *   The function calls destroy_object_members_104eb792 with no arguments, then calls
 *   invoke_virtual_slot_two_on_members_104eb276,
 *   invoke_virtual_slot_two_on_two_objects_104eb596, and invoke_virtual_slot_4_104eb672,
 *   each receiving param_1. It is virtual method slot 4 of cls_105c26f0. No side effects or
 *   global accesses are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_four_initializers_104eabd0(cls_105c26f0 *param_1)

{
  destroy_object_members_104eb792(__frv_reg_unset(4));
  invoke_virtual_slot_two_on_members_104eb276((int)param_1);
  invoke_virtual_slot_two_on_two_objects_104eb596((int)param_1);
  invoke_virtual_slot_4_104eb672((int)param_1);
  return;
}
