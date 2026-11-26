/* @k10d call_helper_with_sram_address_10435a84 @ 0x10435a84
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing the SDRAM address 0x8001e2e0 as its argument.
 * summary:
 *   This function is a thin wrapper that invokes write_magic_marker_word with the constant
 *   0x8001e2e0. The address 0x8001e2e0 falls within the SDRAM region
 *   (0x80000000..0x8fffffff), likely pointing to a data structure or buffer. No other
 *   operations or side effects are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_10435a84(void)

{
  write_magic_marker_word((void *)0x8001e2e0/*SDRAM*/, __frv_reg_unset(5));
  return;
}
