/* @k10d copy_struct_with_offset @ 0x10480b8c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 174_module_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int copy_struct_with_offset(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((void *)param_1 != param_2) {
    *(uint8_t *)(param_1 + 0xd) = *(uint8_t *)((int)param_2 + 0xd);
    *(uint32_t *)(param_1 + 0x10) = *(uint32_t *)((int)param_2 + 0x10);
    copy_eight_bytes_1045c584((uint16_t *)(param_1 + 0x14),(uint16_t *)((int)param_2 + 0x14));
    iVar1 = 0;
    iVar3 = 3;
    do {
      *(uint8_t *)(iVar1 + param_1) = *(uint8_t *)(iVar1 + (int)param_2);
      iVar2 = iVar1 + 2;
      *(uint8_t *)(iVar1 + 1 + param_1) = *(uint8_t *)(iVar1 + 1 + (int)param_2);
      iVar1 = iVar1 + 3;
      iVar3 = iVar3 + -1;
      *(uint8_t *)(iVar2 + param_1) = *(uint8_t *)(iVar2 + (int)param_2);
    } while (-1 < iVar3);
    *(uint8_t *)(iVar1 + param_1) = *(uint8_t *)(iVar1 + (int)param_2);
  }
  return param_1;
}
