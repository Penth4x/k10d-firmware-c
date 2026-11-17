/* @k10d call_helper_with_value_0x91 @ 0x104b5bec
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Passes the value at param_1+4 to cmd_error_report along with the constant 0x91.
 * summary:
 *   This function is a thin wrapper that reads a 32-bit value from offset 4 of the object
 *   pointer in param_1 and forwards it, along with the immediate constant 0x91, to the
 *   callee cmd_error_report. It performs no other operations or side effects. The specific
 *   role of cmd_error_report is unknown, so the camera subsystem context cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_value_0x91(int param_1)

{
  cmd_error_report((void *)(uint32_t)(*(uint32_t *)(param_1 + 4)),0x91);
  return;
}
