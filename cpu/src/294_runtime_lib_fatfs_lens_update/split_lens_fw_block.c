/* @k10d split_lens_fw_block @ 0x1053d6fa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Splits a 5-word lens firmware block at an offset, adjusting head/tail lengths and
 *   copying shared metadata.
 * summary:
 *   Operates on a structure of 5-word records (likely lens firmware blocks/chunks) where
 *   field 0 is a start index, field 1 is a length, and fields 3/4 are shared metadata. If
 *   the requested split point is within the current block, it splits the block into two,
 *   updating the head length and creating a new tail record with the adjusted start index.
 *   If the split point is beyond the current block, it advances the head to the new index
 *   and then splits the resulting block. Returns a pointer to the head record. No callees
 *   are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * split_lens_fw_block(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *param_1;
  if (iVar1 == param_2) {
    piVar2 = param_1;
    if (param_3 < (uint)param_1[1]) {
      piVar3 = param_1 + param_3 * 5;
      *piVar3 = iVar1 + param_3;
      piVar3[1] = param_1[1] - param_3;
      piVar3[4] = param_1[4];
      piVar3[3] = param_1[3];
      param_1[1] = param_3;
    }
  }
  else {
    iVar1 = param_2 - iVar1;
    piVar2 = param_1 + iVar1 * 5;
    *piVar2 = param_2;
    piVar2[1] = param_1[1] - iVar1;
    piVar2[4] = param_1[4];
    piVar2[3] = param_1[3];
    param_1[1] = iVar1;
    if (param_3 < (uint)piVar2[1]) {
      piVar2[param_3 * 5] = param_2 + param_3;
      piVar2[param_3 * 5 + 1] = piVar2[1] - param_3;
      piVar2[param_3 * 5 + 4] = param_1[4];
      piVar2[param_3 * 5 + 3] = param_1[3];
      piVar2[1] = param_3;
    }
  }
  return piVar2;
}
