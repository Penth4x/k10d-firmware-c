/* @k10d call_single_helper_with_sram_arg_1043769a @ 0x1043769a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function passing a fixed SDRAM address as its argument.
 * summary:
 *   The function performs a single call to check_magic_value_10436f34 with the constant
 *   0x8001e8e0, which lies in the SDRAM region. No other operations, loops, or state
 *   modifications are visible in the pseudocode. The role of the callee is unknown, so the
 *   specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_sram_arg_1043769a(void)

{
  check_magic_value_10436f34((void *)0x8001e8e0/*SDRAM*/);
  return;
}
