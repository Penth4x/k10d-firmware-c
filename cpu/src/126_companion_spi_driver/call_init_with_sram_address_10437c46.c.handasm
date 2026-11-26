/* @k10d call_init_with_sram_address_10437c46 @ 0x10437c46
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing a fixed SDRAM address as its argument.
 * summary:
 *   This function is a one-line wrapper that invokes write_fill_pattern_word_10436f20 with
 *   the constant 0x8001ea20. The address 0x8001ea20 falls within the SDRAM region
 *   (0x80000000..0x8fffffff) used for app state, event queues, and task stacks. The
 *   specific role of the helper function is unknown, so the wrapper's purpose is limited to
 *   forwarding this specific memory address to it.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_init_with_sram_address_10437c46(void)

{
  write_fill_pattern_word_10436f20((void*)0x8001ea20/*SDRAM*/, __frv_reg_unset(5));
  return;
}
