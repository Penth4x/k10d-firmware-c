/* @k10d invoke_virtual_slot_12_10392224 @ 0x10392224
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_12_10392224(cls_10562758 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1->field_0x8;
  (((vtbl_entry*)(iVar1))[12].fn)((int)param_1->field_0x8 + (int)((vtbl_entry*)(iVar1))[12].adj);
  return;
}
