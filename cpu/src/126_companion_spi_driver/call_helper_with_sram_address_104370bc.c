/* @k10d call_helper_with_sram_address_104370bc @ 0x104370bc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing the SDRAM address 0x8001e760 as its argument.
 * summary:
 *   This function is a one-line wrapper that invokes apply_four_param_values with the
 *   constant 0x8001e760. The address falls within the SDRAM region
 *   (0x80000000..0x8fffffff), likely pointing to a data structure or buffer. The specific
 *   role of the helper and the data at that address are unknown, so the function's broader
 *   purpose cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_104370bc(void)

{
  apply_four_param_values(0x8001e760/*SDRAM*/,(uint32_t *)__frv_reg_unset(5));
  return;
}
