/* @k10d call_helper_on_five_offsets_1049fb80 @ 0x1049fb80
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper on five distinct offsets/values within the object pointed to by
 *   param_1.
 * summary:
 *   The function takes a base pointer in param_1 and calls
 *   iterate_and_invoke_virtual_method five times with arguments at offsets 0xc, 0x44, 0x7c,
 *   0xb4, and the value stored at offset 0xf0. The role of
 *   iterate_and_invoke_virtual_method is unknown, so the specific subsystem or operation
 *   cannot be determined. No other side effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_five_offsets_1049fb80(int param_1)

{
  iterate_and_invoke_virtual_method(param_1 + 0xc);
  iterate_and_invoke_virtual_method(param_1 + 0x44);
  iterate_and_invoke_virtual_method(param_1 + 0x7c);
  iterate_and_invoke_virtual_method(param_1 + 0xb4);
  iterate_and_invoke_virtual_method(*(uint32_t *)(param_1 + 0xf0));
  return;
}
