/* @k10d call_helper_and_set_flag_10493c08 @ 0x10493c08
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 198_event_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_and_set_flag_10493c08(cls_1061e4c0 *param_1)

{
  copy_two_shorts_from_source((uint16_t *)(param_1->field_0x0),(uint32_t *)__frv_reg_unset(5));
  param_1->field_0x9 = 1;
  return;
}
