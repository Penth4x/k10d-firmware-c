/* @k10d zero_initialize_0x30_struct @ 0x10508be4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Zeroes a 0x30-byte heap-allocated structure, allocating it first if the pointer is
 *   NULL.
 * summary:
 *   If param_1 is NULL it calls heap_alloc(0x30) to obtain a 0x30-byte block; on success it
 *   writes zeros across the entire 0x30-byte region (word and byte stores covering offsets
 *   0x00-0x1f). The function returns void and does not store the pointer back into the
 *   caller's variable, so the allocation is only useful when the caller already supplied a
 *   non-NULL buffer. It is invoked by the constructor of cls_1059e4d0 as part of object
 *   initialization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_initialize_0x30_struct(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x30), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(uint8_t *)(param_1 + 2) = 0;
    *(uint8_t *)((int)param_1 + 9) = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(uint8_t *)(param_1 + 5) = 0;
    *(uint8_t *)((int)param_1 + 0x15) = 0;
    *(uint8_t *)((int)param_1 + 0x16) = 0;
    param_1[6] = 0;
    *(uint8_t *)(param_1 + 7) = 0;
    param_1[8] = 0;
    *(uint8_t *)((int)param_1 + 0x1d) = 0;
    param_1[9] = 0;
    *(uint8_t *)((int)param_1 + 0x1e) = 0;
    param_1[10] = 0;
    *(uint8_t *)((int)param_1 + 0x1f) = 0;
    param_1[0xb] = 0;
  }
  return;
}
