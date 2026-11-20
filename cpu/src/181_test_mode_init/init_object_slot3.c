/* @k10d init_object_slot3 @ 0x1048705e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 181_test_mode_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b2f68 * init_object_slot3(cls_105b2f68 *param_1)

{
  set_two_fields_to_four((int)param_1);
  enable_display_output(param_1);
  param_1->field_0x68 = 0;
  set_flg_obj(&((uint32_t *)&(param_1->field_0x60))[0]);
  return param_1;
}
