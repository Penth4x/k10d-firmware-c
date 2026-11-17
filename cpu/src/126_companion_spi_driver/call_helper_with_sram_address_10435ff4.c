/* @k10d call_helper_with_sram_address_10435ff4 @ 0x10435ff4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with a fixed SDRAM address as its argument.
 * summary:
 *   The function performs a single call to convert_11_to_16_bit_words, passing the constant
 *   0x8001e3a0 (within the SDRAM region) as the first argument. No other operations, loops,
 *   or state modifications are visible in this function itself. The specific role of the
 *   helper and the data at that address are not determined by this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_10435ff4(void)

{
  convert_11_to_16_bit_words(0x8001e3a0/*SDRAM*/, __frv_reg_unset(5));
  return;
}
