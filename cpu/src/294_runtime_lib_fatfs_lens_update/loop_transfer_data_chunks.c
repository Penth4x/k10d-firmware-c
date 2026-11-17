/* @k10d loop_transfer_data_chunks @ 0x1053bf8c
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Iteratively transfers data chunks via a helper until the requested byte count is
 *   exhausted.
 * summary:
 *   Validates that each chunk size (param_3) is at least 2 and does not exceed the limit
 *   stored at param_1+0x4c. Calls validate_segmented_data_table to process a chunk, using
 *   the returned values in iStack_20 and uStack_1c to decrement the remaining count
 *   (param_4) and update the chunk size for the next iteration. Returns -0x390 on
 *   validation failure or propagates errors from the callee, and stores the final chunk
 *   size in *param_5 on success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int loop_transfer_data_chunks(int param_1,uint *param_2,uint param_3,int param_4,uint *param_5)

{
  int iVar1;
  uintptr_t sp;
  uint uStack_24;
  int iStack_20;
  uint uStack_1c;
  
  uStack_24 = param_3;
  do {
    if ((uStack_24 < 2) || (*(uint *)(param_1 + 0x4c) < uStack_24)) {
      return -0x390;
    }
    iVar1 = validate_segmented_data_table((void *)param_1,param_2,param_4,&uStack_24);
    if (iVar1 != 0) {
      return iVar1;
    }
    param_4 = param_4 - iStack_20;
    uStack_24 = uStack_1c;
  } while (param_4 != 0);
  *param_5 = uStack_1c;
  return 0;
}
