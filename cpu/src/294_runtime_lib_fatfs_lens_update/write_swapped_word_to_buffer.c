/* @k10d write_swapped_word_to_buffer @ 0x1053bfe0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int write_swapped_word_to_buffer(void *param_1,uint *param_2,uint param_3,uint param_4)

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
    *(ushort *)(uVar2 * 2 + iVar3) =
         (ushort)((param_4 & 0xffff) << 8) | (ushort)((param_4 & 0xffff) >> 8);
    iVar3 = 0;
  }
  return iVar3;
}
