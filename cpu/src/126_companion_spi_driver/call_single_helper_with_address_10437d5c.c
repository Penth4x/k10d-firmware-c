/* @k10d call_single_helper_with_address_10437d5c @ 0x10437d5c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function with the constant argument 0x10436f0e.
 * summary:
 *   The function performs no local computation and simply calls
 *   check_magic_sentinel_10436f0e, passing the constant 0x10006880 as its sole argument. No
 *   other side effects or state changes are visible in this function's own code. The role
 *   of the callee is unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_address_10437d5c(void)

{
  check_magic_sentinel_10436f0e((void *)0x10006880/*ROM*/);
  return;
}
