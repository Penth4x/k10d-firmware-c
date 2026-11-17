/* @k10d call_helper_with_sram_address_104373e0 @ 0x104373e0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function passing a fixed SDRAM address as the argument.
 * summary:
 *   The function performs a single call to apply_four_param_values with the constant
 *   0x8001e820, which lies within the SDRAM region (0x80000000..0x8fffffff). No other
 *   operations, loops, or state modifications are visible in this function. The specific
 *   role of the helper and the data at that address are not determinable from this
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_104373e0(void)

{
  apply_four_param_values(0x8001e820/*SDRAM*/,(uint32_t *)__frv_reg_unset(5));
  return;
}
