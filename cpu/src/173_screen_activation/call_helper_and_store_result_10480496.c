/* @k10d call_helper_and_store_result_10480496 @ 0x10480496
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 173_screen_activation (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool call_helper_and_store_result_10480496(int param_1,char *param_2,void *param_3)

{
  int extraout_r4;
  
  process_buffer_with_status_check(param_2,param_3);
  *(int *)(param_1 + 4) = extraout_r4;
  return extraout_r4 == 0;
}
