/* @k10d copy_virtual_result_to_buffer_1048ebd0 @ 0x1048ebd0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */

void copy_virtual_result_to_buffer_1048ebd0(uint32_t param_1,int param_2,uint32_t param_3,uint32_t param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t auStack_1c [5];
  
  iVar1 = *(int *)(*(int *)(param_2 + 0x28) + 0x20);
  (**(code **)(iVar1 + 0x1c))
            (auStack_1c + 1,*(int *)(param_2 + 0x28) + (int)*(short *)(iVar1 + 0x18));
  iVar1 = 0x10;
  do {
    iVar2 = iVar1 + -4;
    *(uint32_t *)(iVar2 + param_5) = *(uint32_t *)((int)auStack_1c + iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 0);
  return;
}
