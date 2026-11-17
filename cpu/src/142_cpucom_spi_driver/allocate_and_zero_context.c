/* @k10d allocate_and_zero_context @ 0x104654a8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_zero_context(void *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (void *)0x0) || (param_1 = (void *)heap_alloc((void *)0x404), param_1 != (void *)0x0)) {
    iVar1 = 0;
    *(uint32_t *)((int)param_1 + 0x400) = 0;
    iVar2 = 0x3f;
    do {
      *(uint32_t *)(iVar1 + (int)param_1) = 0;
      *(uint32_t *)(iVar1 + 4 + (int)param_1) = 0;
      *(uint32_t *)(iVar1 + 8 + (int)param_1) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0xc) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x10;
    } while (-1 < iVar2);
  }
  return;
}
