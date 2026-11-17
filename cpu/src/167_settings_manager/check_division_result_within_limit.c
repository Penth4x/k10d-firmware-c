/* @k10d check_division_result_within_limit @ 0x10478bb6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Computes a value via a helper and checks if a related value is within a limit derived
 *   from that value.
 * summary:
 *   Calls alloc_zeroed_struct_104815e0 to initialize a local array. Calls
 *   query_state_with_lock with fields from param_1 and the local array, storing the result
 *   in iVar1. If iVar1 is non-zero, it checks if uStack_c is less than or equal to 150000
 *   divided by the first element of the local array plus 1. Returns 1 if the condition
 *   holds, 0 otherwise. Calls free_heap_if_flagged_10481604 before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_division_result_within_limit(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint auStack_14 [2];
  uint uStack_c;
  
  alloc_zeroed_struct_104815e0(auStack_14);
  iVar1 = query_state_with_lock(*(uint32_t *)(param_1 + 0x14),*(uint32_t *)(param_1 + 4),auStack_14);
  uVar2 = 0;
  if ((iVar1 != 0) && (uVar2 = 1, uStack_c <= 150000 / auStack_14[0] + 1)) {
    uVar2 = 0;
  }
  free_heap_if_flagged_10481604(auStack_14,2);
  return uVar2;
}
