/* @k10d set_flag_and_invoke_virtual @ 0x10390b40
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 038_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_invoke_virtual(cls_1055a304 *param_1)

{
  int *piVar1;
  
  param_1->field_0x5d = 1;
  piVar1 = (int *)param_1->field_0x60;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[5].fn)((int)((vtbl_entry*)(*piVar1))[5].adj + (int)piVar1);
  }
  set_flg_obj(&param_1->field_0x4c);
  return;
}
