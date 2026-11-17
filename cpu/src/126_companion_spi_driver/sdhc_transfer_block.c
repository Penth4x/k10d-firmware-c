/* @k10d sdhc_transfer_block @ 0x10449890
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sdhc_transfer_block(void *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint32_t uStack_c;
  
  uStack_c = 0;
  iVar1 = sdhc_wait_int_status(param_1,0x20,500);
  iVar3 = 0;
  if (iVar1 != 0) {
    bVar5 = (param_2 & 3) != 0;
    iVar1 = sdhc_buffer_port_addr(*(void **)((int)param_1 + 0x110));
    uVar2 = param_2;
    if (bVar5) {
      uVar2 = *(uint *)((int)param_1 + 0xfc);
    }
    iVar4 = *(int *)(*(int *)((int)param_1 + 0x11c) + 4);
    (**(code **)(iVar4 + 0x34))
              (*(int *)((int)param_1 + 0x11c) + (int)*(short *)(iVar4 + 0x30),iVar1,uVar2,1);
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x11c) + 4);
    for (iVar1 = (**(code **)(iVar1 + 0x4c))
                           (*(int *)((int)param_1 + 0x11c) + (int)*(short *)(iVar1 + 0x48));
        iVar1 != 0;
        iVar1 = (**(code **)(*(int *)(iVar1 + 4) + 0x4c))
                          (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x48))) {
      iVar1 = *(int *)((int)param_1 + 0x11c);
      if (*(char *)((int)param_1 + 0xdc) != '\0') {
        iVar3 = (**(code **)(*(int *)(iVar1 + 4) + 0x44))
                          (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x40));
        break;
      }
    }
    if (iVar3 == 0) {
      iVar1 = *(int *)(*(int *)((int)param_1 + 0x11c) + 4);
      uStack_c = (**(code **)(iVar1 + 0x3c))
                           (*(int *)((int)param_1 + 0x11c) + (int)*(short *)(iVar1 + 0x38));
    }
    if (bVar5) {
      iVar1 = *(int *)((int)param_1 + 0xfc);
      iVar3 = 0x200;
      do {
        iVar3 = iVar3 + -1;
        *(uint8_t *)(iVar3 + param_2) = *(uint8_t *)(iVar3 + iVar1);
      } while (iVar3 != 0);
    }
  }
  return uStack_c;
}
