/* @k10d allocate_and_init_0x84_struct @ 0x104e5134
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t * allocate_and_init_0x84_struct(uint8_t *param_1)

{
  if ((param_1 != (uint8_t *)0x0) ||
     (param_1 = (uint8_t *)heap_alloc((void *)0x84), param_1 != (uint8_t *)0x0)) {
    *param_1 = 0;
    *(uint32_t *)(param_1 + 4) = 0;
    *(uint32_t *)(param_1 + 8) = 0;
    *(uint32_t *)(param_1 + 0xc) = 0;
    *(uint32_t *)(param_1 + 0x10) = 0;
    *(uint32_t *)(param_1 + 0x14) = 0;
    *(uint32_t *)(param_1 + 0x18) = 0;
    *(uint32_t *)(param_1 + 0x1c) = 0;
    *(uint32_t *)(param_1 + 0x20) = 0;
    *(uint32_t *)(param_1 + 0x28) = 0;
    *(uint32_t *)(param_1 + 0x2c) = 0;
    *(uint32_t *)(param_1 + 0x30) = 0;
    *(uint32_t *)(param_1 + 0x34) = 0;
    *(uint32_t *)(param_1 + 0x38) = 0;
    param_1[0x3c] = 1;
    *(uint32_t *)(param_1 + 0x40) = 0;
    *(uint32_t *)(param_1 + 0x44) = 0;
    *(uint32_t *)(param_1 + 0x48) = 0;
    *(uint32_t *)(param_1 + 0x4c) = 0;
    *(uint32_t *)(param_1 + 0x50) = 0;
    *(uint32_t *)(param_1 + 0x70) = 0;
    *(uint32_t *)(param_1 + 0x74) = 0;
    *(uint32_t *)(param_1 + 0x78) = 0;
    *(uint32_t *)(param_1 + 0x7c) = 0;
    *(uint32_t *)(param_1 + 0x80) = 0;
    *(uint32_t *)(param_1 + 0x54) = 0;
    *(uint32_t *)(param_1 + 0x58) = 0;
    *(uint32_t *)(param_1 + 0x5c) = 0;
    *(uint32_t *)(param_1 + 0x60) = 0;
    *(uint32_t *)(param_1 + 100) = 0;
    *(uint32_t *)(param_1 + 0x68) = 0;
    *(uint32_t *)(param_1 + 0x6c) = 0;
    *(uint32_t *)(param_1 + 0x24) = 0;
    init_object_with_heap_buffer_104e4f44(param_1);
  }
  return param_1;
}
