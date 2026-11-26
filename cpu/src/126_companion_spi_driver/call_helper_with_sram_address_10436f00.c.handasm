/* @k10d call_helper_with_sram_address_10436f00 @ 0x10436f00
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing a fixed SDRAM address as its argument.
 * summary:
 *   The function is a one-line wrapper that invokes collect_five_property_values with the
 *   constant 0x8001e720. This address falls within the SDRAM region
 *   (0x80000000..0x8fffffff) used for app state and queues. No other operations or side
 *   effects are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_10436f00(void)

{
  collect_five_property_values(0x8001e720/*SDRAM*/,(uint32_t *)__frv_reg_unset(5));
  return;
}
