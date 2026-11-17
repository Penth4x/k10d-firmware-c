/* @k10d call_helper_with_sram_address_10436ca2 @ 0x10436ca2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing a fixed SDRAM address as its argument.
 * summary:
 *   This function is a one-line wrapper that invokes check_magic_value_104364c4 with the
 *   constant 0x8001e6a0. The address falls within the SDRAM region
 *   (0x80000000..0x8fffffff), likely pointing to a data structure or buffer. No other
 *   operations or side effects are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_10436ca2(void)

{
  check_magic_value_104364c4((void *)0x8001e6a0/*SDRAM*/);
  return;
}
