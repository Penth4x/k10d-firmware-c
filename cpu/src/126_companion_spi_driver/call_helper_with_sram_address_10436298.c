/* @k10d call_helper_with_sram_address_10436298 @ 0x10436298
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing the SDRAM address 0x8001e3e0 as its argument.
 * summary:
 *   This function is a one-line wrapper that invokes write_fill_pattern_to_word_10436014
 *   with the constant 0x8001e3e0. The address 0x8001e3e0 falls within the SDRAM region
 *   (0x80000000..0x8fffffff), likely pointing to a data structure or buffer. No other
 *   operations or side effects are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_10436298(uint32_t param_x0, uint32_t param_x1)
{
  write_fill_pattern_to_word_10436014((void*)0x8001e3e0/*SDRAM*/, (uint32_t)param_x1);
  return;
}
