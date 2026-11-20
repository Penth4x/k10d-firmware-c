/* @k10d call_single_address_helper_10435e54 @ 0x10435e54
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function with a fixed 32-bit address constant as its argument.
 * summary:
 *   The function performs a single call to check_magic_value_10435c7e, passing the constant
 *   0x10006140. No other operations, loops, or state modifications are visible in the
 *   pseudocode. The role of the callee and the meaning of the constant are not determinable
 *   from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_address_helper_10435e54(void)

{
  check_magic_value_10435c7e((void *)0x10006140/*ROM*/);
  return;
}
