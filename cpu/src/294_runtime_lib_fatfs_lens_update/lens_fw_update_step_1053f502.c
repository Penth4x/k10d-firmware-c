/* @k10d lens_fw_update_step_1053f502 @ 0x1053f502
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Validates a lens firmware update parameter and triggers the next update stage via a
 *   helper call.
 * summary:
 *   Checks if param_1 is NULL, returning -22 (EINVAL) if so. Otherwise calls
 *   allocate_lens_update_slot to retrieve a state value into a stack variable. If that call
 *   succeeds (returns 0), it calls copy_null_terminated_string with param_1 and an
 *   incremented value derived from the state, then returns 0. The module context indicates
 *   this is part of the lens firmware update process.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int lens_fw_update_step_1053f502(void *param_1)

{
  int iVar1;
  uintptr_t sp;
  int iStack_c;
  
  if (param_1 == (void *)0x0) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = allocate_lens_update_slot(&iStack_c);
    if (iVar1 == 0) {
      copy_null_terminated_string(param_1,(void *)(*(int *)(iStack_c + 8) + 1));
      iVar1 = 0;
    }
  }
  return iVar1;
}
