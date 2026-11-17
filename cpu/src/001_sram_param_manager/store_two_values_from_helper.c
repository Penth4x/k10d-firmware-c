/* @k10d store_two_values_from_helper @ 0x100f1050
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unknown helper twice and stores the results into two adjacent SDRAM globals.
 * summary:
 *   The function invokes get_sram_field_at_offset_0x20 twice, writing the first return
 *   value to _DAT_800480c4 and the second to _DAT_800480c8. It then returns 0. The role of
 *   the helper and the stored values is not determinable from the provided pseudocode and
 *   callee list.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t store_two_values_from_helper(void)

{
  _DAT_800480c4/*SDRAM*/ = get_sram_field_at_offset_0x20();
  _DAT_800480c8/*SDRAM*/ = get_sram_field_at_offset_0x20();
  return 0;
}
