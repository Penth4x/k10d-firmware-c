/* @k10d store_byte_from_helper @ 0x104ad6dc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with argument 4 and stores the returned byte into a global at
 *   0x800491c0.
 * summary:
 *   The function invokes find_index_in_table with the constant 4, casts the returned byte
 *   to uint, and writes it to the global DAT_800491c0 in SDRAM. No other side effects or
 *   camera-specific operations are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void store_byte_from_helper(void)

{
  byte bVar1;
  
  bVar1 = find_index_in_table(4);
  _DAT_800491c0/*SDRAM*/ = (uint)bVar1;
  return;
}
