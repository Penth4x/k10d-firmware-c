/* @k10d invoke_virtual_then_call_helper_105341d4 @ 0x105341d4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_then_call_helper_105341d4(cls_1061e4c0 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1->field_0x10 + 0xc);
  (((vtbl_entry*)(iVar1))[10].fn)(param_1->field_0x10 + (int)((vtbl_entry*)(iVar1))[10].adj);
  call_virtual_slot_if_flag_set_1049477e((cls_105c136c *)param_1);
  return;
}
