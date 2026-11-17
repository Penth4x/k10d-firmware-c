/* @k10d dispatch_lens_fw_update @ 0x1053d24c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Routes a lens firmware update operation to a handler based on the state stored at
 *   offset 0x48.
 * summary:
 *   Checks if param_2 is zero and returns -999 if so. Otherwise, reads a state integer from
 *   param_1+0x48 and a pointer from param_1+0x68. It dispatches to one of three callees
 *   (process_data_block_sequence, validate_segmented_data_table, or
 *   decode_packed_nibble_value) depending on whether the state is 4, 2, or 1, respectively.
 *   Returns -0x321 if the state is unrecognized.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_lens_fw_update(int param_1,int param_2,void *param_3)

{
  int iVar1;
  uint *puVar2;
  
  if (param_2 == 0) {
    iVar1 = -999;
  }
  else {
    puVar2 = *(uint **)(param_1 + 0x68);
    iVar1 = *(int *)(param_1 + 0x48);
    if (iVar1 == 4) {
      iVar1 = process_data_block_sequence((void *)param_1,puVar2,param_2,param_3);
    }
    else if (iVar1 == 2) {
      iVar1 = validate_segmented_data_table((void *)param_1,puVar2,param_2,param_3);
    }
    else if (iVar1 == 1) {
      iVar1 = decode_packed_nibble_value(param_1,puVar2,param_2,param_3);
    }
    else {
      iVar1 = -0x321;
    }
  }
  return iVar1;
}
