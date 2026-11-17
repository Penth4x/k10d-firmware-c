/* @k10d layout_list_items_sequentially @ 0x104a8958
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Iterates a linked list of items, computing each item's size and writing a running
 *   offset into each item.
 * summary:
 *   Reads a base offset from param_1+0x28 and a value from compute_scaled_interval to form
 *   an initial cursor. It walks a pointer array between param_1+4 and param_1+8, calling
 *   compute_weighted_value and align_size_to_four_bytes to obtain a size for each element,
 *   then stores the current cursor into element+8 and advances the cursor by that size.
 *   This is a classic sequential layout/packing pass over a list of objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void layout_list_items_sequentially(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x28);
  iVar1 = compute_scaled_interval(param_1);
  iVar1 = iVar1 + iVar2 + 6;
  piVar3 = *(int **)(param_1 + 4);
  if (piVar3 != *(int **)(param_1 + 8)) {
    do {
      iVar4 = *piVar3;
      iVar2 = compute_weighted_value(iVar4);
      iVar2 = align_size_to_four_bytes(param_1,iVar2);
      if (iVar2 != 0) {
        *(int *)(iVar4 + 8) = iVar1;
        iVar1 = iVar1 + iVar2;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int **)(param_1 + 8));
  }
  return;
}
