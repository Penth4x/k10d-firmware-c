/* @k10d copy_structured_data_block @ 0x10438366
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_structured_data_block(int param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 * 0x200 + 0x200U < 0xe11) {
    iVar3 = 0x200;
  }
  else {
    iVar3 = param_3 * -0x200 + 0xe10;
  }
  if (iVar3 != 0) {
    iVar4 = param_3 << 0xb;
    iVar3 = iVar3 + -3;
    iVar2 = 0;
    if (2 < iVar3) {
      iVar1 = param_1 + 8;
      do {
        *(uint32_t *)(iVar1 + iVar4) = *(uint32_t *)((int)param_2 + iVar2);
        *(uint32_t *)(iVar1 + iVar4 + 4) = *(uint32_t *)((int)param_2 + iVar2 + 4);
        *(uint32_t *)(iVar1 + iVar4 + 8) = *(uint32_t *)((int)param_2 + iVar2 + 8);
        iVar2 = iVar2 + 0xc;
        iVar3 = iVar3 + -3;
        iVar4 = iVar4 + 0xc;
      } while (-1 < iVar3);
    }
    iVar3 = iVar3 + 2;
    if (-1 < iVar3) {
      do {
        *(uint32_t *)(param_1 + 8 + iVar4) = *(uint32_t *)((int)param_2 + iVar2);
        iVar2 = iVar2 + 4;
        iVar3 = iVar3 + -1;
        iVar4 = iVar4 + 4;
      } while (-1 < iVar3);
    }
  }
  return;
}
