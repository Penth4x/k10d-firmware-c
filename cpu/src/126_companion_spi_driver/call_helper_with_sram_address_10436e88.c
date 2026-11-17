/* @k10d call_helper_with_sram_address_10436e88 @ 0x10436e88
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing the SDRAM address 0x8001e720 as its argument.
 * summary:
 *   This function is a one-line wrapper that invokes check_magic_value_10436d4e with the
 *   constant 0x8001e720. The address 0x8001e720 falls within the SDRAM region
 *   (0x80000000..0x8fffffff), suggesting it points to a data structure, buffer, or state
 *   object in main memory. No other operations or side effects are visible in this function
 *   itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_10436e88(void)

{
  check_magic_value_10436d4e((void *)0x8001e720/*SDRAM*/);
  return;
}
