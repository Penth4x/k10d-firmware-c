/* @k10d call_helper_with_sram_address_10436ef2 @ 0x10436ef2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function passing a fixed SDRAM address as its argument.
 * summary:
 *   The function performs a single call to apply_five_params_to_target with the constant
 *   0x8001e720, which lies within the SDRAM region (0x80000000..0x8fffffff). No other
 *   operations, loops, or state modifications are visible in this function. The role of the
 *   callee is unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_10436ef2(uint32_t param_x0, uint32_t param_x1)
{
  apply_five_params_to_target(0x8001e720/*SDRAM*/,(uint32_t *)(uint32_t)param_x1);
  return;
}
