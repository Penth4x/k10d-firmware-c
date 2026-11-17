/* @k10d call_helper_with_sram_address_1043579a @ 0x1043579a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing the SDRAM address 0x8001e2a0 as its argument.
 * summary:
 *   This function is a thin wrapper that invokes check_magic_value_1043560c with a fixed
 *   pointer to SDRAM (0x8001e2a0). It has no other logic, local variables, or side effects
 *   of its own. The specific role of the helper and the data at that address is not
 *   determinable from this snippet alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_1043579a(void)

{
  check_magic_value_1043560c((void *)0x8001e2a0/*SDRAM*/);
  return;
}
