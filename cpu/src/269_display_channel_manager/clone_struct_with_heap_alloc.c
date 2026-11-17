/* @k10d clone_struct_with_heap_alloc @ 0x1050a70e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clone_struct_with_heap_alloc(uint32_t *param_1,uint32_t *param_2)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x1c), param_1 != (uint32_t *)0x0)) {
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(uint16_t *)(param_1 + 4) = 0;
    *(uint16_t *)((int)param_1 + 0x12) = 0;
    *(uint16_t *)(param_1 + 5) = 0;
    *(uint16_t *)((int)param_1 + 0x16) = 0;
    *(uint16_t *)(param_1 + 6) = 0;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    *(uint16_t *)(param_1 + 4) = *(uint16_t *)(param_2 + 4);
    *(uint16_t *)((int)param_1 + 0x12) = *(uint16_t *)((int)param_2 + 0x12);
    *(uint16_t *)(param_1 + 5) = *(uint16_t *)(param_2 + 5);
    *(uint16_t *)((int)param_1 + 0x16) = *(uint16_t *)((int)param_2 + 0x16);
    *(uint16_t *)(param_1 + 6) = *(uint16_t *)(param_2 + 6);
  }
  return;
}
