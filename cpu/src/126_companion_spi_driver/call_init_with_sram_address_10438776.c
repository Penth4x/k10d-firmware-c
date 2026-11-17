/* @k10d call_init_with_sram_address_10438776 @ 0x10438776
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function passing the SDRAM address 0x800f0000 as its argument.
 * summary:
 *   This function is a thin wrapper that invokes append_or_init_buffer_entry with the
 *   constant 0x800f0000, which falls within the SDRAM region (0x80000000..0x8fffffff). The
 *   specific role of the callee is unknown, so the wrapper's behavior is described
 *   mechanically as passing a memory address to an initialization or setup routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_init_with_sram_address_10438776(void)

{
  append_or_init_buffer_entry(0x800f0000/*SDRAM*/,(uint32_t *)__frv_reg_unset(5));
  return;
}
