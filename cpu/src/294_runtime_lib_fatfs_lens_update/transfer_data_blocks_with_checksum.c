/* @k10d transfer_data_blocks_with_checksum @ 0x10543f10
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Iterates over data blocks, computes checksums, and transfers them via a communication
 *   channel with error recovery.
 * summary:
 *   Allocates a buffer via alloc_pool2_block and loops through param_3 blocks. For each, it
 *   calculates a checksum (unsigned_divide/10544c28), updates state via
 *   allocate_lens_fw_buffer_1053d612/dispatch_lens_fw_update_step_1053d1f0, and transfers
 *   data using compute_indexed_lookup_value. On failure, it attempts recovery by resetting
 *   state (dispatch_lens_fw_update_step_1053d138) and frees the buffer
 *   (release_heap_block_1047f9bc).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int transfer_data_blocks_with_checksum(int param_1,uint param_2,uint param_3,void *param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uintptr_t sp;
  int aiStack_68 [2];
  uint8_t auStack_60 [4];
  int iStack_5c;
  void *pvStack_58;
  uint uStack_54;
  int iStack_50;
  uint auStack_4c [4];
  int iStack_3c;
  uint32_t uStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  auStack_4c[1] = 1;
  aiStack_68[1] = 1;
  iStack_34 = 0;
  iStack_2c = *(int *)(param_1 + 0x10);
  uVar2 = *(uint *)((int)param_4 + 0x10);
  auStack_4c[0] = param_2;
  pvStack_58 = (void *)alloc_pool2_block(uVar2);
  iVar1 = 0;
  if (pvStack_58 == (void *)0x0) {
    iVar1 = -0xc;
  }
  else {
    uVar3 = 0;
    iStack_50 = 0;
    uStack_54 = uVar2;
    uStack_28 = uVar2;
    while (uVar2 = uStack_28, uVar3 < param_3) {
      uStack_30 = unsigned_divide(param_3 - uVar3,uStack_28);
      uVar2 = compute_modulo_10544c28(param_3 - uVar3,uVar2);
      if (uVar2 != 0) {
        uStack_30 = uStack_30 + 1;
      }
      iVar1 = allocate_lens_fw_buffer_1053d612(param_4,uStack_30,auStack_4c + 3);
      if (iVar1 < 0) break;
      uStack_38 = *(uint32_t *)((int)param_4 + 0x54);
      iVar1 = dispatch_lens_fw_update_step_1053d1f0((int)param_4,auStack_4c + 3);
      if (iVar1 < 0) break;
      if (uVar3 == 0) {
        *param_5 = auStack_4c[3];
      }
      if ((iStack_34 != 0) &&
         (iVar1 = dispatch_lens_update_step((int)param_4,iStack_34,auStack_4c[3]), iVar1 != 0)) break;
      aiStack_68[0] = auStack_4c[3];
      for (iVar4 = iStack_3c; 0 < iVar4; iVar4 = iVar4 + -1) {
        if ((auStack_4c[0] < 2) || (*(uint *)(param_1 + 0x4c) < auStack_4c[0])) {
          iVar1 = -0x390;
          goto code_r0x1054410e;
        }
        auStack_4c[2] = 0;
        iVar1 = (*(code *)0x10542f3a/*ROM*/)(param_1,auStack_4c,&pvStack_58,auStack_60);
        if (iVar1 != 0) {
          if (iVar1 != -0x1f5) goto code_r0x1054410e;
          if (iStack_5c == 0) {
            iVar1 = -0x390;
            goto code_r0x1054410e;
          }
          fill_byte_array((void *)((int)pvStack_58 + iStack_5c),0,uStack_28 - iStack_5c);
        }
        iVar1 = compute_indexed_lookup_value((int)param_4,(int)pvStack_58,aiStack_68,&uStack_24);
        if (iVar1 != 0) {
          if ((iVar1 != -5) || (iVar1 = merge_lens_fw_block_entry(param_4,(int *)(auStack_4c + 3)), iVar1 != 0))
          goto code_r0x1054410e;
          iStack_3c = iStack_3c - iVar4;
          iVar1 = dispatch_lens_fw_update_step_1053d138(param_4,aiStack_68[0],*(uint32_t *)((int)param_4 + 0x54),0);
          if (iVar1 < 0) goto code_r0x1054410e;
          break;
        }
        aiStack_68[0] = aiStack_68[0] + 1;
        uVar3 = uVar3 + iStack_5c;
        iStack_50 = iStack_50 + iStack_5c;
        if (iStack_50 == iStack_2c) {
          iStack_50 = 0;
          auStack_4c[0] = auStack_4c[2];
        }
      }
      if (iStack_3c != 0) {
        iStack_34 = auStack_4c[3] + iStack_3c + -1;
      }
    }
code_r0x1054410e:
    release_heap_block_1047f9bc(pvStack_58);
    if ((iVar1 != 0) && (*param_5 != 0)) {
      dispatch_lens_fw_update_step_1053d138(param_4,*param_5,*(uint32_t *)((int)param_4 + 0x54),0);
      *param_5 = 0;
    }
  }
  return iVar1;
}
