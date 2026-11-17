/* @k10d zero_initialize_60_byte_object @ 0x10512c86
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Zero-initializes a 60-byte heap object, allocating it first if the input pointer is
 *   NULL.
 * summary:
 *   If param_1 is NULL, it calls heap_alloc for 0x3c (60) bytes. It then writes zero to the
 *   first 13 words (52 bytes) and the bytes at offsets 0x34 and 0x35, leaving the final
 *   byte (offset 0x3b) untouched. The caller is a verified constructor for a 0x8d8-byte
 *   class, suggesting this function initializes a specific 60-byte sub-structure or member
 *   within that larger object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_initialize_60_byte_object(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x3c), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    *(uint8_t *)(param_1 + 0xd) = 0;
    *(uint8_t *)((int)param_1 + 0x35) = 0;
    param_1[0xe] = 0;
  }
  return;
}
