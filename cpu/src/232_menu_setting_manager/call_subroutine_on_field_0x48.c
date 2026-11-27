/* @k10d call_subroutine_on_field_0x48 @ 0x104c457c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * purpose:
 *   Reads the 32-bit value at offset 0x48 of the object pointed to by param_1 and passes it
 *   as the sole argument to init_object_with_two_timers.
 * summary:
 *   This is a one-line wrapper that extracts a pointer or handle stored at offset 0x48 of a
 *   struct and forwards it to the callee init_object_with_two_timers. No other side
 *   effects, loops, or state modifications are visible in the pseudocode. The specific role
 *   of the field or the callee is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_on_field_0x48(int param_1, uint32_t param_x1)
{
  init_object_with_two_timers(*(uint32_t *)(param_1 + 0x48), (uint32_t)param_x1);
  return;
}
