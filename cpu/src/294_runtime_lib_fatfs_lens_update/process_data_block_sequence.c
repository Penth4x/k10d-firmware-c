/* @k10d process_data_block_sequence @ 0x1053ca0e
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Iterates through a sequence of data blocks, processing each via a helper and validating
 *   a final extracted value against a range.
 * summary:
 *   The function loops through blocks defined by parameters, calling
 *   allocate_lens_fw_segment for each. It accumulates a counter and extracts a value
 *   (unaff_r9) from the data stream. Finally, it checks if this value is within a range
 *   specified in the object at param_1 (offsets 0x4c-0x50), returning an error code if
 *   invalid or storing the result in param_4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int process_data_block_sequence(void *param_1,uint *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint caller_r9;
  uint uVar6;
  uintptr_t sp;
  int *piVar7;
  uint8_t auStack_3c [4];
  uint uStack_38;
  uint uStack_34;
  int local_2c;
  
  piVar7 = (int *)auStack_3c;
  uVar6 = *(uint *)((int)param_1 + 0xc);
  uStack_38 = *param_4;
  uStack_34 = unsigned_divide(uStack_38,param_2[5]);
  uStack_34 = *(int *)((int)param_1 + 0x30) + uStack_34;
  uVar2 = compute_modulo_10544c28(uStack_38,param_2[5]);
  uVar2 = uVar2 * 4;
  uVar3 = unsigned_divide(uVar2 + param_3 * 4,uVar6);
  uVar6 = compute_modulo_10544c28(uVar2 + param_3 * 4,uVar6);
  if (uVar6 != 0) {
    uVar3 = uVar3 + 1;
  }
  uVar6 = 0;
  do {
    uVar1 = uStack_34;
    *piVar7 = (int)&local_2c;
    iVar4 = allocate_lens_fw_segment(param_1,param_2,uVar1,uVar3,(int *)*piVar7);
    if (iVar4 != 0) {
      return iVar4;
    }
    iVar4 = *(int *)(local_2c + 8);
    for (iVar5 = *(int *)(local_2c + 4) * param_2[5] - (uVar2 >> 2); iVar5 != 0; iVar5 = iVar5 + -1)
    {
      caller_r9 = *(uint *)(uVar2 + iVar4) >> 0x18 | (*(uint *)(uVar2 + iVar4) & 0xff0000) >> 8 |
                 (*(uint *)(uVar2 + iVar4) & 0xff00) << 8 | (*(uint *)(uVar2 + iVar4) & 0xf) << 0x18
      ;
      uVar6 = uVar6 + 1;
      if ((uStack_38 + 1 != caller_r9) || (param_3 <= uVar6)) goto LAB_1053cb1a;
      uStack_38 = caller_r9;
      uVar2 = uVar2 + 4;
    }
    uVar3 = uVar3 - *(int *)(local_2c + 4);
    uVar2 = 0;
    uStack_34 = *(int *)(local_2c + 4) + uStack_34;
  } while (uVar3 != 0);
LAB_1053cb1a:
  if ((caller_r9 < 2) ||
     ((*(uint *)((int)param_1 + 0x4c) < caller_r9 && (caller_r9 <= *(uint *)((int)param_1 + 0x50)))))
  {
    iVar4 = -0x390;
  }
  else {
    param_4[1] = uVar6;
    param_4[2] = caller_r9;
    iVar4 = 0;
  }
  return iVar4;
}
