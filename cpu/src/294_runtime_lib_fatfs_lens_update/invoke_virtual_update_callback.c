/* @k10d invoke_virtual_update_callback @ 0x1053621c
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object stored in the struct, passing data prepared by a
 *   helper function.
 * summary:
 *   The function retrieves an object pointer from param_1+0xc and calls its virtual method
 *   at offset 0xc (slot 1). Before the call, it invokes copy_sysparam_record with a pointer
 *   from param_1+0x10 to populate stack variables, which are then passed as arguments to
 *   the virtual call. The module context suggests this is part of the lens firmware update
 *   process, likely triggering a specific update step or status notification.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_update_callback(int param_1)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_18;
  uint32_t uStack_14;
  
  copy_sysparam_record(&uStack_18,*(uint32_t **)(param_1 + 0x10));
  iVar1 = **(int **)(param_1 + 0xc);
  (((vtbl_entry*)(iVar1))[1].fn)
            ((int)*(int **)(param_1 + 0xc) + (int)*(short *)(iVar1 + 8),uStack_18,uStack_14,0);
  return;
}
