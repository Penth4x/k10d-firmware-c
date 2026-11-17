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
  iVar4 = (**(code **)(iVar4 + 0x14))
                    ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar4 + 0x10));
  *param_2 = (short)((iVar4 * 3) / 2);
  iVar4 = **(int **)(param_1 + 0x30);
  uVar2 = (**(code **)(iVar4 + 0x1c))
                    ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar4 + 0x18));
  param_2[1] = uVar2;
  iVar4 = **(int **)(param_1 + 0x30);
  uVar2 = (**(code **)(iVar4 + 0x24))
                    ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar4 + 0x20));
  param_2[2] = uVar2;
  iVar4 = **(int **)(param_1 + 0x30);
  uVar2 = (**(code **)(iVar4 + 0x2c))
                    ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar4 + 0x28));
  param_2[3] = uVar2;
  iVar4 = **(int **)(param_1 + 0x30);
  uVar1 = (**(code **)(iVar4 + 0x34))
                    ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar4 + 0x30));
  *(uint32_t *)(param_2 + 4) = uVar1;
  iVar4 = **(int **)(param_1 + 0x30);
  iVar4 = (**(code **)(iVar4 + 0x5c))
                    ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar4 + 0x58));
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
  uVar3 = (**(code **)(iVar4 + 0x27c))
                    ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar4 + 0x278));
  *(uint8_t *)(param_2 + 8) = uVar3;
  iVar4 = **(int **)(param_1 + 0x30);
  uVar2 = (**(code **)(iVar4 + 0x284))
                    ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar4 + 0x280));
  param_2[9] = uVar2;
  iVar4 = **(int **)(param_1 + 0x30);
  uVar2 = (**(code **)(iVar4 + 0x28c))
                    ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar4 + 0x288));
  param_2[10] = uVar2;
  iVar4 = **(int **)(param_1 + 0x30);
  iVar4 = (**(code **)(iVar4 + 0x284))
                    ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar4 + 0x280));
  iVar5 = **(int **)(param_1 + 0x30);
  iVar5 = (**(code **)(iVar5 + 0x28c))
                    ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar5 + 0x288));
  *(int *)(param_2 + 0xc) = iVar4 * 0x10 * iVar5;
  return;
}
