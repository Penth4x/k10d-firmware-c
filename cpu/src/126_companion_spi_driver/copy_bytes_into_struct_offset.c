/* @k10d copy_bytes_into_struct_offset @ 0x10443628
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_bytes_into_struct_offset(void *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(uint8_t *)((int)param_1 + 0x24) = 0;
  iVar2 = 1;
  if (1 < param_3) {
    iVar1 = param_3 + -4;
    iVar3 = iVar2;
    if (2 < iVar1) {
      do {
        *(uint8_t *)((int)param_1 + iVar3 + 0x24) = *(uint8_t *)(iVar3 + param_2);
        *(uint8_t *)((int)param_1 + iVar3 + 0x25) = *(uint8_t *)(iVar3 + 1 + param_2);
        iVar2 = iVar3 + 3;
        iVar1 = iVar1 + -3;
        *(uint8_t *)((int)param_1 + iVar3 + 0x26) = *(uint8_t *)(iVar3 + 2 + param_2);
        iVar3 = iVar2;
      } while (-1 < iVar1);
    }
    for (iVar1 = iVar1 + 2; -1 < iVar1; iVar1 = iVar1 + -1) {
      *(uint8_t *)((int)param_1 + iVar2 + 0x24) = *(uint8_t *)(iVar2 + param_2);
      iVar2 = iVar2 + 1;
    }
  }
  return;
}
