/* @k10d call_init_with_sram_address_104386f8 @ 0x104386f8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing the SDRAM address 0x800f0000 as its argument.
 * summary:
 *   This function is a thin wrapper that invokes check_magic_value_1043830a with the
 *   constant 0x800f0000. This address falls within the SDRAM region
 *   (0x80000000..0x8fffffff) defined in the project brief. The specific role of the callee
 *   is unknown, so the wrapper's purpose is limited to forwarding this memory address to
 *   the helper.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_init_with_sram_address_104386f8(void)

{
  check_magic_value_1043830a((void*)0x800f0000/*SDRAM*/);
  return;
}
