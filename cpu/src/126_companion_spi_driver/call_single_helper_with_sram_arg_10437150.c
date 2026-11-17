/* @k10d call_single_helper_with_sram_arg_10437150 @ 0x10437150
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with a fixed SDRAM address as its argument.
 * summary:
 *   The function performs a single call to write_fill_pattern_word_10436f20, passing the
 *   constant 0x8001e7a0 (within the SDRAM region) as the first argument. It returns
 *   immediately after the call completes. No other operations or side effects are visible
 *   in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_sram_arg_10437150(void)

{
  write_fill_pattern_word_10436f20((void *)0x8001e7a0/*SDRAM*/, __frv_reg_unset(5));
  return;
}
