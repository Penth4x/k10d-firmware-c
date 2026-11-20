/* @k10d invoke_virtual_slot_3_on_two_objects @ 0x104cec18
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 238_settings_framework (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_3_on_two_objects(cls_105b96e4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)get_or_create_singleton_object_104cfcea();
  (((vtbl_entry*)(*piVar1))[4].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[4].adj);
  iVar2 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar2))[4].fn)
            ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar2))[4].adj));
  piVar1 = (int *)param_1->field_0x4;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  return;
}
