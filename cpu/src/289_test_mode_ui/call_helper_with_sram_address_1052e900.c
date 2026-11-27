/* @k10d call_helper_with_sram_address_1052e900 @ 0x1052e900
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with a fixed SDRAM address as its argument.
 * summary:
 *   The function performs a single call to write_28_bytes_via_callee, passing the constant
 *   0x8005a8f4 (within the SDRAM region) as the first argument. No other operations or side
 *   effects are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_sram_address_1052e900(uint32_t param_x0, uint32_t param_x1)
{
  write_28_bytes_via_callee(0x8005a8f4/*SDRAM*/, (uint32_t)param_x1);
  return;
}
