/* @k10d call_helper_with_sram_address_10436482 @ 0x10436482
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing the SDRAM address 0x8001e660 as its argument.
 * summary:
 *   This function is a one-line wrapper that invokes forward_param_and_pointer_value with
 *   the constant 0x8001e660. The address 0x8001e660 falls within the SDRAM region
 *   (0x80000000..0x8fffffff), suggesting it points to a data structure or buffer in main
 *   memory. No other operations or side effects are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_10436482(uint32_t param_x0, uint32_t param_x1)
{
  forward_param_and_pointer_value(0x8001e660/*SDRAM*/,(uint32_t *)(uint32_t)param_x1);
  return;
}
