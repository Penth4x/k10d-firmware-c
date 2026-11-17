/* @k10d process_0x20_byte_records @ 0x1053975e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Iterates through a buffer of 0x20-byte records, dispatching based on the first byte and
 *   calling helpers to process data chunks.
 * summary:
 *   The function loops through a memory region containing 0x20-byte aligned records. It
 *   inspects the first byte of each record (checking for values like 0xe5, 0, or 0xf) and
 *   the 12th byte to determine the action. It calls helper functions
 *   (forward_lens_update_request, swap_lens_info_fields, match_lens_fw_info_fields) to
 *   process the record data, often writing to a destination buffer (param_3). It returns an
 *   error code or success (0) with updated offsets in param_3. The specific subsystem is
 *   not identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x105398a8) overlaps instruction at (ram,0x105398a6)
    */

int process_0x20_byte_records(void *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uintptr_t sp;
  int *piVar6;
  uint8_t auStack_2ec [8];
  byte abStack_2e4 [672];
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  int iStack_38;
  uint uStack_34;
  byte *pbStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  piVar6 = (int *)auStack_2ec;
  uVar3 = 1;
  if (param_2 != *(uint *)((int)param_1 + 0x28)) {
    uVar3 = 3;
  }
  uStack_2c = param_2;
  uVar5 = uVar3;
  do {
    uVar1 = uStack_2c;
    if (param_2 == 0) {
      if ((*(uint *)((int)param_1 + 0x48) & 3) == 0) {
        return -999;
      }
      pbStack_30 = abStack_2e4;
      iStack_38 = validate_and_dispatch_lens_write(param_1,uVar5,&pbStack_30,&uStack_34);
      uVar1 = compute_modulo_10544c28(uVar5 - 1,uStack_34);
    }
    else {
      *piVar6 = (int)&uStack_34;
      piVar6[1] = (int)&uStack_2c;
      iStack_38 = write_block_with_offset_check(param_1,uVar1,uVar3,(int *)&pbStack_30,(uint32_t *)*piVar6,
                               (uint *)piVar6[1]);
      for (; uStack_34 < uVar3; uVar3 = uVar3 - uStack_34) {
      }
      uVar1 = uVar3 - 1;
    }
    if (iStack_38 != 0) {
      return iStack_38;
    }
    if (0x10000 < uVar5) {
      return -0x38f;
    }
    pbStack_30 = pbStack_30 + uVar1 * 0x20;
    uVar1 = uStack_34 - uVar1;
LAB_10539838:
    do {
      if (*pbStack_30 != 0xe5) {
        if (*pbStack_30 == 0) {
          return -2;
        }
        if (pbStack_30[0xb] == 0xf) {
          if ((*pbStack_30 & 0x40) == 0) {
            uVar5 = uVar5 + 1;
            uVar3 = uVar3 + 1;
            if (uVar1 < 2) break;
            uVar1 = uVar1 - 1;
            pbStack_30 = pbStack_30 + 0x20;
            goto LAB_10539838;
          }
          uVar4 = (*pbStack_30 & 0xffffffbf) + 1;
          if (0x15 < uVar4) {
            uVar5 = uVar5 + 1;
            if (uVar1 < 2) {
              uVar3 = uVar3 + 1;
              break;
            }
            uVar3 = uVar3 + 1;
            uVar1 = uVar1 - 1;
            pbStack_30 = pbStack_30 + 0x20;
            goto LAB_10539838;
          }
          if (uVar1 < uVar4) {
            uStack_44 = uStack_2c;
            uStack_40 = uVar3;
            uStack_3c = uVar4;
            iStack_38 = dispatch_param2_command((int)param_1,(int *)&uStack_44,abStack_2e4);
            if (iStack_38 != 0) {
              return iStack_38;
            }
            iVar2 = validate_block_sequence(abStack_2e4,uVar4,&uStack_28);
            if (iVar2 != 0) {
              uVar5 = uVar5 + uStack_28;
              uVar3 = uVar3 + uStack_28;
              break;
            }
            iVar2 = forward_lens_update_request(abStack_2e4,uVar4,param_3);
            if (iVar2 == -1) {
              uVar5 = uVar5 + uVar4;
              uVar3 = uVar3 + uVar4;
              break;
            }
            swap_lens_info_fields(abStack_2e4,uVar4,param_3);
          }
          else {
            iStack_38 = validate_block_sequence(pbStack_30,uVar4,&uStack_28);
            if (iStack_38 != 0) {
              uVar5 = uVar5 + uStack_28;
              uVar3 = uVar3 + uStack_28;
              if (uVar1 <= uStack_28) break;
              uVar1 = uVar1 - uStack_28;
              pbStack_30 = pbStack_30 + uStack_28 * 0x20;
              goto LAB_10539838;
            }
            iVar2 = forward_lens_update_request(pbStack_30,uVar4,param_3);
            if (iVar2 == -1) {
              uVar5 = uVar5 + uVar4;
              uVar3 = uVar3 + uVar4;
              if (uVar1 <= uVar4) break;
              uVar1 = uVar1 - uVar4;
              pbStack_30 = pbStack_30 + uVar4 * 0x20;
              goto LAB_10539838;
            }
            swap_lens_info_fields(pbStack_30,uVar4,param_3);
          }
        }
        else {
          if ((param_3[8] == 0x10) || ((pbStack_30[0xb] & 8) != 0)) {
            uVar5 = uVar5 + 1;
            if (uVar1 < 2) {
              uVar3 = uVar3 + 1;
              break;
            }
            uVar3 = uVar3 + 1;
            uVar1 = uVar1 - 1;
            pbStack_30 = pbStack_30 + 0x20;
            goto LAB_10539838;
          }
          uVar4 = 1;
          iVar2 = match_lens_fw_info_fields(param_3,pbStack_30,1);
          if (iVar2 == -1) {
            uVar5 = uVar5 + 1;
            uVar3 = uVar3 + 1;
            if (uVar1 < 2) break;
            uVar1 = uVar1 - 1;
            pbStack_30 = pbStack_30 + 0x20;
            goto LAB_10539838;
          }
          swap_lens_info_fields(pbStack_30,1,param_3);
        }
        *param_3 = param_2;
        param_3[1] = uVar5;
        param_3[2] = uVar4;
        return 0;
      }
      uVar5 = uVar5 + 1;
      uVar3 = uVar3 + 1;
      uVar1 = uVar1 - 1;
      pbStack_30 = pbStack_30 + 0x20;
    } while (uVar1 != 0);
  } while( true );
}
