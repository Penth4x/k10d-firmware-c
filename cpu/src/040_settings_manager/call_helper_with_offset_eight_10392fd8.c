/* @k10d call_helper_with_offset_eight_10392fd8 @ 0x10392fd8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper function with the first argument offset by 8 and the second argument
 *   unchanged.
 * summary:
 *   This function is a thin wrapper that forwards its two parameters to
 *   select_one_of_twelve_slots_10398aac, adding 8 to the first argument (param_1 + 8)
 *   before passing it. It performs no other operations or side effects. The specific role
 *   of the underlying helper is unknown as it is not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_eight_10392fd8(int param_1,uint param_2)

{
  select_one_of_twelve_slots_10398aac(param_1 + 8,param_2);
  return;
}
