/* @k10d copy_sixteen_bytes_from_mmio_104587f0 @ 0x104587f0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_sixteen_bytes_from_mmio_104587f0(uint32_t param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0xf;
  iVar1 = 0;
  do {
    *(uint16_t *)(iVar1 + param_2) = *(uint16_t *)(iVar1 + 0x400a0500);
    *(uint16_t *)(iVar1 + 2 + param_2) = *(uint16_t *)(iVar1 + 0x400a0502);
    *(uint16_t *)(iVar1 + 4 + param_2) = *(uint16_t *)(iVar1 + 0x400a0504);
    *(uint16_t *)(param_2 + iVar1 + 6) = *(uint16_t *)(iVar1 + 0x400a0506);
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 8;
  } while (-1 < iVar2);
  return;
}
