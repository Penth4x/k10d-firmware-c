/* @k10d remove_node_from_list @ 0x105134fc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Removes a node from a doubly-linked list and coalesces adjacent free nodes.
 * summary:
 *   The function acquires a lock (call_kernel_with_short_id) on a structure at
 *   param_1+0x161cc. It unlinks param_2 from the list if it is the head, calls
 *   test_mode_state_init on the node, and clears a field at offset 0x1c (likely a 'free' or
 *   'valid' flag). It then walks the list using clamp_index_to_range_10513b14 (next) and
 *   clamp_index_to_range_10513b22 (prev) to find adjacent nodes with the same flag value
 *   (0) and merges them by updating the list pointers. Finally, it releases the lock
 *   (check_kernel_call_success_10459d88). The stride 0x8d8 suggests a large object size for
 *   the list elements.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void remove_node_from_list(int param_1,uint32_t *param_2)

{
  int iVar1;
  int iVar2;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x161cc));
  if (param_2 == *(uint32_t **)(param_1 + 0x161c8)) {
    *(uint32_t *)(param_1 + 0x161c8) = 0;
  }
  test_mode_state_init(param_2);
  param_2[7] = 0;
  iVar1 = *(int *)(param_1 + 0x161c0);
  iVar2 = *(int *)(iVar1 * 0x8d8 + param_1 + 0x1c);
  while (iVar2 == 0) {
    iVar1 = clamp_index_to_range_10513b14(param_1,iVar1);
    *(int *)(param_1 + 0x161c0) = iVar1;
    if (iVar1 == *(int *)(param_1 + 0x161c4)) break;
    iVar2 = *(int *)(iVar1 * 0x8d8 + param_1 + 0x1c);
  }
  iVar1 = clamp_index_to_range_10513b22(param_1,*(int *)(param_1 + 0x161c4));
  iVar2 = *(int *)(iVar1 * 0x8d8 + param_1 + 0x1c);
  while (iVar2 == 0) {
    *(int *)(param_1 + 0x161c4) = iVar1;
    iVar1 = clamp_index_to_range_10513b22(param_1,iVar1);
    if (*(int *)(param_1 + 0x161c0) == *(int *)(param_1 + 0x161c4)) break;
    iVar2 = *(int *)(iVar1 * 0x8d8 + param_1 + 0x1c);
  }
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x161cc));
  return;
}
