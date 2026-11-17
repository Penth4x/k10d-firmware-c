/* @k10d call_subroutine_on_field_0x14_10441310 @ 0x10441310
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Dereferences the pointer at offset 0x14 of the object in param_1 and passes it to
 *   clear_flag_with_notify.
 * summary:
 *   The function takes a single object pointer, reads the pointer stored at offset 0x14,
 *   and forwards it as the sole argument to the callee clear_flag_with_notify. No other
 *   operations, side effects, or state modifications are visible in the pseudocode. The
 *   role of the callee and the meaning of the 0x14 field are not provided, so the specific
 *   subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_on_field_0x14_10441310(int param_1)

{
  clear_flag_with_notify(*(void **)(param_1 + 0x14));
  return;
}
