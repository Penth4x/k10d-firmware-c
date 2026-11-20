/* @k10d call_subroutine_on_offset_field_104ef18e @ 0x104ef18e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Invokes a function pointer at 0x104edd12 with the object's field at offset 0x10 as the
 *   argument.
 * summary:
 *   This is a one-line wrapper that passes param_1 + 0x10 to the code located at
 *   0x104edd12. It serves as virtual method slot 4 of class cls_105c2de4. No other
 *   operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_on_offset_field_104ef18e(cls_105c2de4 *param_1)

{
  (*(code *)0x104edd12/*ROM*/)(&param_1->field_0x10);
  return;
}
