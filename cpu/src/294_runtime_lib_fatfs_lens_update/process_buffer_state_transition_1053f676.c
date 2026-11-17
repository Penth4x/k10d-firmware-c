/* @k10d process_buffer_state_transition_1053f676 @ 0x1053f676
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Validates input, processes a data buffer, and transitions its state from 0x11 to 0x01
 *   on success.
 * summary:
 *   The function checks for null pointer or zero length, then calls
 *   validate_alphanumeric_string to validate the first parameter. It invokes
 *   initialize_0x80_byte_record to process the buffer, and if the resulting state is 0x11,
 *   it calls process_block_range to finalize the operation. On success, it updates the
 *   state to 0x01; on failure, it calls init_lens_update_context_10537c34 to clean up.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int process_buffer_state_transition_1053f676(char *param_1,void *param_2,int param_3)

{
  int iVar1;
  uintptr_t sp;
  char *pcStack_1c;
  
  if ((param_2 == (void *)0x0) || (param_3 == 0)) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = validate_alphanumeric_string(param_1);
    if ((iVar1 == 0) && (iVar1 = initialize_0x80_byte_record(param_1,param_2,param_3,&pcStack_1c), iVar1 == 0)) {
      if (*pcStack_1c == '\x11') {
        iVar1 = process_block_range(pcStack_1c);
        if (iVar1 == 0) {
          *pcStack_1c = '\x01';
        }
        else if (iVar1 == -0x390) {
          iVar1 = -0x38e;
        }
      }
      if (iVar1 != 0) {
        init_lens_update_context_10537c34(pcStack_1c,0);
      }
    }
  }
  return iVar1;
}
