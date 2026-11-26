/* @k10d call_single_sram_address @ 0x1052e90e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper with a fixed SDRAM address as its argument.
 * summary:
 *   The function makes one call to copy_28_bytes_from_source, passing the constant
 *   0x8005a8f4 (within the SDRAM region 0x80000000..0x8fffffff). No other operations,
 *   loops, or side effects are visible in this function itself. The role of the callee is
 *   unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_sram_address(void)

{
  copy_28_bytes_from_source(0x8005a8f4/*SDRAM*/, __frv_reg_unset(5));
  return;
}
