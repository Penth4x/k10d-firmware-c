/* @k10d invoke_callback_at_offset_0x10 @ 0x10440682
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls the function pointer stored at offset 0x10 of the object passed in param_1.
 * summary:
 *   This is a one-line trampoline that dereferences the pointer at offset 0x10 of the input
 *   object and calls it with no arguments. The callee set_flag3_with_notify is not named,
 *   so the specific subsystem or behavior cannot be determined from the available
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_callback_at_offset_0x10(void *param_1)

{
  set_flag3_with_notify(*(void **)((int)param_1 + 0x10));
  return;
}
