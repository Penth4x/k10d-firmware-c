/* @k10d init_56_byte_struct_104c2344 @ 0x104c2344
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_56_byte_struct_104c2344(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x38), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0xffffffff;
    param_1[8] = 0xffffffff;
    *(uint16_t *)(param_1 + 9) = 0;
    param_1[10] = 0xffffffff;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    *(uint8_t *)(param_1 + 0xd) = 0;
  }
  return;
}
