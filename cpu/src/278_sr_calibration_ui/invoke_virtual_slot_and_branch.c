/* @k10d invoke_virtual_slot_and_branch @ 0x10520532
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_and_branch(cls_105d7118 *param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  
  param_1->field_0xc = param_3;
  iVar1 = *(int *)param_1->field_0x8;
  iVar1 = (((vtbl_entry*)(iVar1))[6].fn)((int)param_1->field_0x8 + (int)((vtbl_entry*)(iVar1))[6].adj);
  if (iVar1 == 2) {
    invoke_event_handler_if_masked((uint32_t)(param_1),2);
  }
  return;
}
