/* @k10d init_0x20_byte_object @ 0x10512d52
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_0x20_byte_object(uint8_t *param_1)

{
  if ((param_1 != (uint8_t *)0x0) ||
     (param_1 = (uint8_t *)heap_alloc((void *)0x20), param_1 != (uint8_t *)0x0)) {
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = 0;
    *(uint16_t *)(param_1 + 4) = 0x40;
    *(uint16_t *)(param_1 + 6) = 0x40;
    *(uint16_t *)(param_1 + 8) = 0;
    *(uint16_t *)(param_1 + 10) = 0;
    *(uint16_t *)(param_1 + 0xc) = 0;
    *(uint16_t *)(param_1 + 0xe) = 0;
    *(uint32_t *)(param_1 + 0x10) = 0;
    *(uint32_t *)(param_1 + 0x14) = 0;
    *(uint32_t *)(param_1 + 0x18) = 0;
    *(uint32_t *)(param_1 + 0x1c) = 0;
  }
  return;
}
