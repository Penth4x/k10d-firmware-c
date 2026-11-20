/* @k10d dispatch_state_transition_105215ae @ 0x105215ae
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_transition_105215ae(cls_105d77cc *param_1)

{
  int iVar1;
  
  if (param_1->field_0x10 == 3) {
    iVar1 = *(int *)param_1->field_0x18;
    (((vtbl_entry*)(iVar1))[5].fn)((int)param_1->field_0x18 + (int)((vtbl_entry*)(iVar1))[5].adj);
  }
  else if (param_1->field_0x10 == 4) {
    iVar1 = *(int *)param_1->field_0x18;
    (((vtbl_entry*)(iVar1))[6].fn)((int)param_1->field_0x18 + (int)((vtbl_entry*)(iVar1))[6].adj);
  }
  param_1->field_0x10 = 0;
  return;
}
