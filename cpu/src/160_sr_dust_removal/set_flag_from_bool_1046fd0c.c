/* @k10d set_flag_from_bool_1046fd0c @ 0x1046fd0c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 160_sr_dust_removal (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_from_bool_1046fd0c(int param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 2;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  call_helper_with_stack_param_10462c8e(*(int **)(param_1 + 0x2c),uVar1);
  return;
}
