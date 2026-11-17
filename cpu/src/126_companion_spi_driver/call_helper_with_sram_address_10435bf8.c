/* @k10d call_helper_with_sram_address_10435bf8 @ 0x10435bf8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing the SDRAM address 0x8001e320 as its argument.
 * summary:
 *   This function is a thin wrapper that invokes check_magic_value_10435b3e with a fixed
 *   pointer to SDRAM (0x8001e320). It has no other logic, local variables, or side effects.
 *   The specific role of the helper and the data at that address are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_10435bf8(void)

{
  check_magic_value_10435b3e((void *)0x8001e320/*SDRAM*/);
  return;
}
