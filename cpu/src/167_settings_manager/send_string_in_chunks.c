/* @k10d send_string_in_chunks @ 0x1047a3a0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void send_string_in_chunks(uint32_t param_1,char *param_2,void *param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  
  iVar2 = count_string_bytes(param_2);
  pvVar3 = (void *)heap_alloc_2(0xc9);
  for (; iVar2 != 0; iVar2 = iVar2 - iVar4) {
    iVar4 = (*(code *)0x10478a68/*ROM*/)(200,iVar2);
    iVar1 = iVar4;
    while (iVar1 != 0) {
      iVar1 = iVar1 + -1;
      *(char *)(iVar1 + (int)pvVar3) = param_2[iVar1];
    }
    *(uint8_t *)((int)pvVar3 + iVar4) = 0;
    console_printf((void *)0x105aa6e4/*ROM*/,pvVar3,param_3,param_4);
    param_2 = param_2 + iVar4;
  }
  heap_free_2((int)pvVar3);
  return;
}
