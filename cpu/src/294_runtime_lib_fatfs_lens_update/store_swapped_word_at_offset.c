/* @k10d store_swapped_word_at_offset @ 0x1053cba4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Computes a destination offset and stores a byte-swapped 32-bit word at that location in
 *   a buffer.
 * summary:
 *   The function calls unsigned_divide and compute_modulo_10544c28 to derive an index and
 *   offset. It invokes allocate_lens_fw_segment with a pointer to a local structure, likely
 *   to retrieve or update buffer metadata. If successful, it byte-swaps param_4 and writes
 *   it to the calculated address, adjusting a counter in param_2 if a flag in the local
 *   structure is not set.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int store_swapped_word_at_offset(void *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uintptr_t sp;
  int *piVar4;
  uint8_t auStack_2c [4];
  uint uStack_28;
  int local_24;
  
  piVar4 = (int *)auStack_2c;
  uStack_28 = param_2[5];
  uVar1 = unsigned_divide(param_3,uStack_28);
  iVar3 = *(int *)((int)param_1 + 0x30);
  uVar2 = compute_modulo_10544c28(param_3,uStack_28);
  *piVar4 = (int)&local_24;
  iVar3 = allocate_lens_fw_segment(param_1,param_2,iVar3 + uVar1,1,(int *)*piVar4);
  if (iVar3 == 0) {
    iVar3 = *(int *)(local_24 + 8);
    if (*(int *)(local_24 + 0xc) != 1) {
      *(uint32_t *)(local_24 + 0xc) = 1;
      param_2[1] = param_2[1] - *(int *)(local_24 + 4);
    }
    *(uint *)(uVar2 * 4 + iVar3) =
         (param_4 & 0xff0000) >> 8 | param_4 >> 0x18 | (param_4 & 0xff00) << 8 | param_4 << 0x18;
    iVar3 = 0;
  }
  return iVar3;
}
