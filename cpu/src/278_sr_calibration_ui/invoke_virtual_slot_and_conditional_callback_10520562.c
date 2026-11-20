/* @k10d invoke_virtual_slot_and_conditional_callback_10520562 @ 0x10520562
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_and_conditional_callback_10520562(cls_105d7118 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1->field_0x8;
  iVar1 = (((vtbl_entry*)(iVar1))[7].fn)((int)param_1->field_0x8 + (int)((vtbl_entry*)(iVar1))[7].adj);
  if ((iVar1 == 2) && (param_1->field_0xc != 0)) {
    invoke_event_handler_if_masked((uint32_t)(param_1),2);
  }
  return;
}
