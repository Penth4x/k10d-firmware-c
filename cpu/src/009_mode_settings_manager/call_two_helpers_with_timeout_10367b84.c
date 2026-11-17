/* @k10d call_two_helpers_with_timeout_10367b84 @ 0x10367b84
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 009_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes an unnamed helper then a second helper with the argument and a 180000 constant.
 * summary:
 *   The function takes a single pointer argument, calls
 *   call_helper_on_struct_field_1036c4a8 with no arguments, then calls
 *   write_second_field_via_helper_1036c486 passing the original argument and the constant
 *   180000. It is a virtual method slot 3 of class cls_105579a8. No camera-specific
 *   behavior is evident from the pseudocode or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_timeout_10367b84(void *param_1)

{
  call_helper_on_struct_field_1036c4a8();
  write_second_field_via_helper_1036c486(param_1,180000);
  return;
}
