/* @k10d call_helper_on_field_0x18_10506c50 @ 0x10506c50
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Passes the 32-bit value at offset 0x18 of the object pointed to by param_1 to
 *   invoke_virtual_method_on_context.
 * summary:
 *   This is a one-line wrapper that dereferences param_1 + 0x18 and forwards that value as
 *   the sole argument to invoke_virtual_method_on_context. It is called from several sites,
 *   including execute_capture_sequence, but the callee's role is unknown, so no camera-
 *   subsystem meaning can be assigned. No other side effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_0x18_10506c50(int param_1)

{
  invoke_virtual_method_on_context(*(uint32_t *)(param_1 + 0x18));
  return;
}
