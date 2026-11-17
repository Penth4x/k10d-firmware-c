/* @k10d write_bytes_via_virtual_interface @ 0x104cfaf6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 241_settings_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int write_bytes_via_virtual_interface(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint uStack_20;
  uint uStack_1c;
  uint8_t uStack_a;
  uint8_t uStack_9;
  
  iVar2 = **(int **)(param_1 + 8);
  iVar2 = (**(code **)(iVar2 + 0x34))
                    ((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar2 + 0x30),
                     *(uint32_t *)(param_1 + 0xc),*(int *)(param_1 + 0x10) + param_4,0);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = 1;
    if (*(char *)(param_1 + 4) == '\0') {
      uStack_20 = 0;
      if (param_3 != 0) {
        iVar2 = 0;
        do {
          uStack_a = (uint8_t)*(uint16_t *)(iVar2 + param_2);
          uStack_9 = (uint8_t)((ushort)*(uint16_t *)(iVar2 + param_2) >> 8);
          iVar1 = **(int **)(param_1 + 8);
          iVar1 = (**(code **)(iVar1 + 0x2c))
                            ((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar1 + 0x28),
                             *(uint32_t *)(param_1 + 0xc),&uStack_a,2);
          if (iVar1 == 0) {
            return 0;
          }
          iVar2 = iVar2 + 2;
          uStack_20 = uStack_20 + 1;
        } while (uStack_20 < param_3);
      }
    }
    else {
      uStack_1c = 0;
      if (param_3 != 0) {
        iVar2 = 0;
        do {
          uStack_a = (uint8_t)((ushort)*(uint16_t *)(iVar2 + param_2) >> 8);
          uStack_9 = (uint8_t)*(uint16_t *)(iVar2 + param_2);
          iVar1 = **(int **)(param_1 + 8);
          iVar1 = (**(code **)(iVar1 + 0x2c))
                            ((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar1 + 0x28),
                             *(uint32_t *)(param_1 + 0xc),&uStack_a,2);
          if (iVar1 == 0) {
            return 0;
          }
          iVar2 = iVar2 + 2;
          uStack_1c = uStack_1c + 1;
        } while (uStack_1c < param_3);
      }
    }
  }
  return iVar1;
}
