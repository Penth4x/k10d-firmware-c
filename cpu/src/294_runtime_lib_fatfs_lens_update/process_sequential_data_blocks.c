/* @k10d process_sequential_data_blocks @ 0x1053bb28
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Iterates through a range of data blocks, performing a write operation on each and
 *   updating progress counters.
 * summary:
 *   The function uses unsigned_divide and compute_modulo_10544c28 to calculate offsets and
 *   addresses for blocks starting from param_3. It calls allocate_lens_fw_segment to
 *   process each block, updating counters in param_2 (specifically param_2[1] and
 *   param_2[6]) and a state field in param_1. The loop continues until the target block
 *   (param_4) is reached or the maximum block count (param_1+0x4c) is exceeded.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int process_sequential_data_blocks(void *param_1,uint *param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uintptr_t sp;
  int *piVar5;
  uint8_t auStack_3c [4];
  int iStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint *local_28;
  
  piVar5 = (int *)auStack_3c;
  iStack_38 = *(int *)((int)param_1 + 0xc);
  uVar1 = unsigned_divide(param_3,param_2[5]);
  iVar4 = *(int *)((int)param_1 + 0x30);
  uStack_30 = compute_modulo_10544c28(param_3,param_2[5]);
  uStack_30 = uStack_30 << 1;
  *piVar5 = (int)&local_28;
  iVar4 = allocate_lens_fw_segment(param_1,param_2,iVar4 + uVar1,1,(int *)*piVar5);
  if (iVar4 == 0) {
    uStack_34 = local_28[2];
    uVar1 = (int)(uint)*(ushort *)(uStack_30 + uStack_34) >> 8 |
            (*(ushort *)(uStack_30 + uStack_34) & 0xff) << 8;
    if ((uVar1 == 0) || (uVar1 == *(uint *)((int)param_1 + 0x50))) {
      iVar4 = 0;
    }
    else {
      if (local_28[3] != 1) {
        local_28[3] = 1;
        param_2[1] = param_2[1] - local_28[1];
      }
      *(ushort *)(uStack_30 + uStack_34) =
           (ushort)(param_5 >> 8) & 0xff | (ushort)((param_5 & 0xffff) << 8);
      if (param_5 == 0) {
        param_2[6] = param_2[6] + 1;
      }
      else if (param_5 == *(uint *)((int)param_1 + 0x50)) {
        *(int *)((int)param_1 + 0x74) = *(int *)((int)param_1 + 0x74) + 1;
      }
      while (((1 < uVar1 && (uVar1 <= *(uint *)((int)param_1 + 0x4c))) && (uVar1 != param_4))) {
        uVar2 = unsigned_divide(uVar1,param_2[5]);
        uVar2 = *(int *)((int)param_1 + 0x30) + uVar2;
        uVar3 = compute_modulo_10544c28(uVar1,param_2[5]);
        uVar3 = uVar3 << 1;
        uStack_30 = uVar3;
        uStack_2c = uVar2;
        if (*local_28 != uVar2) {
          *piVar5 = (int)&local_28;
          iVar4 = allocate_lens_fw_segment(param_1,param_2,uVar2,1,(int *)*piVar5);
          if (iVar4 != 0) {
            return iVar4;
          }
          uStack_34 = local_28[2];
        }
        iVar4 = 0;
        uVar2 = uVar1;
        while( true ) {
          iVar4 = iVar4 + 1;
          uVar1 = (int)(uint)*(ushort *)(uVar3 + uStack_34) >> 8 |
                  (*(ushort *)(uVar3 + uStack_34) & 0xff) << 8;
          uVar3 = uVar3 + 2;
          if ((uVar1 != uVar2 + 1) || (*(uint *)((int)param_1 + 0x50) < uVar1)) break;
          if ((uVar1 == param_4) || (uVar2 = uVar1, local_28[1] * iStack_38 <= uVar3)) break;
        }
        if (local_28[3] != 1) {
          local_28[3] = 1;
          param_2[1] = param_2[1] - local_28[1];
        }
        fill_byte_array((void *)(uStack_34 + uStack_30),0,iVar4 * 2);
        param_2[6] = param_2[6] + iVar4;
      }
      iVar4 = 0;
    }
  }
  return iVar4;
}
