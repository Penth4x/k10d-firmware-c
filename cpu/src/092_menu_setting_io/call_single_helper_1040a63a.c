/* @k10d call_single_helper_1040a63a @ 0x1040a63a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Calls init_object_with_two_ids_1040a5ea with the incoming r4 argument and returns its
 *   result.
 * summary:
 *   A one-line wrapper that forwards the first argument (r4) to
 *   init_object_with_two_ids_1040a5ea and returns the callee's return value unchanged. No
 *   local state, side effects, or camera-specific behavior are visible in this function
 *   itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Switch with 1 destination removed at 0x1040a64e : 7 cases all go to same destination */

uint32_t call_single_helper_1040a63a(void)

{
  void *r4_in;
  uint32_t uVar1;
  
  uVar1 = init_object_with_two_ids_1040a5ea(r4_in);
  return uVar1;
}
