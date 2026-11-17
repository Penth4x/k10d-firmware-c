/* @k10d sum_range_via_two_helpers @ 0x104a8a46
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Iterates over a pointer range in a struct, calling two helpers per element and
 *   accumulating their results.
 * summary:
 *   Reads a start pointer from param_1+4 and an end pointer from param_1+8. Loops while
 *   start != end, calling compute_weighted_value on the current element and then
 *   align_size_to_four_bytes with the struct and the first result, adding the second result
 *   to a running total. Returns the accumulated sum.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int sum_range_via_two_helpers(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 4);
  iVar3 = 0;
  if (piVar2 != *(int **)(param_1 + 8)) {
    do {
      iVar1 = compute_weighted_value(*piVar2);
      iVar1 = align_size_to_four_bytes(param_1,iVar1);
      iVar3 = iVar1 + iVar3;
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(param_1 + 8));
  }
  return iVar3;
}
