/* @k10d compute_indexed_difference @ 0x104f4af8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 259_settings_buffer_manager (unit names are model-proposed)
 * purpose:
 *   Returns the difference between two 32-bit values at offsets 0x20 and 0x30 of a 4-entry
 *   array indexed by param_2.
 * summary:
 *   The function takes a base pointer (param_1) and an index (param_2). If the index is
 *   less than 4, it subtracts the value at base + index*4 + 0x30 from the value at base +
 *   index*4 + 0x20. Otherwise, it returns 0. No callees are used, and the specific role of
 *   the data structure is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_indexed_difference(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 4) {
    iVar1 = *(int *)(param_2 * 4 + param_1 + 0x20) - *(int *)(param_2 * 4 + param_1 + 0x30);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
