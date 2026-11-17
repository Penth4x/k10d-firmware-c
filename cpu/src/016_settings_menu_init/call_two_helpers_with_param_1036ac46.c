/* @k10d call_two_helpers_with_param_1036ac46 @ 0x1036ac46
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 016_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Invokes an unnamed helper with no arguments, then a second helper passing param_1 and
 *   the constant 180000.
 * summary:
 *   The function performs two sequential calls: call_helper_on_struct_field_1036c4a8() with
 *   no parameters, followed by write_second_field_via_helper_1036c486(param_1, 180000). It
 *   is invoked as virtual method slot 3 of class cls_10557ba8. No side effects or global
 *   state modifications are visible in the pseudocode itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_param_1036ac46(void *param_1)

{
  call_helper_on_struct_field_1036c4a8();
  write_second_field_via_helper_1036c486(param_1,180000);
  return;
}
