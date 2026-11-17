/* @k10d call_single_helper_with_sram_arg_10437b30 @ 0x10437b30
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function passing a fixed SDRAM address as its argument.
 * summary:
 *   The function performs a single call to check_magic_value_10436f34 with the constant
 *   0x8001e9e0, which lies within the SDRAM region (0x80000000..0x8fffffff). No other
 *   operations, loops, or state modifications are visible in the pseudocode. The specific
 *   role of the callee is unknown, so the behavior is described mechanically as a wrapper
 *   around that single call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_sram_arg_10437b30(void)

{
  check_magic_value_10436f34((void *)0x8001e9e0/*SDRAM*/);
  return;
}
