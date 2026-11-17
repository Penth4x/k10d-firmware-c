/* @k10d copy_sixteen_bytes_from_mmio_10458b1a @ 0x10458b1a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_sixteen_bytes_from_mmio_10458b1a(uint32_t param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = 0xe;
  do {
    iVar3 = iVar2;
    *(uint16_t *)(iVar1 + param_2) = *(uint16_t *)(iVar1 + 0x400a0380);
    *(uint16_t *)(iVar1 + 2 + param_2) = *(uint16_t *)(iVar1 + 0x400a0382);
    *(uint16_t *)(param_2 + iVar1 + 4) = *(uint16_t *)(iVar1 + 0x400a0384);
    iVar2 = iVar3 + -3;
    iVar1 = iVar1 + 6;
  } while (-1 < iVar2);
  iVar3 = iVar3 + -1;
  do {
    *(uint16_t *)(param_2 + iVar1) = *(uint16_t *)(iVar1 + 0x400a0380);
    iVar3 = iVar3 + -1;
    iVar1 = iVar1 + 2;
  } while (-1 < iVar3);
  return;
}
