/* @k10d read_exposure_params_via_vtable @ 0x1041b470
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_exposure_params_via_vtable(int param_1,uint16_t *param_2)

{
  uint16_t uVar2;
  uint32_t uVar1;
  uint8_t uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = **(int **)(param_1 + 0x30);
  iVar4 = (((vtbl_entry*)(iVar4))[2].fn)
                    ((int)*(int **)(param_1 + 0x30) + (int)((vtbl_entry*)(iVar4))[2].adj);
  *param_2 = (short)((iVar4 * 3) / 2);
  iVar4 = **(int **)(param_1 + 0x30);
  uVar2 = (((vtbl_entry*)(iVar4))[3].fn)
                    ((int)*(int **)(param_1 + 0x30) + (int)((vtbl_entry*)(iVar4))[3].adj);
  param_2[1] = uVar2;
  iVar4 = **(int **)(param_1 + 0x30);
  uVar2 = (((vtbl_entry*)(iVar4))[4].fn)
                    ((int)*(int **)(param_1 + 0x30) + (int)((vtbl_entry*)(iVar4))[4].adj);
  param_2[2] = uVar2;
  iVar4 = **(int **)(param_1 + 0x30);
  uVar2 = (((vtbl_entry*)(iVar4))[5].fn)
                    ((int)*(int **)(param_1 + 0x30) + (int)((vtbl_entry*)(iVar4))[5].adj);
  param_2[3] = uVar2;
  iVar4 = **(int **)(param_1 + 0x30);
  uVar1 = (((vtbl_entry*)(iVar4))[6].fn)
                    ((int)*(int **)(param_1 + 0x30) + (int)((vtbl_entry*)(iVar4))[6].adj);
  *(uint32_t *)(param_2 + 4) = uVar1;
  iVar4 = **(int **)(param_1 + 0x30);
  iVar4 = (((vtbl_entry*)(iVar4))[11].fn)
                    ((int)*(int **)(param_1 + 0x30) + (int)((vtbl_entry*)(iVar4))[11].adj);
  if (iVar4 == 0) {
    uVar1 = 0;
  }
  else if (iVar4 == 1) {
    uVar1 = 4;
  }
  else if (iVar4 == 2) {
    uVar1 = 8;
  }
  else {
    uVar1 = 0xc;
  }
  *(uint32_t *)(param_2 + 6) = uVar1;
  iVar4 = **(int **)(param_1 + 0x30);
  uVar3 = (((vtbl_entry*)(iVar4))[79].fn)
                    ((int)*(int **)(param_1 + 0x30) + (int)((vtbl_entry*)(iVar4))[79].adj);
  *(uint8_t *)(param_2 + 8) = uVar3;
  iVar4 = **(int **)(param_1 + 0x30);
  uVar2 = (((vtbl_entry*)(iVar4))[80].fn)
                    ((int)*(int **)(param_1 + 0x30) + (int)((vtbl_entry*)(iVar4))[80].adj);
  param_2[9] = uVar2;
  iVar4 = **(int **)(param_1 + 0x30);
  uVar2 = (((vtbl_entry*)(iVar4))[81].fn)
                    ((int)*(int **)(param_1 + 0x30) + (int)((vtbl_entry*)(iVar4))[81].adj);
  param_2[10] = uVar2;
  iVar4 = **(int **)(param_1 + 0x30);
  iVar4 = (((vtbl_entry*)(iVar4))[80].fn)
                    ((int)*(int **)(param_1 + 0x30) + (int)((vtbl_entry*)(iVar4))[80].adj);
  iVar5 = **(int **)(param_1 + 0x30);
  iVar5 = (((vtbl_entry*)(iVar5))[81].fn)
                    ((int)*(int **)(param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[81].adj);
  *(int *)(param_2 + 0xc) = iVar4 * 0x10 * iVar5;
  return;
}
