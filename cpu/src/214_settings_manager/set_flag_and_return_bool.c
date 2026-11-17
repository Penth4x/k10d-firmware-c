/* @k10d set_flag_and_return_bool @ 0x104b05b2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool set_flag_and_return_bool(void *param_1,int param_2)

{
  *(int *)((int)param_1 + 4) = param_2;
  return param_2 != 0;
}
