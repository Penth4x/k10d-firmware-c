/* @k10d alloc_two_byte_pair_record @ 0x104b4150
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t * alloc_two_byte_pair_record(uint8_t *param_1,uint8_t param_2,uint8_t param_3)

{
  if ((param_1 != (uint8_t *)0x0) ||
     (param_1 = (uint8_t *)heap_alloc((void *)0xc), param_1 != (uint8_t *)0x0)) {
    *param_1 = param_2;
    param_1[1] = param_3;
    *(uint16_t *)(param_1 + 2) = 0;
    *(uint32_t *)(param_1 + 4) = 0;
    *(uint32_t *)(param_1 + 8) = 0;
  }
  return param_1;
}
