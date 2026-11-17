/* @k10d store_result_of_helper_call_1049b712 @ 0x1049b712
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unknown helper and stores its return value into a global variable.
 * summary:
 *   The function invokes get_or_init_sram_buffer_1049c3d6 and assigns the returned value to
 *   the global variable _DAT_80048fe8. No other operations or side effects are visible in
 *   the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void store_result_of_helper_call_1049b712(void)

{
  _DAT_80048fe8/*SDRAM*/ = get_or_init_sram_buffer_1049c3d6();
  return;
}
