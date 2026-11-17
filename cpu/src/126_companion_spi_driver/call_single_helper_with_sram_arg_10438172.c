/* @k10d call_single_helper_with_sram_arg_10438172 @ 0x10438172
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with a fixed SDRAM address as its argument.
 * summary:
 *   The function performs a single call to apply_four_param_values, passing the constant
 *   0x8001eb20 (an SDRAM address) as the first argument. It returns immediately after the
 *   call completes. The specific role of the callee is unknown, so the behavior is
 *   described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_sram_arg_10438172(void)

{
  apply_four_param_values(0x8001eb20/*SDRAM*/,(uint32_t *)__frv_reg_unset(5));
  return;
}
