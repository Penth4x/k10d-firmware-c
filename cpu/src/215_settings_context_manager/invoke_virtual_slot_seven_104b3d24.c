/* @k10d invoke_virtual_slot_seven_104b3d24 @ 0x104b3d24
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_seven_104b3d24(cls_105b8160 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1->field_0x8;
  (((vtbl_entry*)(iVar1))[7].fn)((int)param_1->field_0x8 + (int)((vtbl_entry*)(iVar1))[7].adj);
  return;
}
