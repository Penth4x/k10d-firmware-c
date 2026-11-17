/* @k10d call_helper_with_sram_address_10437482 @ 0x10437482
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing a fixed SDRAM address as its argument.
 * summary:
 *   The function performs a single call to check_magic_value_10436f34, passing the constant
 *   0x8001e860 (within the SDRAM region) as the first argument. It then returns
 *   immediately. No other operations, loops, or state modifications are visible in this
 *   function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_10437482(void)

{
  check_magic_value_10436f34((void *)0x8001e860/*SDRAM*/);
  return;
}
