/* @k10d call_two_helpers_with_timeout_10366c68 @ 0x10366c68
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 008_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes an unnamed helper then a second helper passing param_1 and a 180000 constant.
 * summary:
 *   The function takes a single pointer argument and calls
 *   call_helper_on_struct_field_1036c4a8 with no arguments, followed by
 *   write_second_field_via_helper_1036c486 with param_1 and the integer 180000. It is
 *   invoked as virtual method slot 3 of class cls_105577f8. No camera-specific behavior is
 *   evident from the pseudocode or known callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_timeout_10366c68(void *param_1)

{
  call_helper_on_struct_field_1036c4a8();
  write_second_field_via_helper_1036c486(param_1,180000);
  return;
}
