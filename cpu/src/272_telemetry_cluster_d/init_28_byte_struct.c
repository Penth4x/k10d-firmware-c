/* @k10d init_28_byte_struct @ 0x10513bd8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_28_byte_struct(uint32_t *param_1)

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
  }
  return;
}
