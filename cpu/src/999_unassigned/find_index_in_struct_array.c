/* @k10d find_index_in_struct_array @ 0x1041a6a2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Searches an array of 8-byte structs for an entry whose second field matches a given
 *   value.
 * summary:
 *   Iterates through up to 8 entries (offset 0x1588 from param_1, stride 8). For each
 *   entry, it checks if the second 4-byte field (piVar2 + 1) is zero or if the first 4-byte
 *   field (piVar2) does not equal param_2. If a match is found, it returns the index
 *   (iVar1). If no match is found within 8 entries, it returns -1. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int find_index_in_struct_array(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  while ((piVar2 = (int *)(param_1 + 0x1588 + iVar3), *(char *)(piVar2 + 1) == '\0' ||
         (*piVar2 != param_2))) {
    iVar3 = iVar3 + 8;
    iVar1 = iVar1 + 1;
    if (0x47 < iVar3) {
      return -1;
    }
  }
  return iVar1;
}
