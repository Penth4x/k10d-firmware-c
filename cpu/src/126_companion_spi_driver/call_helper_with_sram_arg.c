/* @k10d call_helper_with_sram_arg @ 0x10435fe6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with a fixed SDRAM address as its argument.
 * summary:
 *   The function performs a single call to convert_32bit_words_to_16bit_array, passing the
 *   constant 0x8001e3a0 (within the SDRAM region) as the first argument. No other
 *   operations, loops, or state modifications are visible in this function itself. The role
 *   of the callee is unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_arg(void)

{
  convert_32bit_words_to_16bit_array(0x8001e3a0/*SDRAM*/, __frv_reg_unset(5));
  return;
}
