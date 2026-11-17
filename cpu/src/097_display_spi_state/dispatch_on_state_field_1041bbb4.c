/* @k10d dispatch_on_state_field_1041bbb4 @ 0x1041bbb4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_state_field_1041bbb4(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x2f];
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0xcc))((int)*(short *)(*param_1 + 200) + (int)param_1);
  }
  else if (iVar1 == 1) {
    set_flag_at_offset_0xc4_1041da92(__frv_reg_unset(4));
  }
  else if (iVar1 == 2) {
    *(uint8_t *)(param_1 + 0x30) = 1;
  }
  return;
}
