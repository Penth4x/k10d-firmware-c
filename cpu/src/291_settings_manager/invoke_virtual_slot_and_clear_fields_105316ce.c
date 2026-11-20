/* @k10d invoke_virtual_slot_and_clear_fields_105316ce @ 0x105316ce
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 291_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_and_clear_fields_105316ce(cls_1061e14c *param_1)

{
  int *piVar1;
  uint32_t uVar2;
  
  piVar1 = (int *)param_1->field_0x4;
  if (piVar1 == (int *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (((vtbl_entry*)(*piVar1))[3].fn)((int)((vtbl_entry*)(*piVar1))[3].adj + (int)piVar1);
  }
  param_1->field_0xc = 0;
  clear_two_fields_and_reset((void*)(param_1->field_0x18),0);
  param_1->field_0x1c = 0;
  return uVar2;
}
