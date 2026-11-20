/* @k10d invoke_virtual_slot_two_on_two_objects_104cebdc @ 0x104cebdc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 238_settings_framework (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_on_two_objects_104cebdc(cls_105b96e4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)get_or_create_singleton_object_104cfcea();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  iVar2 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar2))[3].fn)
            ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar2))[3].adj),0);
  return;
}
