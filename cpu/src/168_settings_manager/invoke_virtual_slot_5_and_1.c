/* @k10d invoke_virtual_slot_5_and_1 @ 0x1047d0a0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_5_and_1(cls_105aabd0 *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar2))[6].fn)
            ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar2))[6].adj));
  piVar1 = (int *)param_1->field_0x4;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  return;
}
