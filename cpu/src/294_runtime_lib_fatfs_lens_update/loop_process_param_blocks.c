/* @k10d loop_process_param_blocks @ 0x1053d1a6
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Iterates through blocks defined by a count at offset 0x4c, calling three helpers per
 *   iteration until the counter drops below 2 or a helper fails.
 * summary:
 *   The function enters a do-while loop that repeatedly calls
 *   dispatch_lens_fw_update_step_1053d2bc with a counter, then clear_lens_update_entry, and
 *   finally dispatch_lens_update_step. It exits early if any helper returns non-zero or if
 *   the counter (uStack_c) drops below 2. The loop continues as long as the counter is less
 *   than or equal to the value stored at offset 0x4c in the parameter structure. The
 *   specific role of the helpers and the parameter structure is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1053d1e6) overlaps instruction at (ram,0x1053d1e4)
    */

int loop_process_param_blocks(void *param_1,uint param_2)

{
  int iVar1;
  uintptr_t sp;
  uint uStack_c;
  
  do {
    iVar1 = dispatch_lens_fw_update_step_1053d2bc((int)param_1,param_2,1,&uStack_c);
    if (iVar1 != 0) {
      return iVar1;
    }
    clear_lens_update_entry(param_1,param_2);
    iVar1 = dispatch_lens_update_step((int)param_1,param_2,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (uStack_c < 2) {
      return 0;
    }
    param_2 = uStack_c;
  } while (uStack_c <= *(uint *)((int)param_1 + 0x4c));
  return 0;
}
