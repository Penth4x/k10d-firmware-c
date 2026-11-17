/* @k10d insert_into_priority_queue @ 0x1000fdd4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void insert_into_priority_queue(short param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)param_2[1];
  iVar3 = -1;
  if (iVar1 != -1) {
    do {
      iVar2 = iVar1;
      iVar1 = iVar2;
      if (*(short *)(iVar2 * 0x44 + 0x6a001c00) <= *(short *)(param_1 * 0x44 + 0x6a001c00)) break;
      iVar1 = (int)*(short *)(iVar2 * 0x44 + 0x6a001bea);
      iVar3 = iVar2;
    } while (iVar1 != -1);
  }
  if (iVar3 == -1) {
    param_2[1] = param_1;
  }
  else {
    *(short *)(iVar3 * 0x44 + 0x6a001bea) = param_1;
  }
  if (iVar1 == -1) {
    *param_2 = param_1;
  }
  else {
    *(short *)(iVar1 * 0x44 + 0x6a001be8) = param_1;
  }
  *(short *)(param_1 * 0x44 + 0x6a001be8) = (short)iVar3;
  *(short *)(param_1 * 0x44 + 0x6a001bea) = (short)iVar1;
  return;
}
