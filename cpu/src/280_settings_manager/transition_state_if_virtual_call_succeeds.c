/* @k10d transition_state_if_virtual_call_succeeds @ 0x10521d46
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void transition_state_if_virtual_call_succeeds(cls_105d86e0 *param_1)

{
  int iVar1;
  
  if ((param_1->field_0x4 == 3) &&
     (iVar1 = (((vtbl_entry*)(param_1->field_0xc))[12].fn)
                        ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0xc))[12].adj),
     iVar1 == 0)) {
    param_1->field_0x4 = 1;
  }
  return;
}
