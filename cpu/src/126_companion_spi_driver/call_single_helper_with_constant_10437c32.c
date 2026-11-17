/* @k10d call_single_helper_with_constant_10437c32 @ 0x10437c32
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function with the constant argument 0x10436f0e.
 * summary:
 *   The function performs no local computation and simply forwards the constant 0x10436f0e
 *   to check_magic_sentinel_10436f0e. No other side effects, memory accesses, or camera-
 *   specific operations are visible in this wrapper. The role of the callee is unknown, so
 *   the wrapper's behavior is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_constant_10437c32(void)

{
  check_magic_sentinel_10436f0e((void *)0x10006840/*ROM*/);
  return;
}
