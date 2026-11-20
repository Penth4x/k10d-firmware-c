/* @k10d invoke_two_virtual_methods_104a7a2c @ 0x104a7a2c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_two_virtual_methods_104a7a2c(cls_105b6980 *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar2))[4].fn)
            ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar2))[4].adj));
  piVar1 = (int *)param_1->field_0x4;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  return;
}
