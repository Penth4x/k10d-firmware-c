/* @k10d invoke_virtual_slot_on_nested_object_104cf21e @ 0x104cf21e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 240_menu_event_system (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_nested_object_104cf21e(cls_105b979c *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1->field_0x38;
  (((vtbl_entry*)(iVar1))[9].fn)((int)param_1->field_0x38 + (int)((vtbl_entry*)(iVar1))[9].adj);
  return;
}
