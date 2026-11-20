/* @k10d invoke_virtual_slot_if_param2_not_330_105339d2 @ 0x105339d2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_if_param2_not_330_105339d2(cls_1061e380 *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0x14a) {
    iVar1 = *(int *)param_1->field_0x4;
    (((vtbl_entry*)(iVar1))[9].fn)
              ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar1))[9].adj));
  }
  return;
}
