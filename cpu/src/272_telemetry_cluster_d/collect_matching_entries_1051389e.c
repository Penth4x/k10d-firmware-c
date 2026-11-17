/* @k10d collect_matching_entries_1051389e @ 0x1051389e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Iterates 40 entries, copying pointers to those with a status value of 4 into an output
 *   array until the limit is reached.
 * summary:
 *   The function calls call_kernel_with_short_id on a sub-object at offset 0x161cc, likely
 *   to lock or prepare the data. It loops 0x28 (40) times, using
 *   clamp_index_to_range_10513af8 to retrieve an index for each iteration. If the entry at
 *   that index has a value of 4 at offset 0x1c, the function calculates the base address of
 *   the entry (index * 0x8d8 + param_1) and stores it in param_2. It stops early if param_3
 *   entries have been collected. Finally, it null-terminates the output array and calls
 *   check_kernel_call_success_10459d88, likely to unlock or finalize the sub-object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void collect_matching_entries_1051389e(int param_1,int param_2,int param_3)

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
    if (*(int *)(iVar1 * 0x8d8 + param_1 + 0x1c) == 4) {
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
