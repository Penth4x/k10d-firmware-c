/* @k10d find_free_slot_in_array @ 0x10464850
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 141_cpucom_transaction_manager (unit names are model-proposed)
 * purpose:
 *   Scans a fixed-size array of 4-byte slots starting at offset 0x48 in param_1 to find the
 *   first zero entry and writes param_3 into it.
 * summary:
 *   The function iterates through up to 4 slots (param_2 * 0x10 bytes, but the loop bound
 *   is iVar3 + 0x10 which is 4*4=16 bytes, so 4 slots) at offset 0x48 of the object pointed
 *   to by param_1. It checks if each slot is zero; if so, it stores param_3 in that slot
 *   and returns 1. If no free slot is found or param_2 < 1, it returns 0. This appears to
 *   be a resource allocation or slot-finding routine within the cpucom_transaction module,
 *   likely for managing pending transactions or listeners.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t find_free_slot_in_array(void *param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 1) {
    iVar2 = 0;
    iVar3 = param_2 * 0x10;
    iVar1 = iVar3;
    do {
      if (*(int *)((int)param_1 + iVar1 + 0x48) == 0) {
        *(uint32_t *)((int)param_1 + iVar2 * 4 + iVar3 + 0x48) = param_3;
        return 1;
      }
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar1 < iVar3 + 0x10);
  }
  return 0;
}
