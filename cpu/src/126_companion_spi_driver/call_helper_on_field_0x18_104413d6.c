/* @k10d call_helper_on_field_0x18_104413d6 @ 0x104413d6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Dereferences the pointer at offset 0x18 of the object in param_1 and passes it to
 *   set_flag_with_notify.
 * summary:
 *   The function takes a single object pointer, loads the pointer stored at offset 0x18,
 *   and forwards it as the sole argument to set_flag_with_notify. No other operations,
 *   flags, or side effects are visible in the pseudocode. The role of set_flag_with_notify
 *   is unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_0x18_104413d6(int param_1)

{
  set_flag_with_notify(*(void **)(param_1 + 0x18));
  return;
}
