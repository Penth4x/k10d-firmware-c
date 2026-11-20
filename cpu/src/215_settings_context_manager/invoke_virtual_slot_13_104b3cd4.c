/* @k10d invoke_virtual_slot_13_104b3cd4 @ 0x104b3cd4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_13_104b3cd4(cls_105b8160 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar1))[6].fn)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar1))[6].adj);
  return;
}
