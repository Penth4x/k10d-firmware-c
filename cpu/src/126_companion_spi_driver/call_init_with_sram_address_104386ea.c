/* @k10d call_init_with_sram_address_104386ea @ 0x104386ea
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing the SDRAM address 0x800f0000 as its argument.
 * summary:
 *   This function is a one-line wrapper that invokes write_fill_pattern_to_word_104382f6
 *   with the constant 0x800f0000. The address 0x800f0000 falls within the SDRAM region
 *   (0x80000000..0x8fffffff) used for app state, event queues, task stacks, and the
 *   framebuffer. The specific role of the callee is unknown, so the wrapper's purpose is
 *   limited to forwarding this memory address to it.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_init_with_sram_address_104386ea(uint32_t param_x0, uint32_t param_x1)
{
  write_fill_pattern_to_word_104382f6((void *)0x800f0000/*SDRAM*/, (uint32_t)param_x1);
  return;
}
