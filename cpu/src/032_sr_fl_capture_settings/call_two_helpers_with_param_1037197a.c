/* @k10d call_two_helpers_with_param_1037197a @ 0x1037197a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 032_sr_fl_capture_settings (unit names are model-proposed)
 * purpose:
 *   Invokes two unnamed helper functions, passing param_1 and a constant 180000 to the
 *   second.
 * summary:
 *   The function first calls call_helper_on_struct_field_1036c4a8 with no arguments, then
 *   calls write_second_field_via_helper_1036c486 with param_1 and the integer 180000. It is
 *   a virtual method slot 3 of class cls_10558104. No further behavior is discernible from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_param_1037197a(void *param_1)

{
  call_helper_on_struct_field_1036c4a8();
  write_second_field_via_helper_1036c486(param_1,180000);
  return;
}
