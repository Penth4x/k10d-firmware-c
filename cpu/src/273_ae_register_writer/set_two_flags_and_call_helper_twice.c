/* @k10d set_two_flags_and_call_helper_twice @ 0x105143c0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105d624c": ignoring overlapping field "field_0x14" */

uint32_t set_two_flags_and_call_helper_twice(cls_105d624c *param_1,int param_2)

{
  if (param_2 == 0x150001) {
    param_1->field_0x354 = 1;
    param_1->field_0x355 = 1;
    set_flag_at_offset_0x34c((int)param_1);
    set_flag_at_offset_0x34c((int)param_1);
  }
  return 1;
}
