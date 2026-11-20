/* @k10d store_result_to_global @ 0x1036b8cc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with a fixed SDRAM address and stores the return value into a global
 *   variable.
 * summary:
 *   The function invokes check_setting_0x97_valid with the constant 0x800158d4 (an SDRAM
 *   address) and assigns the result to the global DAT_800043a1. The specific role of the
 *   helper or the global is not determinable from the provided pseudocode and callee list.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_result_to_global(void)

{
  DAT_800043a1/*SDRAM*/ = check_setting_0x97_valid((void *)0x800158d4/*SDRAM*/);
  return;
}
