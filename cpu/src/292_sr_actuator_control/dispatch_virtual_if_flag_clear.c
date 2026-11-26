/* @k10d dispatch_virtual_if_flag_clear @ 0x10534238
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_if_flag_clear(cls_1061e4c0 *param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)match_obj_by_field4_10493dc4)();
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1->field_0x10 + 0xc);
    (((vtbl_entry*)(iVar1))[25].fn)(param_1->field_0x10 + (int)*(short *)(iVar1 + 200),param_2);
  }
  return;
}
