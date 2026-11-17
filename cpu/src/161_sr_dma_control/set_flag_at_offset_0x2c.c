/* @k10d set_flag_at_offset_0x2c @ 0x104706d8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 161_sr_dma_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_0x2c(int param_1,int param_2)

{
  call_helper_with_offset_args_10463110(*(uint32_t *)(param_1 + 0x2c),param_2 != 0);
  return;
}
