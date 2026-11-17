/* @k10d call_helper_on_field_2c_10443e3c @ 0x10443e3c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads the pointer at offset 0x1c of the object and passes it to a single helper
 *   function.
 * summary:
 *   The function takes an object pointer, dereferences the member at offset 0x1c, and calls
 *   set_flag_with_notify with that value. It is a thin wrapper that forwards a specific
 *   object field to a callee. No other side effects or state modifications are visible in
 *   the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_2c_10443e3c(void *param_1)

{
  set_flag_with_notify(*(void **)((int)param_1 + 0x1c));
  return;
}
