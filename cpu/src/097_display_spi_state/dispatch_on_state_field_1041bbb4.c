/* @k10d dispatch_on_state_field_1041bbb4 @ 0x1041bbb4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_state_field_1041bbb4(cls_1059d1d8 *param_1)

{
  int iVar1;
  
  iVar1 = param_1->field_0xbc;
  if (iVar1 == 0) {
    (((vtbl_entry*)(param_1->field_0x0))[25].fn)
              ((int)&param_1->field_0x0 + (int)*(short *)(param_1->field_0x0 + 200));
  }
  else if (iVar1 == 1) {
    set_flag_at_offset_0xc4_1041da92(__frv_reg_unset(4));
  }
  else if (iVar1 == 2) {
    param_1->field_0xc0 = 1;
  }
  return;
}
