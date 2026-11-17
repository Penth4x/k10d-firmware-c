/* @k10d call_single_argument_helper_1043767e @ 0x1043767e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function with the constant argument 0x10006700.
 * summary:
 *   The function consists solely of a call to check_magic_sentinel_10436f0e, passing the
 *   immediate value 0x10006700. No other operations, local variables, or side effects are
 *   visible in this function itself. The role of the callee is unknown, so the specific
 *   subsystem or behavior cannot be determined from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_argument_helper_1043767e(void)

{
  check_magic_sentinel_10436f0e((void *)0x10006700/*ROM*/);
  return;
}
