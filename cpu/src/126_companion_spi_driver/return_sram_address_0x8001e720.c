/* @k10d return_sram_address_0x8001e720 @ 0x10436eda
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns the fixed SDRAM address 0x8001e720.
 * summary:
 *   The function is a trivial accessor that returns the constant 0x8001e720, which falls
 *   within the SDRAM region (0x80000000..0x8fffffff). It has no side effects and no
 *   callees. The specific purpose of the data at this address is not determinable from the
 *   function body alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t return_sram_address_0x8001e720(void)

{
  return 0x8001e720/*SDRAM*/;
}
