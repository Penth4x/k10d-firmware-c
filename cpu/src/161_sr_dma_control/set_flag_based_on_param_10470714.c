/* @k10d set_flag_based_on_param_10470714 @ 0x10470714
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 161_sr_dma_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_based_on_param_10470714(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xff;
  }
  else {
    uVar1 = 0x80;
  }
  call_helper_with_offset_args_10463110(*(uint32_t *)(param_1 + 0x2c),uVar1);
  return;
}
