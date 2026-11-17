/* @k10d call_single_helper_with_sram_arg_10437052 @ 0x10437052
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with a fixed SDRAM address argument.
 * summary:
 *   The function performs a single call to check_magic_value_10436f34, passing the constant
 *   0x8001e760 (an SDRAM address) as its argument. No other operations, loops, or state
 *   modifications are visible in this function itself. The role of the callee is unknown,
 *   so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_sram_arg_10437052(void)

{
  check_magic_value_10436f34((void *)0x8001e760/*SDRAM*/);
  return;
}
