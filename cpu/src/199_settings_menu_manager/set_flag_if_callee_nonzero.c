/* @k10d set_flag_if_callee_nonzero @ 0x1049475a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_if_callee_nonzero(cls_105d67fc *param_1)

{
  int iVar1;
  
  iVar1 = read_byte_at_offset_8(__frv_reg_unset(4));
  if (iVar1 != 0) {
    param_1->field_0x9 = 1;
  }
  return;
}
