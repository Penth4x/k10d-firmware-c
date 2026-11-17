/* @k10d call_subroutine_on_field_16_10440028 @ 0x10440028
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads the pointer at offset 0x10 of the object in param_1 and passes it to
 *   set_flag_with_notify.
 * summary:
 *   The function dereferences the 4-byte value at param_1 + 0x10 and forwards it as the
 *   sole argument to set_flag_with_notify. No other operations, side effects, or state
 *   changes are visible in the pseudocode. The role of set_flag_with_notify is unknown, so
 *   the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_on_field_16_10440028(int param_1)

{
  set_flag_with_notify(*(void **)(param_1 + 0x10));
  return;
}
