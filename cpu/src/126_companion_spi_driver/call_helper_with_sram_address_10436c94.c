/* @k10d call_helper_with_sram_address_10436c94 @ 0x10436c94
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with a fixed SDRAM address as its argument.
 * summary:
 *   The function performs a single call to write_fill_pattern_word_104364b0, passing the
 *   constant 0x8001e6a0 (within the SDRAM region) as the first argument. No other
 *   operations, loops, or state modifications are visible in this function itself. The role
 *   of the callee is unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_10436c94(uint32_t param_x0, uint32_t param_x1)
{
  write_fill_pattern_word_104364b0((void *)0x8001e6a0/*SDRAM*/, (uint32_t)param_x1);
  return;
}
