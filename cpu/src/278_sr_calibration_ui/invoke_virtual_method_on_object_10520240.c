/* @k10d invoke_virtual_method_on_object_10520240 @ 0x10520240
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_on_object_10520240(cls_105d70a0 *param_1)

{
  int iVar1;
  uint32_t in_stack_00000000;
  
  param_1->field_0x4 = in_stack_00000000;
  (*(code *)0x104ad2ea/*ROM*/)(param_1->field_0x10,&param_1->field_0x8,1,0);
  iVar1 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar1))[8].fn)
            ((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar1))[8].adj,1,param_1->field_0x10);
  return;
}
