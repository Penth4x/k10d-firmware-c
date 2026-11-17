/* @k10d dispatch_lens_fw_update_step_10541460 @ 0x10541460
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Validates a lens firmware update state and dispatches to the next step handler if the
 *   state is 2.
 * summary:
 *   Calls an unknown helper at 0x10538c70 to retrieve a state pointer. If the helper
 *   succeeds and the state field at offset 8 is 2, it calls start_update_if_flag_clear with
 *   the value at offset 0xc. Otherwise, it returns -9. This fits the lens_firmware_update
 *   module context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_lens_fw_update_step_10541460(uint32_t param_1)

{
  int iVar1;
  uintptr_t sp;
  int *piStack_c;
  
  iVar1 = (*(code *)0x10538c70/*ROM*/)(param_1,&piStack_c);
  if (iVar1 == 0) {
    if (*(int *)(*piStack_c + 8) == 2) {
      iVar1 = start_update_if_flag_clear((void *)(*(uint32_t *)(*piStack_c + 0xc)));
    }
    else {
      iVar1 = -9;
    }
  }
  return iVar1;
}
