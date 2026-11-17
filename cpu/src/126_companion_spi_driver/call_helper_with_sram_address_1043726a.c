/* @k10d call_helper_with_sram_address_1043726a @ 0x1043726a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing a fixed SDRAM address as its argument.
 * summary:
 *   This function is a one-line wrapper that invokes check_magic_value_10436f34 with the
 *   constant 0x8001e7e0. The address 0x8001e7e0 falls within the SDRAM region
 *   (0x80000000..0x8fffffff), likely pointing to a data structure or buffer. The specific
 *   role of the helper and the data at that address are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_1043726a(void)

{
  check_magic_value_10436f34((void *)0x8001e7e0/*SDRAM*/);
  return;
}
