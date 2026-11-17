/* @k10d dispatch_lens_fw_update_step_1053d2bc @ 0x1053d2bc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Dispatches a lens firmware update operation to a handler based on the current state
 *   stored in the context object.
 * summary:
 *   Checks the state field at offset 0x48 of the context object (param_1). If the state is
 *   1, 2, or 4, it calls the corresponding handler (transfer_buffer_in_chunks_1053b78e,
 *   loop_transfer_data_chunks, or transfer_data_in_chunks_1053cb50) passing the context, a
 *   pointer from offset 0x68, and the input parameters. If param_3 is zero, it directly
 *   sets *param_4 to param_2 and returns 0. Returns -0x321 for unknown states. The module
 *   context indicates this is part of the lens firmware update process.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_lens_fw_update_step_1053d2bc(int param_1,uint param_2,int param_3,uint *param_4)

{
  int iVar1;
  uint *puVar2;
  
  if (param_3 == 0) {
    *param_4 = param_2;
    iVar1 = 0;
  }
  else {
    puVar2 = *(uint **)(param_1 + 0x68);
    iVar1 = *(int *)(param_1 + 0x48);
    if (iVar1 == 4) {
      iVar1 = transfer_data_in_chunks_1053cb50(param_1,puVar2,param_2,param_3,param_4);
    }
    else if (iVar1 == 2) {
      iVar1 = loop_transfer_data_chunks(param_1,puVar2,param_2,param_3,param_4);
    }
    else if (iVar1 == 1) {
      iVar1 = transfer_buffer_in_chunks_1053b78e(param_1,puVar2,param_2,param_3,param_4);
    }
    else {
      iVar1 = -0x321;
    }
  }
  return iVar1;
}
