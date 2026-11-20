/* @k10d invoke_virtual_slot_8_with_zero @ 0x103c7248
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_8_with_zero(cls_1059e078 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1->field_0x0;
  (((vtbl_entry*)(iVar1))[8].fn)((int)param_1->field_0x0 + (int)((vtbl_entry*)(iVar1))[8].adj,0);
  return;
}
