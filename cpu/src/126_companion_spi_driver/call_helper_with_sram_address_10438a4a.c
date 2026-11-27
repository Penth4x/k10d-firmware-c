/* @k10d call_helper_with_sram_address_10438a4a @ 0x10438a4a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing the SDRAM address 0x8001eba0 as its argument.
 * summary:
 *   This function is a thin wrapper that invokes call_and_store_result_1043893a with the
 *   constant 0x8001eba0. The address 0x8001eba0 falls within the SDRAM region
 *   (0x80000000..0x8fffffff), likely pointing to a data structure or buffer. No other
 *   operations or side effects are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_10438a4a(uint32_t param_x0, uint32_t param_x1)
{
  call_and_store_result_1043893a(0x8001eba0/*SDRAM*/,(uint32_t *)(uint32_t)param_x1);
  return;
}
