/* @k10d call_single_helper_with_address_1052e888 @ 0x1052e888
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function with a fixed SDRAM address argument.
 * summary:
 *   The function makes one call to write_fill_pattern_to_word_1052e670, passing the
 *   constant 0x8005a8f4 (within the SDRAM region 0x80000000..0x8fffffff). No other
 *   operations, loops, or state changes are visible in this function itself. The role of
 *   the callee is unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_address_1052e888(void)

{
  write_fill_pattern_to_word_1052e670((void *)0x8005a8f4/*SDRAM*/, __frv_reg_unset(5));
  return;
}
