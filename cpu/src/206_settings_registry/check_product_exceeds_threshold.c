/* @k10d check_product_exceeds_threshold @ 0x104a9040
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Returns true if the product of a callee result and a struct field exceeds 4.
 * summary:
 *   Reads a 16-bit value at offset 2 and a 32-bit value at offset 4 of the input object.
 *   Calls map_mode_to_bitmask with a global pointer and the 16-bit value, then multiplies
 *   the result by the 32-bit field. Returns true if the product is greater than 4. The
 *   specific role of map_mode_to_bitmask and the struct fields is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool check_product_exceeds_threshold(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)param_1 + 4);
  iVar1 = map_mode_to_bitmask(_DAT_80049078/*SDRAM*/,*(uint16_t *)((int)param_1 + 2));
  return 4 < (uint)(iVar1 * iVar2);
}
