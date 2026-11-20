/* @k10d invoke_virtual_slot_11_10533990 @ 0x10533990
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_11_10533990(cls_1061e380 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar1))[5].fn)
            ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar1))[5].adj));
  return;
}
