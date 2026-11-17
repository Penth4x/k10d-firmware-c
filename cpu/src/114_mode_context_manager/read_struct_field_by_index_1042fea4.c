/* @k10d read_struct_field_by_index_1042fea4 @ 0x1042fea4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * purpose:
 *   Returns the 32-bit value at offset 0x80 plus index*4 in a structure, or 0 if the index
 *   is out of range.
 * summary:
 *   The function takes a base pointer (param_1) and an index (param_2). If the index is
 *   less than 4, it dereferences the memory location at base + 0x80 + index*4 and returns
 *   the 32-bit value. Otherwise, it returns 0. There are no callees, so the specific nature
 *   of the structure or the meaning of the fields cannot be determined from this code
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_struct_field_by_index_1042fea4(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 < 4) {
    uVar1 = *(uint32_t *)(param_1 + 0x80 + param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
