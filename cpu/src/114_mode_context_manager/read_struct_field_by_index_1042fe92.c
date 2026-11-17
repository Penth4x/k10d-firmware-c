/* @k10d read_struct_field_by_index_1042fe92 @ 0x1042fe92
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * purpose:
 *   Returns the 32-bit field at offset 0x30 plus index*4 from a structure, or 0 if index is
 *   5 or greater.
 * summary:
 *   The function takes a base pointer (param_1) and an index (param_2). If the index is
 *   less than 5, it dereferences the memory location at base + 0x30 + index*4 and returns
 *   the 32-bit value. Otherwise, it returns 0. It acts as a bounds-checked accessor for an
 *   array of five 32-bit integers located at offset 0x30 within a structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_struct_field_by_index_1042fe92(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 < 5) {
    uVar1 = *(uint32_t *)(param_1 + 0x30 + param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
