/* @k10d call_helper_with_sram_address_10435e70 @ 0x10435e70
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing a fixed SDRAM address as its argument.
 * summary:
 *   The function performs a single call to check_magic_value_10435ca4, providing the
 *   constant 0x8001e360 (within the SDRAM region) as the first argument. It then returns
 *   immediately. No other operations or side effects are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_10435e70(void)

{
  check_magic_value_10435ca4((void *)0x8001e360/*SDRAM*/);
  return;
}
