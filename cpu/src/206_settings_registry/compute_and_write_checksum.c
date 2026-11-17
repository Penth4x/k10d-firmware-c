/* @k10d compute_and_write_checksum @ 0x104a549e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_and_write_checksum(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = **(int **)(param_1 + 0x14);
  iVar2 = (**(code **)(iVar2 + 0x14))
                    ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar2 + 0x10),0);
  iVar3 = **(int **)(param_1 + 0x14);
  iVar3 = (**(code **)(iVar3 + 0x14))
                    ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar3 + 0x10),1);
  iVar4 = **(int **)(param_1 + 0x14);
  iVar4 = (**(code **)(iVar4 + 0x14))
                    ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar4 + 0x10),2);
  iVar5 = **(int **)(param_1 + 0x14);
  iVar5 = (**(code **)(iVar5 + 0x14))
                    ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar5 + 0x10),3);
  iVar6 = **(int **)(param_1 + 0x14);
  cVar1 = (**(code **)(iVar6 + 0x14))
                    ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar6 + 0x10),4);
  iVar2 = (((((iVar2 + iVar3) - iVar4) - iVar5) - (int)cVar1 & 0xffU) - 0x28) * 0x400;
  write_word_to_dynamic_array(param_2,0,(short)((int)(((uint)(iVar2 >> 2) >> 0x1d) + iVar2) >> 3));
  return;
}
