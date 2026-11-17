/* @k10d call_single_helper_with_constant_10437036 @ 0x10437036
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function with the constant argument 0x10436f0e.
 * summary:
 *   The function consists of a single call to check_magic_sentinel_10436f0e, passing the
 *   constant 0x10006580 as its argument. No other operations, local variables, or side
 *   effects are visible in the pseudocode. The role of the callee is unknown, so the
 *   overall purpose cannot be determined beyond this single invocation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_constant_10437036(void)

{
  check_magic_sentinel_10436f0e((void *)0x10006580/*ROM*/);
  return;
}
