/* @k10d call_helper_and_set_flag_10493c08 @ 0x10493c08
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 198_event_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_and_set_flag_10493c08(uint32_t *param_1)

{
  copy_two_shorts_from_source(*param_1,(uint32_t *)__frv_reg_unset(5));
  *(uint8_t *)((int)param_1 + 9) = 1;
  return;
}
