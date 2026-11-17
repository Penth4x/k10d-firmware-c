/* @k10d collect_matching_entries_1051377c @ 0x1051377c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Iterates 40 items, filtering those with status 2 or 3, and writes their pointers to an
 *   output array.
 * summary:
 *   The function calls call_kernel_with_short_id on a sub-object at offset 0x161cc, likely
 *   to lock or prepare the data structure. It loops 40 times (0x28), using
 *   clamp_index_to_range_10513af8 to retrieve an index for each iteration. It checks if the
 *   integer at offset 0x1c of the item (calculated as index * 0x8d8 + base) is 2 or 3. If
 *   so, it stores the item's base address in the output buffer (param_2) and increments a
 *   count. The loop terminates early if the count reaches param_3. Finally, it null-
 *   terminates the output array and calls check_kernel_call_success_10459d88, likely to
 *   unlock or finalize the structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void collect_matching_entries_1051377c(int param_1,int param_2,int param_3)

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
    if ((*(int *)(iVar1 * 0x8d8 + param_1 + 0x1c) == 2) ||
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
