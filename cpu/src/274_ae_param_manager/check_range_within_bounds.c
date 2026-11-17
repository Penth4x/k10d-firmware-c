/* @k10d check_range_within_bounds @ 0x1051b794
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Checks if a range [param_2, param_2+param_3) fits within the bounds defined by a
 *   structure at param_1.
 * summary:
 *   The function takes a pointer to a structure (param_1) where offset 0xc holds a
 *   size/length and offset 0x10 holds a base offset or start index. It verifies that
 *   param_2 is less than the size and that the sum of the base offset, size, and param_3
 *   does not exceed param_2. It returns 1 if the range is valid, 0 otherwise. No callees
 *   are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_range_within_bounds(int param_1,uint param_2,int param_3)

{
  uint32_t uVar1;
  
  if ((param_2 < *(uint *)(param_1 + 0xc)) ||
     (uVar1 = 1, *(int *)(param_1 + 0x10) + *(uint *)(param_1 + 0xc) < param_2 + param_3)) {
    uVar1 = 0;
  }
  return uVar1;
}
