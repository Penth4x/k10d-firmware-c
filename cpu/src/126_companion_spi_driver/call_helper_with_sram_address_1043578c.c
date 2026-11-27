/* @k10d call_helper_with_sram_address_1043578c @ 0x1043578c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing the SDRAM address 0x8001e2a0 as its argument.
 * summary:
 *   This function is a one-line wrapper that invokes write_fill_pattern_word_104355f8 with
 *   the constant 0x8001e2a0. The address 0x8001e2a0 falls within the SDRAM region
 *   (0x80000000..0x8fffffff), likely pointing to a data structure or buffer. The specific
 *   role of the helper and the data at that address is not determinable from this
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_1043578c(uint32_t param_x0, uint32_t param_x1)
{
  write_fill_pattern_word_104355f8((void *)0x8001e2a0/*SDRAM*/, (uint32_t)param_x1);
  return;
}
