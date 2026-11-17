/* @k10d process_lens_data_transfer @ 0x10538d1a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Executes a data transfer loop with retry logic and finalizes the operation based on
 *   status flags.
 * summary:
 *   The function initiates a transfer sequence by checking state via
 *   scan_record_array_for_marker and FUN_1053dc22. If ready, it enters a loop calling
 *   allocate_lens_fw_buffer_1053d612 and write_via_virtual_interface to move data, handling
 *   specific error codes (-6, -0x1c) and retries via merge_lens_fw_block_entry. It compares
 *   a value at offset 0x28 before and after the loop; if changed, it byte-swaps the value
 *   and sends a command via write_two_buffer_blocks. Finally, it calls
 *   lens_fw_update_step_1053db22 and potentially free_pending_update_nodes to complete the
 *   process.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int process_lens_data_transfer(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int extraout_r4;
  uint uVar4;
  int iVar5;
  uintptr_t sp;
  uint32_t *puVar6;
  uint8_t auStack_40 [8];
  uint8_t auStack_38 [12];
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  int aiStack_20 [2];
  int iStack_18;
  int iStack_10;
  uint uStack_c;
  
  puVar6 = (uint32_t *)auStack_40;
  iStack_10 = 1;
  iVar2 = scan_record_array_for_marker(param_1,&uStack_2c,auStack_38);
  if (iVar2 != 0) {
    if (iVar2 == -6) {
      return -6;
    }
    if (iVar2 == -999) {
      return -999;
    }
    iStack_10 = 0;
  }
  iVar2 = (*(code *)0x1053dc22/*ROM*/)(param_1);
  if (iVar2 == 0) {
    clear_lens_fw_update_info((int)param_1);
    if ((*(uint *)((int)param_1 + 0x48) & 3) == 0) {
      if (*(uint *)((int)param_1 + 0x48) == 4) {
        iStack_18 = *(int *)((int)param_1 + 0x28);
        while( true ) {
          iVar2 = allocate_lens_fw_buffer_1053d612(param_1,1,aiStack_20);
          if (iVar2 != 0) {
            if (iVar2 != -0x1c) {
              return iVar2;
            }
            lens_fw_update_step_1053db22((int)param_1);
            return -0x388;
          }
          iVar2 = dispatch_lens_update_step((int)param_1,aiStack_20[0],*(int *)((int)param_1 + 0x54));
          if (iVar2 != 0) {
            return iVar2;
          }
          *(int *)((int)param_1 + 0x28) = aiStack_20[0];
          iVar1 = *(int *)((int)param_1 + 0x14);
          iVar2 = aiStack_20[0] + -2;
          iVar5 = *(int *)((int)param_1 + 0x38);
          uVar3 = unsigned_divide(*(uint *)((int)param_1 + 0x10),*(uint *)((int)param_1 + 0xc));
          iVar2 = write_via_virtual_interface(param_1,iVar5 + iVar2 * iVar1,uVar3);
          if (iVar2 == 0) break;
          if (iVar2 == -6) {
            return -6;
          }
          iVar2 = merge_lens_fw_block_entry(param_1,aiStack_20);
          if ((iVar2 == 0) &&
             (iVar2 = dispatch_lens_update_step((int)param_1,aiStack_20[0],*(int *)((int)param_1 + 0x50)),
             iVar2 != 0)) {
            return iVar2;
          }
        }
        if (iStack_18 != *(int *)((int)param_1 + 0x28)) {
          uStack_c = (*(uint *)((int)param_1 + 0x28) & 0xff0000) >> 8 |
                     *(uint *)((int)param_1 + 0x28) >> 0x18 |
                     (*(uint *)((int)param_1 + 0x28) & 0xff00) << 8 |
                     *(int *)((int)param_1 + 0x28) << 0x18;
          *puVar6 = 4;
          puVar6[1] = 0x2c;
          iVar2 = write_two_buffer_blocks((int)param_1,0,0,&uStack_c,*puVar6,puVar6[1]);
          if (iVar2 != 0) {
            return iVar2;
          }
        }
      }
    }
    else {
      iVar2 = *(int *)((int)param_1 + 0x34);
      uVar4 = *(int *)((int)param_1 + 0x1c) << 5;
      uVar3 = unsigned_divide(uVar4,*(uint *)((int)param_1 + 0xc));
      uVar4 = compute_modulo_10544c28(uVar4,*(uint *)((int)param_1 + 0xc));
      if (uVar4 != 0) {
        uVar3 = uVar3 + 1;
      }
      iVar2 = write_via_virtual_interface(param_1,iVar2,uVar3);
      if (iVar2 != 0) {
        if (iVar2 == -6) {
          return -6;
        }
        return -0x388;
      }
    }
    lens_fw_update_step_1053db22((int)param_1);
    iVar2 = extraout_r4;
    if (extraout_r4 == 0) {
      if (iStack_10 == 1) {
        uStack_2c = *(uint32_t *)((int)param_1 + 0x28);
        uStack_28 = 1;
        uStack_24 = 1;
        iVar2 = (*(code *)0x1053a6e2/*ROM*/)(param_1,&uStack_2c,auStack_38);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      free_pending_update_nodes(param_1);
      iVar2 = 0;
    }
  }
  return iVar2;
}
