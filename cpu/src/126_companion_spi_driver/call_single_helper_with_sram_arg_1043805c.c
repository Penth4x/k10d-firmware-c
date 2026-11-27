/* @k10d call_single_helper_with_sram_arg_1043805c @ 0x1043805c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with a fixed SDRAM address argument.
 * summary:
 *   The function performs a single call to collect_four_status_values, passing the constant
 *   0x8001eae0 (an SDRAM address) as the first argument. No other operations, loops, or
 *   state modifications are visible in this function itself. The role of the callee is
 *   unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_sram_arg_1043805c(uint32_t param_x0, uint32_t param_x1)
{
  collect_four_status_values(0x8001eae0/*SDRAM*/,(uint32_t *)(uint32_t)param_x1);
  return;
}
