/* @k10d call_helper_on_field_16_1044126e @ 0x1044126e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at offset 0x10 of the object to a single helper function.
 * summary:
 *   The function dereferences param_1 + 0x10 and passes the resulting pointer as the sole
 *   argument to set_flag_with_notify. It performs no other operations, local variable
 *   manipulation, or return value handling. The specific role of the object field and the
 *   callee is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_16_1044126e(int param_1)

{
  set_flag_with_notify(*(void **)(param_1 + 0x10));
  return;
}
