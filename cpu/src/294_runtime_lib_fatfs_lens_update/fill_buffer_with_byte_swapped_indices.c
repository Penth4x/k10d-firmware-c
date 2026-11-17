/* @k10d fill_buffer_with_byte_swapped_indices @ 0x1053c89e
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Fills a buffer with byte-swapped index values, advancing through it in chunks via a
 *   helper call.
 * summary:
 *   The function computes a destination offset using unsigned_divide and
 *   compute_modulo_10544c28, then loops calling allocate_lens_fw_segment to obtain chunk
 *   sizes and offsets. For each chunk, it writes a sequence of byte-swapped (endianness-
 *   reversed) integer values into the buffer at the computed offset. It updates a counter
 *   in param_2[1] and returns an error code if allocate_lens_fw_segment fails. The specific
 *   data being written (indices vs firmware) is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int fill_buffer_with_byte_swapped_indices(void *param_1,uint *param_2,uint *param_3)

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
  uStack_34 = *(uint *)((int)param_1 + 0xc);
  uStack_30 = (*param_3 + param_3[1]) - 1;
  uVar5 = *param_3;
  uStack_28 = unsigned_divide(uVar5,param_2[5]);
  uStack_28 = *(int *)((int)param_1 + 0x30) + uStack_28;
  uVar2 = compute_modulo_10544c28(uVar5,param_2[5]);
  uVar2 = uVar2 * 4;
  uStack_38 = unsigned_divide(uVar2 + param_3[1] * 4,uStack_34);
  uVar3 = compute_modulo_10544c28(uVar2 + param_3[1] * 4,uStack_34);
  uVar3 = uStack_38 + (uVar3 != 0);
LAB_1053c9d0:
  do {
    uVar1 = uStack_28;
    if (uVar3 == 0) {
      *(uint *)(uVar2 + iStack_2c) =
           (param_3[2] & 0xff0000) >> 8 | param_3[2] >> 0x18 | (param_3[2] & 0xff00) << 8 |
           param_3[2] << 0x18;
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
    uVar2 = uVar2 << 2;
    if (*(int *)(local_24 + 0xc) != 1) {
      *(uint32_t *)(local_24 + 0xc) = 1;
      param_2[1] = param_2[1] - *(int *)(local_24 + 4);
    }
    do {
      if (uStack_30 <= uVar5) goto LAB_1053c9d0;
      uVar5 = uVar5 + 1;
      *(uint *)(uVar2 + iStack_2c) =
           (uVar5 & 0xff0000) >> 8 | uVar5 >> 0x18 | (uVar5 & 0xff00) << 8 | uVar5 * 0x1000000;
      uVar2 = uVar2 + 4;
    } while (uVar2 < *(int *)(local_24 + 4) * uStack_34);
    uVar2 = 0;
  } while( true );
}
