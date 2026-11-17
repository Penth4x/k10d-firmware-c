/* @k10d alloc_and_zero_struct_1046c686 @ 0x1046c686
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 152_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * alloc_and_zero_struct_1046c686(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x85c), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(uint8_t *)(param_1 + 0x216) = 0;
    *(uint8_t *)((int)param_1 + 0x859) = 0;
    iVar2 = 0x84;
    iVar1 = 0;
    do {
      *(uint32_t *)((int)param_1 + iVar1 + 8) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0xc) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x10) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x14) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x10;
    } while (-1 < iVar2);
  }
  return param_1;
}
