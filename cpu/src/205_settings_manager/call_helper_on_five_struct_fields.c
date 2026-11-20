/* @k10d call_helper_on_five_struct_fields @ 0x1049cd3a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper on five offsets/values within a structure pointed to by
 *   param_1.
 * summary:
 *   The function takes a base pointer in param_1 and calls
 *   iterate_and_invoke_virtual_method five times with arguments at offsets 0xc, 0x44, 0x7c,
 *   and 0xb4, plus the value stored at offset 0xf0. The role of
 *   iterate_and_invoke_virtual_method is unknown, so the specific subsystem cannot be
 *   determined. The pattern suggests initializing or processing five distinct members of a
 *   larger data structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_five_struct_fields(cls_105b5b0c *param_1)

{
  iterate_and_invoke_virtual_method((uint)(uintptr_t)&param_1->field_0xc);
  iterate_and_invoke_virtual_method((uint)(uintptr_t)&param_1->field_0x44);
  iterate_and_invoke_virtual_method((uint)(uintptr_t)&param_1->field_0x7c);
  iterate_and_invoke_virtual_method((uint)(uintptr_t)&param_1->field_0xb4);
  iterate_and_invoke_virtual_method(param_1->field_0xf0);
  return;
}
