/* @k10d zero_init_0x94_byte_struct @ 0x10512f58
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_init_0x94_byte_struct(uint16_t *param_1)

{
  if ((param_1 != (uint16_t *)0x0) ||
     (param_1 = (uint16_t *)heap_alloc((void *)0x94), param_1 != (uint16_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(uint32_t *)(param_1 + 2) = 0;
    *(uint32_t *)(param_1 + 4) = 0;
    *(uint32_t *)(param_1 + 6) = 0;
    *(uint32_t *)(param_1 + 8) = 0;
    *(uint32_t *)(param_1 + 10) = 0;
    *(uint32_t *)(param_1 + 0xc) = 0;
    *(uint32_t *)(param_1 + 0xe) = 0;
    *(uint32_t *)(param_1 + 0x10) = 0;
    param_1[0x12] = 0;
    *(uint32_t *)(param_1 + 0x14) = 0;
    *(uint32_t *)(param_1 + 0x16) = 0;
    *(uint32_t *)(param_1 + 0x18) = 0;
    *(uint32_t *)(param_1 + 0x1a) = 0;
    *(uint32_t *)(param_1 + 0x1c) = 0;
    *(uint32_t *)(param_1 + 0x1e) = 0;
    *(uint32_t *)(param_1 + 0x20) = 0;
    *(uint32_t *)(param_1 + 0x22) = 2;
    *(uint32_t *)(param_1 + 0x24) = 0;
    *(uint32_t *)(param_1 + 0x26) = 0;
    *(uint32_t *)(param_1 + 0x28) = 0;
    *(uint32_t *)(param_1 + 0x2a) = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    *(uint8_t *)(param_1 + 0x38) = 0;
    *(uint8_t *)((int)param_1 + 0x71) = 0;
    *(uint8_t *)(param_1 + 0x39) = 0;
    *(uint8_t *)((int)param_1 + 0x73) = 0;
    *(uint32_t *)(param_1 + 0x3a) = 0;
    *(uint32_t *)(param_1 + 0x3c) = 0;
    *(uint32_t *)(param_1 + 0x3e) = 0;
    *(uint32_t *)(param_1 + 0x40) = 0;
    *(uint32_t *)(param_1 + 0x42) = 0;
    *(uint8_t *)(param_1 + 0x44) = 0;
    *(uint8_t *)((int)param_1 + 0x89) = 0;
    *(uint8_t *)(param_1 + 0x45) = 0;
    *(uint8_t *)((int)param_1 + 0x8b) = 0;
    *(uint8_t *)(param_1 + 0x46) = 0;
    *(uint8_t *)((int)param_1 + 0x8d) = 0;
    *(uint8_t *)(param_1 + 0x47) = 0;
    *(uint8_t *)((int)param_1 + 0x8f) = 0;
    *(uint8_t *)(param_1 + 0x48) = 0;
    *(uint8_t *)((int)param_1 + 0x91) = 1;
  }
  return;
}
