/* @k10d call_single_helper_103b7eb8 @ 0x103b7eb8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a single unnamed helper function and returns.
 * summary:
 *   The function consists solely of a call to clear_struct_field_at_offset_8 with no
 *   arguments and no local state manipulation. It acts as a thin wrapper or trampoline to
 *   the callee. No camera-specific behavior or side effects are visible in this function's
 *   own code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_103b7eb8(void)

{
  clear_struct_field_at_offset_8(__frv_reg_unset(4));
  return;
}
