/* @k10d invoke_virtual_on_five_slots @ 0x10481952
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_on_five_slots(cls_105ab50c *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)param_1->field_0x14;
  (((vtbl_entry*)(iVar2))[4].fn)
            ((void *)((int)param_1->field_0x14 + (int)((vtbl_entry*)(iVar2))[4].adj));
  iVar2 = *(int *)param_1->field_0x10;
  (((vtbl_entry*)(iVar2))[4].fn)
            ((void *)((int)param_1->field_0x10 + (int)((vtbl_entry*)(iVar2))[4].adj));
  iVar2 = *(int *)param_1->field_0xc;
  (((vtbl_entry*)(iVar2))[4].fn)
            ((void *)((int)param_1->field_0xc + (int)((vtbl_entry*)(iVar2))[4].adj));
  iVar2 = *(int *)param_1->field_0x8;
  (((vtbl_entry*)(iVar2))[4].fn)
            ((void *)((int)param_1->field_0x8 + (int)((vtbl_entry*)(iVar2))[4].adj));
  iVar2 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar2))[4].fn)
            ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar2))[4].adj));
  piVar1 = (int *)param_1->field_0x14;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  piVar1 = (int *)param_1->field_0x10;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  piVar1 = (int *)param_1->field_0xc;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  piVar1 = (int *)param_1->field_0x8;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  piVar1 = (int *)param_1->field_0x4;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  return;
}
