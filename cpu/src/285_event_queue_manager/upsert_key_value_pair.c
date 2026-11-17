/* @k10d upsert_key_value_pair @ 0x1052b296
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Updates or appends a key-value pair in a dynamic array of 8-byte records.
 * summary:
 *   Iterates through an array of 8-byte records pointed to by param_1+0x228, using the
 *   count at param_1+0x224. If a record's first field matches param_2, its second field is
 *   set to param_3. If no match is found, a new record is appended at the end of the array
 *   and the count is incremented. Returns 1 on success (update or insert).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int upsert_key_value_pair(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x224)) {
    iVar3 = 0;
    do {
      piVar2 = (int *)(param_1 + 0x228 + iVar3);
      if (*piVar2 == param_2) {
        piVar2[1] = param_3;
        iVar1 = 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar4 < *(int *)(param_1 + 0x224));
  }
  if (iVar1 == 0) {
    *(int *)(*(int *)(param_1 + 0x224) * 8 + param_1 + 0x228) = param_2;
    *(int *)(param_1 + 0x228 + *(int *)(param_1 + 0x224) * 8 + 4) = param_3;
    iVar1 = 1;
    *(int *)(param_1 + 0x224) = *(int *)(param_1 + 0x224) + 1;
  }
  return iVar1;
}
