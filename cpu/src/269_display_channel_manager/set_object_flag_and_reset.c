/* @k10d set_object_flag_and_reset @ 0x1050b07e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_flag_and_reset(int *param_1,int param_2)

{
  if (param_2 == 0) {
    (*(code *)0x10459608/*ROM*/)(param_1);
  }
  else {
    param_1[5] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    manage_kernel_object_handle(param_1,0);
  }
  *(char *)(param_1 + 3) = (char)param_2;
  return;
}
