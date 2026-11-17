/* @k10d call_single_helper_with_address_10437e86 @ 0x10437e86
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function with a fixed 32-bit address argument.
 * summary:
 *   The function performs no local computation; it simply calls
 *   check_magic_sentinel_10436f0e passing the constant 0x100068c0 and returns. The callee's
 *   role is unknown, so the subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_address_10437e86(void)

{
  check_magic_sentinel_10436f0e((void *)0x100068c0/*ROM*/);
  return;
}
