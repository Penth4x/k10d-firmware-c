/* @k10d call_helper_with_address_0x10006100 @ 0x104389b6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with the constant argument 0x10006100.
 * summary:
 *   The function consists solely of a call to check_magic_value_10438896, passing the
 *   constant 0x10006100. The argument falls within the ROM region (0x10000000..0x105fffff),
 *   suggesting it may be a code or data address, but the callee's role is unknown. No other
 *   operations or side effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_address_0x10006100(void)

{
  check_magic_value_10438896((void *)0x10006100/*ROM*/);
  return;
}
