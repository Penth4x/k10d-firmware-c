/* @k10d call_helper_with_sram_address_10437580 @ 0x10437580
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing the SDRAM address 0x8001e8a0 as its argument.
 * summary:
 *   This function is a one-line wrapper that invokes write_fill_pattern_word_10436f20 with
 *   the constant 0x8001e8a0. The address falls within the SDRAM region
 *   (0x80000000..0x8fffffff), suggesting it points to a data structure or buffer in main
 *   memory. No other operations or side effects are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_10437580(uint32_t param_x0, uint32_t param_x1)
{
  write_fill_pattern_word_10436f20((void *)0x8001e8a0/*SDRAM*/, (uint32_t)param_x1);
  return;
}
