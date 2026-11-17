/* @k10d call_helper_on_field_0x18_104407ea @ 0x104407ea
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the pointer at offset 0x18 of param_1 to set_flag3_with_notify.
 * summary:
 *   This function dereferences param_1 at offset 0x18 and passes the resulting pointer as
 *   the sole argument to set_flag3_with_notify. It acts as a thin wrapper or thunk that
 *   forwards a specific member of a structure to a callee. No other operations or side
 *   effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_0x18_104407ea(void *param_1)

{
  set_flag3_with_notify(*(void **)((int)param_1 + 0x18));
  return;
}
