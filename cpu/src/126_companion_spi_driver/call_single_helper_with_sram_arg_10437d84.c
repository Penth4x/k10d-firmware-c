/* @k10d call_single_helper_with_sram_arg_10437d84 @ 0x10437d84
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with a fixed SDRAM address argument.
 * summary:
 *   The function performs a single call to check_magic_value_10436f34, passing the constant
 *   0x8001ea60 (within the SDRAM region) as its argument. No other operations, loops, or
 *   state modifications are visible in this function itself. The specific role of the
 *   callee is unknown, so the behavior is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_sram_arg_10437d84(void)

{
  check_magic_value_10436f34((void *)0x8001ea60/*SDRAM*/);
  return;
}
