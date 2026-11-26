/* @k10d alloc_and_init_small_struct_1045c524 @ 0x1045c524
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_init_small_struct_1045c524(uint16_t *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint8_t param_5,uint8_t param_6,uint8_t param_7,uint8_t param_8)

{
  if ((param_1 != (uint16_t *)0x0) ||
     (param_1 = (uint16_t *)heap_alloc((void *)8), param_1 != (uint16_t *)0x0)) {
    *param_1 = ((uint16_t)param_2);
    *(uint8_t *)(param_1 + 1) = (uint8_t)param_3;
    *(uint8_t *)((int)param_1 + 3) = (uint8_t)param_4;
    *(uint8_t *)(param_1 + 2) = param_5;
    *(uint8_t *)((int)param_1 + 5) = param_6;
    *(uint8_t *)(param_1 + 3) = param_7;
    *(uint8_t *)((int)param_1 + 7) = param_8;
  }
  return;
}
