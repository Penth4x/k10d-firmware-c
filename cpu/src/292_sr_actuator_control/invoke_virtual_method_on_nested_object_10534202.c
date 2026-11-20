/* @k10d invoke_virtual_method_on_nested_object_10534202 @ 0x10534202
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_on_nested_object_10534202(cls_1061e4c0 *param_1,uint32_t param_2)

{
  int iVar1;
  
  (*(code *)0x10493db4/*ROM*/)();
  iVar1 = *(int *)(param_1->field_0x10 + 0xc);
  (((vtbl_entry*)(iVar1))[21].fn)(param_1->field_0x10 + (int)((vtbl_entry*)(iVar1))[21].adj,param_2);
  return;
}
