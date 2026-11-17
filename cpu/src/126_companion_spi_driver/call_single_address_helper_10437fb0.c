/* @k10d call_single_address_helper_10437fb0 @ 0x10437fb0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function with the constant address 0x10436f0e.
 * summary:
 *   This function is a thin wrapper that calls check_magic_sentinel_10436f0e with the
 *   argument 0x10006900. The purpose of the callee is unknown, and the argument appears to
 *   be a memory address within the ROM region (0x10000000..0x105fffff). No other operations
 *   or side effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_address_helper_10437fb0(void)

{
  check_magic_sentinel_10436f0e((void *)0x10006900/*ROM*/);
  return;
}
