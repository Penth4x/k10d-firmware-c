/* @k10d write_sequential_data_blocks @ 0x1053da40
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Writes a sequence of data blocks by calling a lower-level write routine for each
 *   element in a count.
 * summary:
 *   The function iterates from 1 to the count stored at param_1+0x24, calling
 *   transfer_data_via_virtual_method for each iteration with an offset calculated from
 *   param_3[0] plus the iteration index times the stride at param_1+0x3c. It propagates
 *   specific error codes (-6 and -0x386) from the callee. On success, it sets param_3[3] to
 *   0 and increments a counter at param_2+4 by the value in param_3[1].
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int write_sequential_data_blocks(int param_1,void *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uintptr_t sp;
  int *piVar6;
  int iStack_1c;
  
  piVar6 = (int *)&stack0xffffffe0;
  iVar1 = transfer_data_via_virtual_method(param_1,*param_3,param_3[1],param_3[2],&iStack_1c);
  if (iVar1 == 0) {
    for (uVar5 = 1; uVar5 < *(uint *)(param_1 + 0x24); uVar5 = uVar5 + 1) {
      iVar1 = *(int *)(param_1 + 0x3c);
      iVar2 = *param_3;
      uVar3 = param_3[1];
      iVar4 = param_3[2];
      *piVar6 = (int)&iStack_1c;
      iVar1 = transfer_data_via_virtual_method(param_1,iVar2 + uVar5 * iVar1,uVar3,iVar4,(int *)*piVar6);
      if (iVar1 != 0) {
        if (iVar1 == -6) {
          return -6;
        }
        return -0x386;
      }
      iVar1 = 0;
    }
    param_3[3] = 0;
    *(int *)((int)param_2 + 4) = *(int *)((int)param_2 + 4) + param_3[1];
  }
  else if (iVar1 != -6) {
    iVar1 = -0x386;
  }
  return iVar1;
}
