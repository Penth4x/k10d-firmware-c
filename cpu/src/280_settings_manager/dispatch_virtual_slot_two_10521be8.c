/* @k10d dispatch_virtual_slot_two_10521be8 @ 0x10521be8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_slot_two_10521be8(cls_105d7b7c *param_1,int param_2)

{
  int *piVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  if ((*(char *)&param_1->field_0x14 != '\0') && (param_1->field_0x4 == 1)) {
    param_1->field_0x4 = 2;
    piVar1 = (int *)param_1->field_0x18;
    if (piVar1 != (int *)0x0) {
      uVar2 = (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,param_2);
    }
    param_1->field_0x0 = param_2;
  }
  return uVar2;
}
