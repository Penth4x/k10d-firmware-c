/* @k10d find_entry_with_status_two_or_three @ 0x10513a82
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Scans up to 40 array entries for one whose status field equals 2 or 3, returning the
 *   index or 0.
 * summary:
 *   Calls call_kernel_with_short_id on a pointer derived from param_1, then loops iVar2
 *   from 0 to 39. For each index it calls clamp_index_to_range_10513af8(param_1, iVar2) to
 *   get an entry index, then reads the int at (entry_index * 0x8d8 + param_1 + 0x1c) and
 *   checks if it is 2 or 3. If found, it calls check_kernel_call_success_10459d88 on the
 *   same derived pointer and returns the loop counter iVar2. If no match is found after 40
 *   iterations, it also calls check_kernel_call_success_10459d88 and returns 0. The 0x8d8
 *   stride suggests a large struct array.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int find_entry_with_status_two_or_three(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x161cc));
  iVar2 = 0;
  while ((iVar1 = clamp_index_to_range_10513af8(param_1,iVar2), *(int *)(iVar1 * 0x8d8 + param_1 + 0x1c) != 2 &&
         (iVar1 = clamp_index_to_range_10513af8(param_1,iVar2), *(int *)(iVar1 * 0x8d8 + param_1 + 0x1c) != 3))) {
    iVar2 = iVar2 + 1;
    if (0x27 < iVar2) {
LAB_10513ae4:
      check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x161cc));
      return iVar3;
    }
  }
  iVar2 = clamp_index_to_range_10513af8(param_1,iVar2);
  iVar3 = iVar2 * 0x8d8 + param_1;
  goto LAB_10513ae4;
}
