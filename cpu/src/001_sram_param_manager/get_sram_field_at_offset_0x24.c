/* @k10d get_sram_field_at_offset_0x24 @ 0x100f1f20
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Returns the 32-bit value stored at offset 0x24 from the base pointer in DAT_800482d4.
 * summary:
 *   The function performs a single memory read from SDRAM (0x80000000 region) using the
 *   global pointer DAT_800482d4. It returns the value at offset 0x24. No other operations
 *   or side effects are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_sram_field_at_offset_0x24(void)

{
  return *(uint32_t *)(_DAT_800482d4/*SDRAM*/ + 0x24);
}
