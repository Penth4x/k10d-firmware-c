/* @k10d call_helper_with_sram_address_10435b0a @ 0x10435b0a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing the SDRAM address 0x8001e2e0 as its argument.
 * summary:
 *   This function is a one-line wrapper that invokes collect_four_boolean_flags with the
 *   constant 0x8001e2e0. The address falls within the SDRAM region
 *   (0x80000000..0x8fffffff), likely pointing to a data structure or buffer. The specific
 *   role of the helper and the data at that address is not determinable from this
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_10435b0a(void)

{
  collect_four_boolean_flags(0x8001e2e0/*SDRAM*/,(uint *)__frv_reg_unset(5));
  return;
}
