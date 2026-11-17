/* @k10d call_single_address_helper_104380da @ 0x104380da
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function with a fixed 32-bit address constant as its argument.
 * summary:
 *   The function performs a single call to check_magic_sentinel_10436f0e, passing the
 *   constant 0x10006940. No other operations, loops, or state modifications are visible in
 *   the pseudocode. The role of the callee and the meaning of the address constant are not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_address_helper_104380da(void)

{
  check_magic_sentinel_10436f0e((void *)0x10006940/*ROM*/);
  return;
}
