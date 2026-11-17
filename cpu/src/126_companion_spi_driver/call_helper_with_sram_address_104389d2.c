/* @k10d call_helper_with_sram_address_104389d2 @ 0x104389d2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with a fixed SDRAM address as its argument.
 * summary:
 *   The function performs a single call to check_magic_value_104388bc, passing the constant
 *   0x8001eba0 (within the SDRAM region) as the first argument. No other operations, loops,
 *   or state modifications are visible in this function itself. The specific role of the
 *   helper and the data at that address are not determinable from this pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_104389d2(void)

{
  check_magic_value_104388bc((void *)0x8001eba0/*SDRAM*/);
  return;
}
