/* @k10d dispatch_event_0x29_via_vtable @ 0x1039fdb8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_0x29_via_vtable(void *param_1,int param_2,uint32_t param_3)

{
  short sVar1;
  uint32_t uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 == 0x29) {
    piVar4 = *(int **)((int)param_1 + 0x2c);
    iVar3 = *piVar4;
    sVar1 = *(short *)(iVar3 + 0x10);
    uVar2 = (*(code *)0x104f1c3a/*ROM*/)(*(uint32_t *)((int)param_1 + 0x28),param_3);
    (**(code **)(iVar3 + 0x14))((int)piVar4 + (int)sVar1,0x112006a,uVar2);
  }
  return;
}
