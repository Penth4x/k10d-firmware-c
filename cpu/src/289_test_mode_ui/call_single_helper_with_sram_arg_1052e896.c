/* @k10d call_single_helper_with_sram_arg_1052e896 @ 0x1052e896
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with a fixed SDRAM address as its argument.
 * summary:
 *   The function performs a single call to check_magic_value_1052e684, passing the constant
 *   0x8005a8f4 (within the SDRAM region) as the first argument. No other operations, loops,
 *   or state modifications are visible in this function itself. The specific role of the
 *   callee is unknown, so the behavior is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_sram_arg_1052e896(void)

{
  check_magic_value_1052e684((void *)0x8005a8f4/*SDRAM*/);
  return;
}
