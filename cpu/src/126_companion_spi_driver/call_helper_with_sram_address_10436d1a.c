/* @k10d call_helper_with_sram_address_10436d1a @ 0x10436d1a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing a fixed SDRAM address as its argument.
 * summary:
 *   The function performs a single call to copy_three_word_array with the constant
 *   0x8001e6a0. This address falls within the SDRAM region (0x80000000..0x8fffffff) used
 *   for app state and data structures. No other operations or side effects are visible in
 *   this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_10436d1a(uint32_t param_x0, uint32_t param_x1)
{
  copy_three_word_array(0x8001e6a0/*SDRAM*/, (uint32_t)param_x1);
  return;
}
