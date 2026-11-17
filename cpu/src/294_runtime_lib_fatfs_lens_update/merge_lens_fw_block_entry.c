/* @k10d merge_lens_fw_block_entry @ 0x1053d582
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Updates a lens firmware block descriptor by merging a new size into a matching entry or
 *   zeroing it.
 * summary:
 *   Iterates over an array of 8-byte descriptors (0x50 bytes total) found via a pointer
 *   chain in param_1. It locates an entry whose first field matches the sum of param_2[0]
 *   and param_2[1]. If found, it merges the second field (size) using a split-add
 *   algorithm; otherwise, it resets the entry to zero. The function is part of the lens
 *   firmware update module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t merge_lens_fw_block_entry(void *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  piVar2 = (int *)0x0;
  piVar1 = (int *)0x0;
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x68) + 0x1c);
  for (iVar3 = 0; iVar3 < 0x50; iVar3 = iVar3 + 8) {
    if (*(int *)(iVar4 + iVar3 + 4) != 0) {
      if (*(int *)(iVar3 + iVar4) == *param_2 + param_2[1]) {
        piVar2 = (int *)(iVar4 + iVar3);
      }
      if ((piVar1 == (int *)0x0) || ((uint)piVar1[1] < *(uint *)(iVar4 + iVar3 + 4))) {
        piVar1 = (int *)(iVar4 + iVar3);
      }
    }
  }
  if (piVar2 != (int *)0x0) {
    if ((piVar2 == piVar1) && ((uint)param_2[1] <= (uint)piVar2[1])) {
      uVar5 = (uint)(piVar2[1] + param_2[1]) >> 1;
      *piVar2 = *param_2 + uVar5;
      piVar2[1] = (piVar2[1] + param_2[1]) - uVar5;
    }
    else {
      *piVar2 = 0;
      piVar2[1] = 0;
    }
  }
  return 0;
}
