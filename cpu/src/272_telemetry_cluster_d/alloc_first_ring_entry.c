/* @k10d alloc_first_ring_entry @ 0x10513404
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Allocates the first entry in a ring buffer structure if the count is zero, updating the
 *   head pointer.
 * summary:
 *   The function locks a mutex at param_1+0x161cc. It calculates the base address of a ring
 *   buffer using a count at param_1+0x161c4 and a stride of 0x8d8. If the buffer's status
 *   field (offset 0x1c) is zero, it sets it to 1, stores param_2 in the first slot, and
 *   updates the count via clamp_index_to_range_10513b14. It then unlocks the mutex and
 *   returns a pointer to the allocated entry or NULL.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * alloc_first_ring_entry(int param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x161cc));
  iVar1 = *(int *)(param_1 + 0x161c4) * 0x8d8 + param_1;
  puVar3 = (uint32_t *)0x0;
  if (*(int *)(iVar1 + 0x1c) == 0) {
    *(uint32_t *)(iVar1 + 0x1c) = 1;
    puVar3 = (uint32_t *)(*(int *)(param_1 + 0x161c4) * 0x8d8 + param_1);
    *puVar3 = param_2;
    uVar2 = clamp_index_to_range_10513b14(param_1,*(uint32_t *)(param_1 + 0x161c4));
    *(uint32_t *)(param_1 + 0x161c4) = uVar2;
  }
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x161cc));
  return puVar3;
}
