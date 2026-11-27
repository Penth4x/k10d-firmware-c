/* @k10d call_single_helper_with_sram_arg_1043794c @ 0x1043794c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function, passing a fixed SDRAM address as its argument.
 * summary:
 *   The function performs a single call to apply_four_param_values with the constant
 *   0x8001e960, which resides in the SDRAM region. It has no other logic, local variables,
 *   or side effects visible in the pseudocode. The role of the callee is unknown, so the
 *   specific camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_sram_arg_1043794c(uint32_t param_x0, uint32_t param_x1)
{
  apply_four_param_values(0x8001e960/*SDRAM*/,(uint32_t *)(uint32_t)param_x1);
  return;
}
