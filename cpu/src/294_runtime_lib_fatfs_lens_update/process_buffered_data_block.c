/* @k10d process_buffered_data_block @ 0x1053ac22
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Conditionally prepares and processes a data block based on a count field, then updates
 *   state and completes the operation.
 * summary:
 *   Checks if the count at offset 8 of param_2 is greater than 1. If so, it calls
 *   dispatch_param2_command to prepare data into a local buffer and validate_block_sequence
 *   to process that buffer, returning an error code (-0x38f) on failure. It then calls
 *   build_lens_update_packet_1053a8a4 to update the state of param_2 with the buffer
 *   contents and finally calls write_data_block_to_buffer to complete the operation,
 *   returning its result. The module context suggests this is part of a firmware update
 *   process, but the function itself performs generic data block processing.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int process_buffered_data_block(void *param_1,void *param_2)

{
  int iVar1;
  uintptr_t sp;
  uint8_t auStack_2bc [672];
  uint uStack_1c;
  
  if (1 < *(uint *)((int)param_2 + 8)) {
    iVar1 = dispatch_param2_command((int)param_1,param_2,auStack_2bc);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = validate_block_sequence(auStack_2bc,*(uint *)((int)param_2 + 8),&uStack_1c);
    if (iVar1 != 0) {
      return -0x38f;
    }
  }
  build_lens_update_packet_1053a8a4((int)param_2,auStack_2bc);
  iVar1 = write_data_block_to_buffer(param_1,param_2,auStack_2bc);
  return iVar1;
}
