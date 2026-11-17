/* @k10d dispatch_update_with_fallback @ 0x105374e2
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Dispatches an update operation via a primary helper, falling back to two sequential
 *   helpers if the primary path is not taken.
 * summary:
 *   The function reads a byteswapped 32-bit value from param_2 and checks a state field in
 *   param_1. It calls transmit_data_block_with_retry first; if that returns 0 and param_3
 *   matches a field in param_1, it updates that field. Otherwise, it calls
 *   fetch_and_verify_buffer_entry and write_matching_entry_field sequentially, returning
 *   early on error. Finally, it calls replace_id_in_linked_lists,
 *   update_lens_fw_entry_value, and potentially lens_fw_update_step_1053db22. The specific
 *   subsystem is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_update_with_fallback(void *param_1,int param_2,int param_3,uint32_t *param_4)

{
  int iVar1;
  int extraout_r4;
  uint uVar2;
  
  uVar2 = ((int)(uint)*(ushort *)(param_2 + 0x34) >> 8 | (*(ushort *)(param_2 + 0x34) & 0xff) << 8)
          << 0x10 | (*(ushort *)(param_2 + 0x3a) & 0xff) << 8 |
                    (int)(uint)*(ushort *)(param_2 + 0x3a) >> 8;
  if ((*(int *)((int)param_1 + 0x48) == 4) && (uVar2 == 0)) {
    uVar2 = *(uint *)((int)param_1 + 0x28);
  }
  iVar1 = transmit_data_block_with_retry(param_1,param_2,param_3,param_4);
  if (iVar1 == 0) {
    if (param_3 == *(int *)((int)param_1 + 0x28)) {
      *(uint32_t *)((int)param_1 + 0x28) = *param_4;
    }
    else {
      iVar1 = fetch_and_verify_buffer_entry(param_1,uVar2,param_3,param_4);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = write_matching_entry_field(param_1,uVar2,param_3,*param_4);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    replace_id_in_linked_lists(param_1,param_3,*param_4);
    iVar1 = update_lens_fw_entry_value(param_1,param_3,*param_4);
    if (iVar1 == 0) {
      lens_fw_update_step_1053db22((int)param_1);
      iVar1 = extraout_r4;
    }
  }
  return iVar1;
}
