/* @k10d compute_and_store_timeout_value @ 0x1044a8f6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_and_store_timeout_value(void *param_1,int param_2,int param_3)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    *(int *)((int)param_1 + 0x104) = param_3 * 100 + 1000;
  }
  else {
    *(int *)((int)param_1 + 0x104) = param_3 * 0xfa + 2000;
  }
  uVar1 = clamp_value_to_max_1044742e(*(uint32_t *)((int)param_1 + 0x104),300000);
  *(uint32_t *)((int)param_1 + 0x104) = uVar1;
  return;
}
