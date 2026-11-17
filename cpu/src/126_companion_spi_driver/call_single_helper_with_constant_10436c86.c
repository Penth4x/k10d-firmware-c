/* @k10d call_single_helper_with_constant_10436c86 @ 0x10436c86
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with a fixed 32-bit constant argument.
 * summary:
 *   The function performs a single call to check_magic_value_1043649e, passing the constant
 *   0x100061c0 as the first argument. No other operations, loops, or state modifications
 *   are visible in the pseudocode. The role of the callee and the meaning of the constant
 *   are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_constant_10436c86(void)

{
  check_magic_value_1043649e((void*)0x100061c0/*ROM*/);
  return;
}
