/* @k10d call_helper_with_sram_address_10436e7a @ 0x10436e7a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with a fixed SDRAM address as its argument.
 * summary:
 *   The function passes the constant 0x8001e720 (within the SDRAM region) to
 *   write_fill_pattern_word_10436d3a and returns. No other operations or side effects are
 *   visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_10436e7a(uint32_t param_x0, uint32_t param_x1)
{
  write_fill_pattern_word_10436d3a((void *)0x8001e720/*SDRAM*/, (uint32_t)param_x1);
  return;
}
