/* @k10d invoke_virtual_slot_10_on_subobject @ 0x1047cc20
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_10_on_subobject(cls_105aaa50 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1->field_0x28;
  (((vtbl_entry*)(iVar1))[10].fn)((int)param_1->field_0x28 + (int)((vtbl_entry*)(iVar1))[10].adj);
  return;
}
