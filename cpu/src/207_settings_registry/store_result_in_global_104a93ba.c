/* @k10d store_result_in_global_104a93ba @ 0x104a93ba
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Calls an unknown function and stores its return value into a global variable.
 * summary:
 *   The function invokes get_or_init_sram_buffer_1049c3d6 and assigns the returned value to
 *   the global variable at 0x80049080. No other operations or side effects are visible in
 *   the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void store_result_in_global_104a93ba(void)

{
  _DAT_80049080/*SDRAM*/ = get_or_init_sram_buffer_1049c3d6();
  return;
}
