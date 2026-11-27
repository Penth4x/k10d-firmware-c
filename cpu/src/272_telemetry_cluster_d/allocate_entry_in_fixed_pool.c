/* @k10d allocate_entry_in_fixed_pool @ 0x10513468
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Finds the first free slot in a 40-entry array and initializes it with a given value.
 * summary:
 *   The function iterates through up to 0x28 (40) entries in a structure at param_1. It
 *   uses clamp_index_to_range_10513af8 to access entry fields, checking if the status field
 *   (offset 0x1c) is 0. If a free slot is found, it sets the status to 1, writes param_2 to
 *   the entry's base address, and updates a counter at param_1 + 0x161c4 if the index
 *   matches the current count. It wraps the operation with calls to
 *   call_kernel_with_short_id and check_kernel_call_success_10459d88, likely for locking or
 *   synchronization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * allocate_entry_in_fixed_pool(int param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  uint32_t *puVar4;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x161cc));
  puVar4 = (uint32_t *)0x0;
  iVar3 = 0;
  do {
    iVar1 = clamp_index_to_range_10513af8(param_1,iVar3);
    if (*(int *)(iVar1 * 0x8d8 + param_1 + 0x1c) == 0) {
      iVar1 = clamp_index_to_range_10513af8(param_1,iVar3);
      *(uint32_t *)(iVar1 * 0x8d8 + param_1 + 0x1c) = 1;
      iVar1 = clamp_index_to_range_10513af8(param_1,iVar3);
      puVar4 = (uint32_t *)(iVar1 * 0x8d8 + param_1);
      *puVar4 = param_2;
      iVar3 = clamp_index_to_range_10513af8(param_1,iVar3);
      if (iVar3 == *(int *)(param_1 + 0x161c4)) {
        uVar2 = clamp_index_to_range_10513b14(param_1, (uint32_t)param_2);
        *(uint32_t *)(param_1 + 0x161c4) = uVar2;
      }
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x28);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x161cc));
  return puVar4;
}
