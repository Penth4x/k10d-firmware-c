/* @k10d call_single_address_helper_1052e87a @ 0x1052e87a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function with a fixed 32-bit address constant.
 * summary:
 *   The function performs a single call to check_magic_value_1052e65e, passing the constant
 *   0x10006540 as its argument. No other operations, loops, or state modifications are
 *   visible in the pseudocode. The role of the callee and the meaning of the address
 *   constant are not provided.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_address_helper_1052e87a(void)

{
  check_magic_value_1052e65e((void *)0x10006540/*ROM*/);
  return;
}
