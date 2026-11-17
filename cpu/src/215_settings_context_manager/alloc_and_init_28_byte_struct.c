/* @k10d alloc_and_init_28_byte_struct @ 0x104b3e94
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t *
alloc_and_init_28_byte_struct(uint8_t *param_1,uint8_t param_2,uint8_t param_3,uint8_t param_4)

{
  if ((param_1 != (uint8_t *)0x0) ||
     (param_1 = (uint8_t *)heap_alloc((void *)0x1c), param_1 != (uint8_t *)0x0)) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    *(uint32_t *)(param_1 + 4) = 0;
    *(uint32_t *)(param_1 + 8) = 0;
    *(uint32_t *)(param_1 + 0xc) = 0;
    *(uint32_t *)(param_1 + 0x10) = 0;
    *(uint32_t *)(param_1 + 0x14) = 0;
    *(uint32_t *)(param_1 + 0x18) = 0;
  }
  return param_1;
}
