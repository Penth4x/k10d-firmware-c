/* @k10d call_helper_with_sram_address_104362a6 @ 0x104362a6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing a fixed SDRAM address as its argument.
 * summary:
 *   This function is a one-line wrapper that invokes check_magic_value_10436028 with the
 *   constant 0x8001e3e0. The address 0x8001e3e0 falls within the SDRAM region
 *   (0x80000000..0x8fffffff), likely pointing to a data structure or buffer. No other
 *   operations or side effects are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_104362a6(void)

{
  check_magic_value_10436028((void *)0x8001e3e0/*SDRAM*/);
  return;
}
