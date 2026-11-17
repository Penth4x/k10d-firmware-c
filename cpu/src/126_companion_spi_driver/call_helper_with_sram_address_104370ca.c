/* @k10d call_helper_with_sram_address_104370ca @ 0x104370ca
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function passing a fixed SDRAM address as its argument.
 * summary:
 *   The function performs a single call to collect_four_status_values with the constant
 *   0x8001e760, which lies within the SDRAM region (0x80000000..0x8fffffff). No other
 *   operations, loops, or state modifications are visible in this function. The specific
 *   role of the helper or the data at that address is not determinable from this pseudocode
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_104370ca(void)

{
  collect_four_status_values(0x8001e760/*SDRAM*/,(uint32_t *)__frv_reg_unset(5));
  return;
}
