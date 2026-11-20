/* @k10d invoke_virtual_slot_12_103939dc @ 0x103939dc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_12_103939dc(cls_105629a8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar1))[12].fn)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar1))[12].adj);
  return;
}
