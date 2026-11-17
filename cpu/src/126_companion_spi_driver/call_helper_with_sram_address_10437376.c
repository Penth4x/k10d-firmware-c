/* @k10d call_helper_with_sram_address_10437376 @ 0x10437376
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing the SDRAM address 0x8001e820 as its argument.
 * summary:
 *   This function is a one-line wrapper that invokes check_magic_value_10436f34 with the
 *   constant 0x8001e820. The address falls within the SDRAM region
 *   (0x80000000..0x8fffffff), likely pointing to a data structure or buffer. The specific
 *   role of the operation is unknown because the callee's behavior is not described.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_10437376(void)

{
  check_magic_value_10436f34((void *)0x8001e820/*SDRAM*/);
  return;
}
