/* @k10d call_helper_with_sram_address_10435bea @ 0x10435bea
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing the SDRAM address 0x8001e320 as its argument.
 * summary:
 *   This function is a thin wrapper that invokes write_fill_pattern_to_word_10435b2a with
 *   the constant 0x8001e320. The address falls within the SDRAM region
 *   (0x80000000..0x8fffffff), suggesting it points to a data structure, buffer, or state
 *   object in main memory. No other operations or side effects are visible in this function
 *   itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_10435bea(void)

{
  write_fill_pattern_to_word_10435b2a((void *)0x8001e320/*SDRAM*/, __frv_reg_unset(5));
  return;
}
