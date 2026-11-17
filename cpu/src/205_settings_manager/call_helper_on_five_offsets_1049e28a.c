/* @k10d call_helper_on_five_offsets_1049e28a @ 0x1049e28a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper on five fields of a struct at fixed offsets.
 * summary:
 *   Takes a base pointer in param_1 and calls iterate_and_invoke_virtual_method on the
 *   values at offsets 0xc, 0x44, 0x7c, 0xb4, and the pointer stored at 0xf0. The helper's
 *   role is unknown, so the operation is described mechanically as applying the same
 *   routine to five struct members.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_five_offsets_1049e28a(int param_1)

{
  iterate_and_invoke_virtual_method(param_1 + 0xc);
  iterate_and_invoke_virtual_method(param_1 + 0x44);
  iterate_and_invoke_virtual_method(param_1 + 0x7c);
  iterate_and_invoke_virtual_method(param_1 + 0xb4);
  iterate_and_invoke_virtual_method(*(uint32_t *)(param_1 + 0xf0));
  return;
}
