/* @k10d run_sequential_update_steps @ 0x10537c70
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Executes a chain of update steps in order, aborting on the first failure and calling
 *   matching cleanup functions.
 * summary:
 *   The function calls allocate_lens_update_buffer_1053dc86,
 *   validate_update_parameter_block, allocate_lens_update_context,
 *   allocate_lens_update_buffer_1053d014, and alloc_lens_fw_update_ctx sequentially,
 *   returning the error code from the first step that fails. On success, it writes an
 *   8-byte pattern to offsets 0x78-0x7f of the context and sets the first byte to 0x01 if
 *   it was not already 0x11. On failure, it invokes corresponding cleanup functions
 *   (release_lens_update_context_1053d0ac, free_lens_fw_update_buffers,
 *   release_lens_update_resource) and sets the first byte of the context to 0x00.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int run_sequential_update_steps(char *param_1)

{
  int iVar1;
  
  iVar1 = allocate_lens_update_buffer_1053dc86(param_1);
  if (iVar1 == 0) {
    iVar1 = validate_update_parameter_block(param_1);
    if ((iVar1 == 0) && (iVar1 = allocate_lens_update_context(param_1), iVar1 == 0)) {
      iVar1 = allocate_lens_update_buffer_1053d014(param_1);
      if (iVar1 == 0) {
        iVar1 = alloc_lens_fw_update_ctx(param_1);
        if (iVar1 == 0) {
          param_1[0x78] = '\0';
          param_1[0x79] = '\0';
          param_1[0x7a] = '\0';
          param_1[0x7b] = '\x01';
          param_1[0x7c] = '\0';
          param_1[0x7d] = '\0';
          param_1[0x7e] = '\0';
          param_1[0x7f] = '\0';
          if (*param_1 != '\x11') {
            *param_1 = '\x01';
          }
          return 0;
        }
        release_lens_update_context_1053d0ac((int)param_1);
      }
      free_lens_fw_update_buffers(param_1);
    }
    release_lens_update_resource(param_1);
  }
  *param_1 = '\0';
  return iVar1;
}
