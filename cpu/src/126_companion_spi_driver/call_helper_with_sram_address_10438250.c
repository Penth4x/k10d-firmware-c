/* @k10d call_helper_with_sram_address_10438250 @ 0x10438250
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing a fixed SDRAM address as its argument.
 * summary:
 *   The function performs a single call to write_fill_pattern_word_104381ac, passing the
 *   constant 0x8001eb60 (within the SDRAM region) as the first argument. It then returns
 *   immediately. No other operations or side effects are visible in this function's own
 *   code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_10438250(void)

{
  write_fill_pattern_word_104381ac((void *)0x8001eb60/*SDRAM*/, __frv_reg_unset(5));
  return;
}
