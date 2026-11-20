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
  iVar2 = (((vtbl_entry*)(iVar2))[2].fn)
                    ((int)*(int **)(param_1 + 0x14) + (int)((vtbl_entry*)(iVar2))[2].adj,0);
  iVar3 = **(int **)(param_1 + 0x14);
  iVar3 = (((vtbl_entry*)(iVar3))[2].fn)
                    ((int)*(int **)(param_1 + 0x14) + (int)((vtbl_entry*)(iVar3))[2].adj,1);
  iVar4 = **(int **)(param_1 + 0x14);
  iVar4 = (((vtbl_entry*)(iVar4))[2].fn)
                    ((int)*(int **)(param_1 + 0x14) + (int)((vtbl_entry*)(iVar4))[2].adj,2);
  iVar5 = **(int **)(param_1 + 0x14);
  iVar5 = (((vtbl_entry*)(iVar5))[2].fn)
                    ((int)*(int **)(param_1 + 0x14) + (int)((vtbl_entry*)(iVar5))[2].adj,3);
  iVar6 = **(int **)(param_1 + 0x14);
  cVar1 = (((vtbl_entry*)(iVar6))[2].fn)
                    ((int)*(int **)(param_1 + 0x14) + (int)((vtbl_entry*)(iVar6))[2].adj,4);
  iVar2 = (((((iVar2 + iVar3) - iVar4) - iVar5) - (int)cVar1 & 0xffU) - 0x28) * 0x400;
  write_word_to_dynamic_array(param_2,0,(short)((int)(((uint)(iVar2 >> 2) >> 0x1d) + iVar2) >> 3));
  return;
}
