/* @k10d call_single_helper_with_constant_10437466 @ 0x10437466
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function with a fixed 32-bit constant argument.
 * summary:
 *   The function performs no local computation and simply calls
 *   check_magic_sentinel_10436f0e, passing the constant 0x10006680 as its sole argument.
 *   The callee's role is unknown, so the specific subsystem or behavior cannot be
 *   determined from this wrapper alone. No other side effects or state changes are visible
 *   in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_constant_10437466(void)

{
  check_magic_sentinel_10436f0e((void *)0x10006680/*ROM*/);
  return;
}
