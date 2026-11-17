/* @k10d alloc_and_init_0x2050_buffer @ 0x10512e12
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x2050-byte heap buffer and initializes its header fields and two sub-
 *   blocks.
 * summary:
 *   If param_1 is NULL, allocates 0x2050 bytes via heap_alloc. Initializes the first 8
 *   words to 0x100, the next 9 words to 0x2000, and zeroes several trailing fields. Calls
 *   fill_byte_array twice to initialize sub-structures at offsets 0x16 and 0x816. Returns
 *   the pointer to the initialized buffer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t * alloc_and_init_0x2050_buffer(uint16_t *param_1)

{
  if ((param_1 != (uint16_t *)0x0) ||
     (param_1 = (uint16_t *)heap_alloc((void *)0x2050), param_1 != (uint16_t *)0x0)) {
    *param_1 = 0x100;
    param_1[1] = 0x100;
    param_1[2] = 0x100;
    param_1[3] = 0x100;
    param_1[4] = 0x100;
    param_1[5] = 0x100;
    param_1[6] = 0x100;
    param_1[7] = 0x100;
    param_1[8] = 0;
    param_1[9] = 0x2000;
    param_1[10] = 0x2000;
    param_1[0xb] = 0x2000;
    param_1[0xc] = 0x2000;
    param_1[0xd] = 0x2000;
    param_1[0xe] = 0x2000;
    param_1[0xf] = 0x2000;
    param_1[0x10] = 0x2000;
    param_1[0x11] = 0x2000;
    *(uint32_t *)(param_1 + 0x12) = 0;
    *(uint32_t *)(param_1 + 0x14) = 0;
    *(uint32_t *)(param_1 + 0x1016) = 0;
    *(uint32_t *)(param_1 + 0x1018) = 0;
    param_1[0x101a] = 0;
    *(uint32_t *)(param_1 + 0x1024) = 0;
    *(uint8_t *)(param_1 + 0x1026) = 0;
    fill_byte_array(param_1 + 0x16,0,0x400);
    fill_byte_array(param_1 + 0x816,0,0x400);
  }
  return param_1;
}
