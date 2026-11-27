/* @k10d call_helper_with_sram_address_10435eda @ 0x10435eda
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with a fixed SDRAM address as its argument.
 * summary:
 *   The function passes the constant 0x8001e360 (within the SDRAM region) to
 *   convert_32bit_words_to_16bit_array and returns. No other operations or side effects are
 *   visible in this wrapper.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_10435eda(uint32_t param_x0, uint32_t param_x1)
{
  convert_32bit_words_to_16bit_array(0x8001e360/*SDRAM*/, (uint32_t)param_x1);
  return;
}
