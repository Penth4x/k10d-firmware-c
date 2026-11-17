/* @k10d dispatch_lens_fw_update_step_1053d1f0 @ 0x1053d1f0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Routes a lens firmware update operation to a handler based on a state field in the
 *   context object.
 * summary:
 *   Reads a state integer from offset 0x48 and a pointer from offset 0x68 of the context
 *   object (param_1). Depending on the state value (1, 2, or 4), it calls one of three
 *   specific handler functions, passing the context, the pointer, and param_2. Returns
 *   -0x321 if the state is not one of the expected values. The module context indicates
 *   this is part of the lens CPU firmware update process.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_lens_fw_update_step_1053d1f0(int param_1,void *param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  puVar2 = *(uint **)(param_1 + 0x68);
  if (iVar1 == 4) {
    iVar1 = fill_buffer_with_byte_swapped_indices((void *)param_1,puVar2,param_2);
  }
  else if (iVar1 == 2) {
    iVar1 = transmit_data_block_with_progress((void *)param_1,puVar2,param_2);
  }
  else if (iVar1 == 1) {
    iVar1 = pack_lens_fw_crc_table(param_1,puVar2,param_2);
  }
  else {
    iVar1 = -0x321;
  }
  return iVar1;
}
