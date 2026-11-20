/* @k10d invoke_virtual_slot_13_1052ca38 @ 0x1052ca38
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 288_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_13_1052ca38(cls_105fa6d4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar1))[6].fn)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar1))[6].adj);
  return 2;
}
