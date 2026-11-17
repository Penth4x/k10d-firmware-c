/* @k10d call_single_helper_with_constant_104379de @ 0x104379de
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function with the constant argument 0x10436f0e.
 * summary:
 *   The function performs no local computation and has no visible side effects other than
 *   the call to check_magic_sentinel_10436f0e. The callee's role is unknown, so the
 *   specific subsystem cannot be determined. This is a thin wrapper or thunk around the
 *   callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_constant_104379de(void)

{
  check_magic_sentinel_10436f0e((void *)0x100067c0/*ROM*/);
  return;
}
