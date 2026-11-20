/* @k10d invoke_virtual_slot_and_branch_on_two @ 0x105204ce
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_and_branch_on_two(cls_105d7118 *param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  
  param_1->field_0xc = param_3;
  iVar1 = *(int *)param_1->field_0x8;
  iVar1 = (((vtbl_entry*)(iVar1))[8].fn)((int)param_1->field_0x8 + (int)((vtbl_entry*)(iVar1))[8].adj);
  if (iVar1 == 2) {
    dispatch_event_if_enabled((uint32_t)(param_1),2);
  }
  return;
}
