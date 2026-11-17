/* @k10d get_field_from_struct_at_offset @ 0x104a7224
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Returns a 32-bit value from a sub-structure pointed to by a field at offset 100 in
 *   param_1, selecting between offsets 8 and 0xc based on param_2.
 * summary:
 *   The function dereferences the pointer stored at param_1 + 100 and then reads a 32-bit
 *   value from either offset 8 or 0xc of that target structure, depending on whether
 *   param_2 is 0 or 1. If param_2 is neither 0 nor 1, it returns 0. There are no callees,
 *   and the specific meaning of the data or the structure layout is not determinable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_field_from_struct_at_offset(int param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = *(uint32_t *)(*(int *)(param_1 + 100) + 8);
  }
  else if (param_2 == 1) {
    uVar1 = *(uint32_t *)(*(int *)(param_1 + 100) + 0xc);
  }
  return uVar1;
}
