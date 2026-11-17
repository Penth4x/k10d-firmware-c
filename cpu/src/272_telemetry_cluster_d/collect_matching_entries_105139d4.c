/* @k10d collect_matching_entries_105139d4 @ 0x105139d4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Iterates 40 items, filtering by a status field value of 2, 3, or 4, and stores pointers
 *   to matching items in an output array.
 * summary:
 *   The function calls call_kernel_with_short_id on a sub-object at offset 0x161cc of
 *   param_1, likely to lock or prepare the data structure. It then loops 40 times (0x28),
 *   using clamp_index_to_range_10513af8 to retrieve an index for each iteration. It checks
 *   an integer field at offset 0x1c of the item (calculated as index * 0x8d8 + base) to see
 *   if it equals 2, 3, or 4. If it matches, the pointer to the item is written to the
 *   output array (param_2), and the count is incremented. The loop stops early if the
 *   maximum count (param_3) is reached. Finally, it writes a null terminator to the output
 *   array and calls check_kernel_call_success_10459d88, likely to unlock or finalize the
 *   structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void collect_matching_entries_105139d4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint32_t uStack_18;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x161cc));
  uStack_18 = 0;
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = clamp_index_to_range_10513af8(param_1,iVar2);
    if (((*(int *)(iVar1 * 0x8d8 + param_1 + 0x1c) == 4) ||
        (iVar1 = clamp_index_to_range_10513af8(param_1,iVar2), *(int *)(iVar1 * 0x8d8 + param_1 + 0x1c) == 2)) ||
       (iVar1 = clamp_index_to_range_10513af8(param_1,iVar2), *(int *)(iVar1 * 0x8d8 + param_1 + 0x1c) == 3)) {
      iVar1 = clamp_index_to_range_10513af8(param_1,iVar2);
      *(int *)(param_2 + iVar3) = iVar1 * 0x8d8 + param_1;
      iVar3 = iVar3 + 4;
      uStack_18 = uStack_18 + 1;
      if ((param_3 + -1) * 4 <= iVar3) break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x28);
  *(uint32_t *)(param_2 + uStack_18 * 4) = 0;
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x161cc));
  return;
}
