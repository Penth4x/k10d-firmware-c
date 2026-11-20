/* @k10d call_single_helper_103b692e @ 0x103b692e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a single unnamed helper function and returns.
 * summary:
 *   The function consists solely of a call to invoke_virtual_slot_two_1039fd58 with no
 *   arguments and no local state manipulation. It acts as a thin wrapper or trampoline to
 *   the callee. No camera-specific behavior or side effects are visible in this function's
 *   own code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_103b692e(cls_10566724 *param_1)

{
  invoke_virtual_slot_two_1039fd58((cls_1056ac8c *)param_1);
  return;
}
