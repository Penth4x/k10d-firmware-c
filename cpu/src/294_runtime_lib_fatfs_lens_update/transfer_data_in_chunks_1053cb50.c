/* @k10d transfer_data_in_chunks_1053cb50 @ 0x1053cb50
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Transfers a buffer in chunks by repeatedly calling a per-chunk transfer routine until
 *   the total byte count is exhausted.
 * summary:
 *   Loops over param_4 (total bytes), calling process_data_block_sequence with a chunk size
 *   (param_3) and a destination pointer (param_2). It validates that each chunk size is at
 *   least 2 and does not exceed a limit stored at param_1+0x4c, returning -0x390 on
 *   failure. On success, it stores the final chunk size in *param_5. The caller context
 *   suggests this is part of a firmware update process, but the function itself performs
 *   generic chunked data transfer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int transfer_data_in_chunks_1053cb50(int param_1,void *param_2,uint param_3,int param_4,uint *param_5)

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
    iVar1 = process_data_block_sequence((void *)param_1,param_2,param_4,&uStack_24);
    if (iVar1 != 0) {
      return iVar1;
    }
    param_4 = param_4 - iStack_20;
    uStack_24 = uStack_1c;
  } while (param_4 != 0);
  *param_5 = uStack_1c;
  return 0;
}
