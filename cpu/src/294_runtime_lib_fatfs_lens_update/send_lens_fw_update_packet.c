/* @k10d send_lens_fw_update_packet @ 0x105362f6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Formats a lens firmware update message and dispatches it via a virtual send method.
 * summary:
 *   The function calls store_sysparam_entry to build a packet using data from the object at
 *   param_1 and a sub-object at param_1+8. It then nulls the sub-object pointer and invokes
 *   virtual slot 2 of the object at param_1+0xc, passing the constructed packet data. This
 *   fits the lens_firmware_update module context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void send_lens_fw_update_packet(int param_1)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_18;
  uint32_t uStack_14;
  
  store_sysparam_entry(&uStack_18,*(int *)(param_1 + 0x10),(uint)*(byte *)(*(int *)(param_1 + 8) + 0x14),
               *(uint *)(*(int *)(param_1 + 8) + 0x10));
  *(uint32_t *)(param_1 + 8) = 0;
  iVar1 = **(int **)(param_1 + 0xc);
  (((vtbl_entry*)(iVar1))[2].fn)
            ((int)*(int **)(param_1 + 0xc) + (int)((vtbl_entry*)(iVar1))[2].adj,uStack_18,uStack_14,0);
  return;
}
