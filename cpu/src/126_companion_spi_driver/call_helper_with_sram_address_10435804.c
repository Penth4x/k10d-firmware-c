/* @k10d call_helper_with_sram_address_10435804 @ 0x10435804
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with a fixed SDRAM address as its argument.
 * summary:
 *   The function performs a single call to write_four_words_to_param, passing the constant
 *   0x8001e2a0 (within the SDRAM region) as the first argument. No other operations, loops,
 *   or state modifications are visible in this function itself. The specific role of the
 *   helper and the data at that address are not determined by this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_10435804(uint32_t param_x0, uint32_t param_x1)
{
  write_four_words_to_param(0x8001e2a0/*SDRAM*/,(uint *)(uint32_t)param_x1);
  return;
}
