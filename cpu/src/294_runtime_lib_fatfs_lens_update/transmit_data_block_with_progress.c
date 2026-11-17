/* @k10d transmit_data_block_with_progress @ 0x1053bd1e
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Transmits a data block in chunks, updating a progress counter and byte-swapping values
 *   into a buffer.
 * summary:
 *   The function iterates over a data structure (param_3), calling allocate_lens_fw_segment
 *   to process chunks. It uses unsigned_divide and compute_modulo_10544c28 to calculate
 *   offsets and sizes. It writes 16-bit values with byte-swapping into a buffer at an
 *   offset determined by the callee allocate_lens_fw_segment. The loop continues until the
 *   entire block is processed or an error occurs.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int transmit_data_block_with_progress(void *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uintptr_t sp;
  int *piVar6;
  uint8_t auStack_3c [4];
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  int iStack_2c;
  uint uStack_28;
  int local_24;
  
  piVar6 = (int *)auStack_3c;
  uStack_30 = *(uint *)((int)param_1 + 0xc);
  uStack_34 = (*param_3 + param_3[1]) - 1;
  uVar5 = *param_3;
  uStack_28 = unsigned_divide(uVar5,param_2[5]);
  uStack_28 = *(int *)((int)param_1 + 0x30) + uStack_28;
  uVar2 = compute_modulo_10544c28(uVar5,param_2[5]);
  uVar2 = uVar2 * 2;
  uStack_38 = unsigned_divide(uVar2 + param_3[1] * 2,uStack_30);
  uVar3 = compute_modulo_10544c28(uVar2 + param_3[1] * 2,uStack_30);
  uVar3 = uStack_38 + (uVar3 != 0);
LAB_1053be3e:
  do {
    uVar1 = uStack_28;
    if (uVar3 == 0) {
      *(ushort *)(uVar2 + iStack_2c) =
           (ushort)(param_3[2] >> 8) & 0xff | (ushort)((param_3[2] & 0xffff) << 8);
      return 0;
    }
    *piVar6 = (int)&local_24;
    iVar4 = allocate_lens_fw_segment(param_1,param_2,uVar1,uVar3,(int *)*piVar6);
    if (iVar4 != 0) {
      return iVar4;
    }
    uStack_28 = *(int *)(local_24 + 4) + uStack_28;
    uVar3 = uVar3 - *(int *)(local_24 + 4);
    uVar2 = compute_modulo_10544c28(uVar5,param_2[5]);
    iStack_2c = *(int *)(local_24 + 8);
    uVar2 = uVar2 << 1;
    if (*(int *)(local_24 + 0xc) != 1) {
      *(uint32_t *)(local_24 + 0xc) = 1;
      param_2[1] = param_2[1] - *(int *)(local_24 + 4);
    }
    do {
      if (uStack_34 <= uVar5) goto LAB_1053be3e;
      uVar5 = uVar5 + 1;
      *(ushort *)(uVar2 + iStack_2c) =
           (ushort)((uVar5 & 0xffff) << 8) | (ushort)((uVar5 & 0xffff) >> 8);
      uVar2 = uVar2 + 2;
    } while (uVar2 < *(int *)(local_24 + 4) * uStack_30);
    uVar2 = 0;
  } while( true );
}
