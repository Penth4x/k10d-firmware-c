/* @k10d read_byte_via_helper @ 0x1053f444
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Calls a helper to fill a local buffer and returns the last byte of that buffer through
 *   an output pointer.
 * summary:
 *   Returns error code -0x16 if the output pointer is null. Otherwise, calls
 *   process_buffer_with_status_check with the input parameter and a local stack buffer. If
 *   the callee returns 0, it copies the byte at uStack_17 (the last byte of the buffer) to
 *   the output pointer and returns 0. The specific subsystem or data type is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int read_byte_via_helper(char *param_1,uint8_t *param_2)

{
  int iVar1;
  int extraout_r4;
  uintptr_t sp;
  uint8_t auStack_224 [525];
  uint8_t uStack_17;
  
  if (param_2 == (uint8_t *)0x0) {
    iVar1 = -0x16;
  }
  else {
    process_buffer_with_status_check(param_1,auStack_224);
    iVar1 = extraout_r4;
    if (extraout_r4 == 0) {
      iVar1 = 0;
      *param_2 = uStack_17;
    }
  }
  return iVar1;
}
