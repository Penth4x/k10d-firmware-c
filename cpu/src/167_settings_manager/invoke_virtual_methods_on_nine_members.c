/* @k10d invoke_virtual_methods_on_nine_members @ 0x104785e8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_methods_on_nine_members(cls_105aa5b4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1->field_0x4;
  iVar2 = *piVar1;
  (((vtbl_entry*)(iVar2))[4].fn)((void *)((int)piVar1 + (int)((vtbl_entry*)(iVar2))[4].adj));
  piVar1 = (int *)param_1->field_0x8;
  iVar2 = *piVar1;
  (((vtbl_entry*)(iVar2))[4].fn)((void *)((int)piVar1 + (int)((vtbl_entry*)(iVar2))[4].adj));
  piVar1 = (int *)param_1->field_0xc;
  iVar2 = *piVar1;
  (((vtbl_entry*)(iVar2))[4].fn)((void *)((int)piVar1 + (int)((vtbl_entry*)(iVar2))[4].adj));
  piVar1 = (int *)param_1->field_0x18;
  iVar2 = *piVar1;
  (((vtbl_entry*)(iVar2))[4].fn)((void *)((int)piVar1 + (int)((vtbl_entry*)(iVar2))[4].adj));
  piVar1 = (int *)param_1->field_0x10;
  iVar2 = *piVar1;
  (((vtbl_entry*)(iVar2))[4].fn)((void *)((int)piVar1 + (int)((vtbl_entry*)(iVar2))[4].adj));
  piVar1 = (int *)param_1->field_0x14;
  iVar2 = *piVar1;
  (((vtbl_entry*)(iVar2))[4].fn)((void *)((int)piVar1 + (int)((vtbl_entry*)(iVar2))[4].adj));
  iVar2 = *(int *)param_1->field_0x1c;
  (((vtbl_entry*)(iVar2))[4].fn)
            ((void *)((int)param_1->field_0x1c + (int)((vtbl_entry*)(iVar2))[4].adj));
  iVar2 = *(int *)param_1->field_0x20;
  (((vtbl_entry*)(iVar2))[4].fn)
            ((void *)((int)param_1->field_0x20 + (int)((vtbl_entry*)(iVar2))[4].adj));
  iVar2 = *(int *)param_1->field_0x24;
  (((vtbl_entry*)(iVar2))[4].fn)
            ((void *)((int)param_1->field_0x24 + (int)((vtbl_entry*)(iVar2))[4].adj));
  piVar1 = (int *)param_1->field_0x4;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  piVar1 = (int *)param_1->field_0x8;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  piVar1 = (int *)param_1->field_0xc;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  piVar1 = (int *)param_1->field_0x18;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  piVar1 = (int *)param_1->field_0x10;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  if (param_1->field_0x14 != 0) {
    iVar2 = *(int *)param_1->field_0x14;
    (((vtbl_entry*)(iVar2))[1].fn)
              ((void *)((int)param_1->field_0x14 + (int)*(short *)(iVar2 + 8)),3);
  }
  piVar1 = (int *)param_1->field_0x1c;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  piVar1 = (int *)param_1->field_0x20;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  piVar1 = (int *)param_1->field_0x24;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  return;
}
