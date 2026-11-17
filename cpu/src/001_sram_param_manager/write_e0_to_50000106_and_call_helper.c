/* @k10d write_e0_to_50000106_and_call_helper @ 0x100f09ce
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Writes 0xe0 to global DAT_50000106 then calls set_error_flag_and_halt with argument 10.
 * summary:
 *   The function performs a single store of the constant 0xe0 into the global DAT_50000106,
 *   then invokes set_error_flag_and_halt passing the integer 10. No other operations,
 *   loops, or side effects are visible in the pseudocode. The role of DAT_50000106 and
 *   set_error_flag_and_halt is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_e0_to_50000106_and_call_helper(void)

{
  DAT_50000106 = 0xe0;
  set_error_flag_and_halt(10);
  return;
}
