/* @k10d call_single_helper_with_constant_10437142 @ 0x10437142
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with the constant argument 0x10436f0e.
 * summary:
 *   The function performs no local computation and simply invokes
 *   check_magic_sentinel_10436f0e with the immediate value 0x100065c0. No other side
 *   effects or state changes are visible in this wrapper.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_constant_10437142(void)

{
  check_magic_sentinel_10436f0e((void *)0x100065c0/*ROM*/);
  return;
}
