/* @k10d set_flag_if_param_in_range @ 0x10426602
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 101_parameter_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_if_param_in_range(int param_1,int param_2)

{
  if ((((param_2 == 0) || (param_2 == 1)) || (param_2 == 2)) || (param_2 == 3)) {
    set_flg_obj((uint32_t *)(param_1 + 0x2c));
  }
  return;
}
