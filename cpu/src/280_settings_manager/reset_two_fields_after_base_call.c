/* @k10d reset_two_fields_after_base_call @ 0x105214de
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_two_fields_after_base_call(cls_105d77cc *param_1)

{
  call_0x10521cba();
  param_1->field_0x10 = 0;
  param_1->field_0x14 = 0;
  return;
}
