/* @k10d zero_init_36_byte_struct @ 0x10512cf8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Zero-initializes a 36-byte heap-allocated structure, allocating it first if the pointer
 *   is NULL.
 * summary:
 *   The function takes a pointer to a 36-byte (0x24) structure. If the pointer is NULL, it
 *   allocates 0x24 bytes using heap_alloc. If allocation succeeds (or if the input pointer
 *   was non-NULL), it writes zeros to the entire 36-byte block. It is called by the
 *   constructor of cls_1059e4d0 to initialize a newly allocated object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_init_36_byte_struct(uint16_t *param_1)

{
  if ((param_1 != (uint16_t *)0x0) ||
     (param_1 = (uint16_t *)heap_alloc((void *)0x24), param_1 != (uint16_t *)0x0)) {
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
  }
  return;
}
