/* @k10d dispatch_virtual_slot_8_1053171c @ 0x1053171c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 291_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot_8_1053171c(cls_1061e14c *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar1))[8].fn)(param_1->field_0x4 + (int)((vtbl_entry*)(iVar1))[8].adj);
  return;
}
