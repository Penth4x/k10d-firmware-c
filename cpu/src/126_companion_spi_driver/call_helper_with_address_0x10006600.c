/* @k10d call_helper_with_address_0x10006600 @ 0x1043724e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with the constant argument 0x10006600.
 * summary:
 *   The function consists solely of a call to check_magic_sentinel_10436f0e, passing the
 *   constant 0x10006600. The argument falls within the ROM region (0x10000000..0x105fffff),
 *   suggesting it may be a pointer to firmware data or code, but the callee's role is
 *   unknown. No other operations or side effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_address_0x10006600(void)

{
  check_magic_sentinel_10436f0e((void *)0x10006600/*ROM*/);
  return;
}
