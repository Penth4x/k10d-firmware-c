/* @k10d call_helper_with_offset8_value_104763ac @ 0x104763ac
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes the 32-bit value at param_1+8 to iterate_and_invoke_object_list and returns.
 * summary:
 *   Single-instruction wrapper that dereferences the field at offset 8 of the object
 *   pointed to by param_1 and forwards it as the sole argument to
 *   iterate_and_invoke_object_list. No other side effects are visible in this function. The
 *   caller is call_two_helpers_on_field_c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset8_value_104763ac(int param_1)

{
  iterate_and_invoke_object_list(*(uint32_t *)(param_1 + 8));
  return;
}
