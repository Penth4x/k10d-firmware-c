/* @k10d call_single_address_helper_1043735a @ 0x1043735a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function with a fixed 32-bit address argument.
 * summary:
 *   The function makes one call to check_magic_sentinel_10436f0e, passing the constant
 *   0x10006640 as its sole argument. No other operations, loops, or state changes are
 *   visible in the pseudocode. The role of the callee and the meaning of the address
 *   argument are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_address_helper_1043735a(void)

{
  check_magic_sentinel_10436f0e((void *)0x10006640/*ROM*/);
  return;
}
