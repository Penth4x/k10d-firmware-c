/* @k10d alloc_and_zero_16_bytes_10463790 @ 0x10463790
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_zero_16_bytes_10463790(void *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) || (param_1 = (void *)heap_alloc((void *)0x10), param_1 != 0)) {
    iVar1 = 0;
    iVar2 = 3;
    do {
      *(uint8_t *)(iVar1 + (int)param_1) = 0;
      *(uint8_t *)(iVar1 + 1 + (int)param_1) = 0;
      *(uint8_t *)(iVar1 + 2 + (int)param_1) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 3) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 4;
    } while (-1 < iVar2);
  }
  return;
}
