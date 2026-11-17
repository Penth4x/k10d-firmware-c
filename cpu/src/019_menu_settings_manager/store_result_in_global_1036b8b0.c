/* @k10d store_result_in_global_1036b8b0 @ 0x1036b8b0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with a fixed SDRAM address and stores the returned value into a global
 *   variable.
 * summary:
 *   The function invokes check_setting_0xcf_zero with the constant argument 0x800158d4 (an
 *   SDRAM address). The return value from this call is assigned to the global variable
 *   DAT_800043a0. No other operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_result_in_global_1036b8b0(void)

{
  DAT_800043a0/*SDRAM*/ = check_setting_0xcf_zero((void*)0x800158d4/*SDRAM*/);
  return;
}
