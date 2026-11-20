/* @k10d dispatch_virtual_call_on_flag @ 0x104ea2d4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_call_on_flag(cls_105c2050 *param_1,uint param_2)

{
  uint32_t uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = 0;
  if ((param_2 & 0xffff0000) == 0x1170000) {
    iVar3 = *(uint32_t*)(param_1->field_0x14);
    uVar1 = (((vtbl_entry*)(iVar3))[9].fn)((int)param_1->field_0x14 + (int)((vtbl_entry*)(iVar3))[9].adj);
  }
  else {
    piVar2 = (void*)(param_1->field_0x10);
    if (piVar2 != (int *)0x0) {
      uVar1 = (((vtbl_entry*)(*piVar2))[2].fn)((int)((vtbl_entry*)(*piVar2))[2].adj + (int)piVar2);
    }
  }
  return uVar1;
}
