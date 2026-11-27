/* @k10d call_init_with_sram_address_10438768 @ 0x10438768
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with the SDRAM address 0x800f0000 as its argument.
 * summary:
 *   This function is a thin wrapper that invokes dispatch_parameter_pair, passing the fixed
 *   memory address 0x800f0000 (within the SDRAM region 0x80000000..0x8fffffff). The
 *   specific role of the callee is unknown, so the behavior is described mechanically as a
 *   single call with a constant pointer argument.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_init_with_sram_address_10438768(uint32_t param_x0, uint32_t param_x1)
{
  dispatch_parameter_pair(0x800f0000/*SDRAM*/,(int *)(uint32_t)param_x1);
  return;
}
