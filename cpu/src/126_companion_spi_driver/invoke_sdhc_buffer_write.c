/* @k10d invoke_sdhc_buffer_write @ 0x10449984
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_sdhc_buffer_write(void *param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  if (*(char *)((int)param_1 + 0xf0) != '\0') {
    iVar2 = sdhc_buffer_port_addr(*(void **)((int)param_1 + 0x110));
    iVar3 = *(int *)(*(int *)((int)param_1 + 0x11c) + 4);
    uVar1 = (**(code **)(iVar3 + 0x34))
                      (*(int *)((int)param_1 + 0x11c) + (int)*(short *)(iVar3 + 0x30),iVar2,param_2,
                       param_3);
  }
  return uVar1;
}
