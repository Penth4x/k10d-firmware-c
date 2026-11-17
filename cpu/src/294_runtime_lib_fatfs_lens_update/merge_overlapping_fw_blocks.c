/* @k10d merge_overlapping_fw_blocks @ 0x1053d9d6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Merges adjacent or overlapping firmware block descriptors in a list when their
 *   addresses and lengths intersect.
 * summary:
 *   Iterates through a list of block descriptors (stride 0x14) pointed to by param_2[9].
 *   For each pair of consecutive blocks, if they share the same type (field 3) and their
 *   address ranges overlap (start1 + len1 >= start2), it merges them by extending the first
 *   block's length, adjusting a cursor in param_2[4] if it falls within the merged region,
 *   and taking the maximum of field 4. The module context is lens firmware update,
 *   suggesting these blocks represent segments of the lens CPU firmware image being
 *   prepared for transfer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void merge_overlapping_fw_blocks(void *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  
  piVar3 = (int *)param_2[9];
  for (uVar5 = ((int *)param_2[9])[1]; uVar5 < *param_2; uVar5 = uVar5 + piVar4[1]) {
    piVar4 = (int *)(param_2[9] + uVar5 * 0x14);
    piVar2 = piVar4;
    if ((piVar3[3] == piVar4[3]) && (*piVar3 + piVar3[1] == *piVar4)) {
      iVar1 = piVar3[1] + piVar4[1];
      piVar3[1] = iVar1;
      if (param_2[4] == uVar5) {
        param_2[4] = param_2[4] - iVar1;
      }
      piVar2 = piVar3;
      if ((uint)piVar3[4] < (uint)piVar4[4]) {
        piVar3[4] = piVar4[4];
      }
    }
    piVar3 = piVar2;
  }
  return;
}
