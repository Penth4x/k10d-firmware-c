/* @k10d call_two_helpers_and_return_zero @ 0x103a2d54
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions in sequence, passing param_1 to the second, then returns
 *   0.
 * summary:
 *   The function calls call_helper_on_fetched_pointer with no arguments, then calls
 *   clear_struct_field_at_offset_8 with param_1, and finally returns 0. Both callees are
 *   unnamed, so the specific subsystem or behavior cannot be determined from the pseudocode
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_and_return_zero(cls_105649cc *param_1)

{
  call_helper_on_fetched_pointer();
  clear_struct_field_at_offset_8((cls_10564e90 *)param_1);
  return 0;
}
