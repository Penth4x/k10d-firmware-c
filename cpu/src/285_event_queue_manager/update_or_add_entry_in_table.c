/* @k10d update_or_add_entry_in_table @ 0x1052b07a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Updates the value at offset 0x174 for a matching key at 0x170, or appends a new entry
 *   if the key is absent and capacity allows.
 * summary:
 *   The function treats param_1 as a structure containing a count at offset 0x16c and an
 *   array of 12-byte entries starting at 0x170. It iterates through existing entries to
 *   find one where the first field matches param_2; if found, it updates the second field
 *   (offset 0x174) to param_3 (clamped to a minimum of 0x80). If no match is found and the
 *   count is less than 15, it appends a new entry with param_2 and param_3, and sets a
 *   third field (offset 0x178) to param_3 + 0x200. Returns 1 on success (update or add), 0
 *   if no match and table is full.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int update_or_add_entry_in_table(void *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (param_3 < 0x80) {
    param_3 = 0x80;
  }
  iVar2 = 0;
  if (0 < *(int *)((int)param_1 + 0x16c)) {
    iVar3 = 0;
    do {
      if (*(int *)((int)param_1 + iVar3 + 0x170) == param_2) {
        *(uint *)((int)param_1 + iVar2 * 0xc + 0x174) = param_3;
        iVar1 = 1;
        break;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar2 < *(int *)((int)param_1 + 0x16c));
  }
  if ((iVar1 == 0) && (*(int *)((int)param_1 + 0x16c) < 0xf)) {
    *(int *)((int)param_1 + *(int *)((int)param_1 + 0x16c) * 0xc + 0x170) = param_2;
    *(uint *)((int)param_1 + *(int *)((int)param_1 + 0x16c) * 0xc + 0x174) = param_3;
    iVar1 = *(int *)((int)param_1 + 0x16c) * 0xc;
    *(int *)((int)param_1 + iVar1 + 0x178) = *(int *)((int)param_1 + iVar1 + 0x174) + 0x200;
    iVar1 = 1;
    *(int *)((int)param_1 + 0x16c) = *(int *)((int)param_1 + 0x16c) + 1;
  }
  return iVar1;
}
