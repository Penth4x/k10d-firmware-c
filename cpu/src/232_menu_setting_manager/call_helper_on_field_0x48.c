/* @k10d call_helper_on_field_0x48 @ 0x104c458e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * purpose:
 *   Reads the 32-bit value at offset 0x48 of the object in param_1 and passes it to
 *   reset_object_and_release_two_members.
 * summary:
 *   A one-line wrapper that dereferences param_1 + 0x48 and forwards that value as the sole
 *   argument to reset_object_and_release_two_members. No other side effects or state
 *   changes are visible in this function. The role of reset_object_and_release_two_members
 *   and the meaning of the 0x48 field are unknown from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_0x48(int param_1)

{
  reset_object_and_release_two_members(*(uint32_t *)(param_1 + 0x48));
  return;
}
