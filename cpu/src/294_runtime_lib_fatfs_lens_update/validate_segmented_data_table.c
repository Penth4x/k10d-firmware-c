/* @k10d validate_segmented_data_table @ 0x1053be68
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Iterates a segment table, byte-swaps values, and validates them against a range stored
 *   in param_1.
 * summary:
 *   The function reads a base offset from param_1+0x30 and uses
 *   unsigned_divide/compute_modulo_10544c28 to compute indices into a buffer. It loops
 *   through segments defined by allocate_lens_fw_segment, performing byte-swapping on
 *   16-bit values and checking if they fall within a range defined by param_1+0x4c and
 *   param_1+0x50. On success, it writes the count and last value to param_4[1] and
 *   param_4[2]; otherwise, it returns error -0x390. The specific role (e.g., firmware
 *   header vs. generic table) is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int validate_segmented_data_table(void *param_1,uint *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint caller_r11;
  uintptr_t sp;
  int *piVar6;
  uint8_t auStack_3c [4];
  uint uStack_38;
  uint uStack_34;
  int local_2c;
  
  piVar6 = (int *)auStack_3c;
  uVar5 = *(uint *)((int)param_1 + 0xc);
  uStack_38 = *param_4;
  uStack_34 = unsigned_divide(uStack_38,param_2[5]);
  uStack_34 = *(int *)((int)param_1 + 0x30) + uStack_34;
  uVar2 = compute_modulo_10544c28(uStack_38,param_2[5]);
  uVar2 = uVar2 * 2;
  uVar3 = unsigned_divide(uVar2 + param_3 * 2,uVar5);
  uVar5 = compute_modulo_10544c28(uVar2 + param_3 * 2,uVar5);
  if (uVar5 != 0) {
    uVar3 = uVar3 + 1;
  }
  uVar5 = 0;
  do {
    uVar1 = uStack_34;
    *piVar6 = (int)&local_2c;
    iVar4 = allocate_lens_fw_segment(param_1,param_2,uVar1,uVar3,(int *)*piVar6);
    if (iVar4 != 0) {
      return iVar4;
    }
    for (iVar4 = *(int *)(local_2c + 4) * param_2[5] - (uVar2 >> 1); iVar4 != 0; iVar4 = iVar4 + -1)
    {
      caller_r11 = (int)(uint)*(ushort *)(uVar2 + *(int *)(local_2c + 8)) >> 8 |
                  (*(ushort *)(uVar2 + *(int *)(local_2c + 8)) & 0xff) << 8;
      uVar5 = uVar5 + 1;
      if ((uStack_38 + 1 != caller_r11) || (param_3 <= uVar5)) goto LAB_1053bf56;
      uStack_38 = caller_r11;
      uVar2 = uVar2 + 2;
    }
    uVar3 = uVar3 - *(int *)(local_2c + 4);
    uVar2 = 0;
    uStack_34 = *(int *)(local_2c + 4) + uStack_34;
  } while (uVar3 != 0);
LAB_1053bf56:
  if ((caller_r11 < 2) ||
     ((*(uint *)((int)param_1 + 0x4c) < caller_r11 && (caller_r11 <= *(uint *)((int)param_1 + 0x50))))
     ) {
    iVar4 = -0x390;
  }
  else {
    param_4[1] = uVar5;
    param_4[2] = caller_r11;
    iVar4 = 0;
  }
  return iVar4;
}
