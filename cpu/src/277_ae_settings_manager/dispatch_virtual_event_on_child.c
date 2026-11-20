/* @k10d dispatch_virtual_event_on_child @ 0x1051d37c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_event_on_child(cls_105d6d68 *param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  uint32_t uVar3;
  int iVar4;
  
  if ((param_2 == 0xb) && (piVar2 = (int *)param_1->field_0xc, piVar2 != (int *)0x0)) {
    iVar4 = *piVar2;
    sVar1 = *(short *)(iVar4 + 0x18);
    uVar3 = (*(code *)0x10440f06/*ROM*/)(param_1->field_0x8);
    (((vtbl_entry*)(iVar4))[3].fn)((void *)((int)sVar1 + (int)piVar2),0x118001,uVar3);
  }
  return 0;
}
