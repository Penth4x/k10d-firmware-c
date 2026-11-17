/* @k10d virtual_call_then_delay_1043c352 @ 0x1043c352
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t virtual_call_then_delay_1043c352(void *param_1,uint param_2)

{
  if (param_2 < 0x7c1f07c) {
    (**(code **)(*(int *)((int)param_1 + 4) + 0x2c))
              ((int)*(short *)(*(int *)((int)param_1 + 4) + 0x28) + (int)param_1);
    timer_delay_busywait(param_1,(param_2 & 0xffff) * 0x21 + -1,0);
  }
  return 1;
}
