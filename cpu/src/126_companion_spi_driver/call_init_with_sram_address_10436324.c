/* @k10d call_init_with_sram_address_10436324 @ 0x10436324
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing a fixed SDRAM address as its argument.
 * summary:
 *   This function is a one-line wrapper that invokes copy_53_words_from_source with the
 *   constant 0x8001e3e0. The address 0x8001e3e0 falls within the SDRAM region
 *   (0x80000000..0x8fffffff), likely pointing to a data structure or buffer. The specific
 *   role of the callee is unknown, so the wrapper's purpose is limited to forwarding this
 *   address.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_init_with_sram_address_10436324(uint32_t param_x0, uint32_t param_x1)
{
  copy_53_words_from_source(0x8001e3e0/*SDRAM*/, (uint32_t)param_x1);
  return;
}
