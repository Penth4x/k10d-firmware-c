/* @k10d allocate_and_fill_buffer_1049b4ba @ 0x1049b4ba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 204_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t allocate_and_fill_buffer_1049b4ba(uint32_t param_1,uint32_t param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  
  if (((uint32_t *)_DAT_80048fe8)/*SDRAM*/[5] < *(uint32_t *)_DAT_80048fe8/*SDRAM*/) {
    uVar1 = *(uint32_t *)_DAT_80048fe8/*SDRAM*/;
  }
  else {
    uVar1 = ((uint32_t *)_DAT_80048fe8)/*SDRAM*/[5];
  }
  iVar2 = heap_alloc_2((uint)uVar1);
  if (((uint32_t *)_DAT_80048fe8)/*SDRAM*/[5] < *(uint32_t *)_DAT_80048fe8/*SDRAM*/) {
    uVar1 = *(uint32_t *)_DAT_80048fe8/*SDRAM*/;
  }
  else {
    uVar1 = ((uint32_t *)_DAT_80048fe8)/*SDRAM*/[5];
  }
  (**(code **)(*param_3 + 0x14))
            ((int)*(short *)(*param_3 + 0x10) + (int)param_3,iVar2,uVar1,param_2);
  iVar3 = check_string_at_fixed_address(_DAT_80048fe8/*SDRAM*/,(void *)iVar2);
  uVar4 = 0;
  if (iVar3 == 0) {
    iVar3 = check_virtual_method_result(_DAT_80048fe8/*SDRAM*/,(void *)iVar2);
    if (iVar3 != 0) {
      uVar4 = 2;
    }
  }
  else {
    uVar4 = 1;
  }
  heap_free_2(iVar2);
  return uVar4;
}
