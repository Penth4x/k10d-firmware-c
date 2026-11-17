/* @k10d call_helper_with_sram_address_104379f2 @ 0x104379f2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function passing a fixed SDRAM address as its argument.
 * summary:
 *   The function performs a single call to write_fill_pattern_word_10436f20 with the
 *   constant 0x8001e9a0, which lies within the SDRAM region (0x80000000..0x8fffffff). No
 *   other operations, loops, or state modifications are visible in this function. The
 *   specific role of the helper and the data at that address are not determinable from this
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_104379f2(void)

{
  write_fill_pattern_word_10436f20((void *)0x8001e9a0/*SDRAM*/, __frv_reg_unset(5));
  return;
}
