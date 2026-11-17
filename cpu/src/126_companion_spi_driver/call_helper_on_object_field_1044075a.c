/* @k10d call_helper_on_object_field_1044075a @ 0x1044075a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at offset 0x14 of the given object to a single helper
 *   function.
 * summary:
 *   The function dereferences param_1 + 0x14 and passes that value as the sole argument to
 *   clear_flag_with_notify. It performs no other operations, so its behavior is entirely
 *   delegated to the callee. The role of the field at offset 0x14 and the callee are
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_object_field_1044075a(int param_1)

{
  clear_flag_with_notify(*(void **)(param_1 + 0x14));
  return;
}
