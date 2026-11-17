/* @k10d init_buffer_with_0xe5_padding @ 0x1053aba0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Initializes a local buffer with 0xe5 padding in 0x20-byte chunks based on a count from
 *   param_2.
 * summary:
 *   Calls dispatch_param2_command to set up a local buffer, then validate_block_sequence to
 *   process it based on a count from param_2. It fills the buffer with 0xe5 bytes in
 *   0x20-byte chunks and finally calls write_data_block_to_buffer. Returns 0 on success or
 *   -0x38f on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_buffer_with_0xe5_padding(void *param_1,void *param_2)

{
  int iVar1;
  uint uVar2;
  uintptr_t sp;
  uint8_t local_2b4 [672];
  uint uStack_14;
  
  iVar1 = dispatch_param2_command((int)param_1,param_2,local_2b4);
  if (iVar1 == 0) {
    iVar1 = validate_block_sequence(local_2b4,*(uint *)((int)param_2 + 8),&uStack_14);
    if (iVar1 == 0) {
      iVar1 = 0;
      for (uVar2 = 0; uVar2 < *(uint *)((int)param_2 + 8); uVar2 = uVar2 + 1) {
        local_2b4[iVar1] = 0xe5;
        iVar1 = iVar1 + 0x20;
      }
      iVar1 = write_data_block_to_buffer(param_1,param_2,local_2b4);
    }
    else {
      iVar1 = -0x38f;
    }
  }
  return iVar1;
}
