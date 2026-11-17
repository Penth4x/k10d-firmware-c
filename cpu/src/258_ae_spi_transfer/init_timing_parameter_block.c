/* @k10d init_timing_parameter_block @ 0x104f4722
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 258_ae_spi_transfer (unit names are model-proposed)
 * purpose:
 *   Initializes a 0x44-byte heap-allocated structure with fixed timing values (64000,
 *   32000, 96000) and zeroed fields.
 * summary:
 *   Allocates a 0x44-byte block via heap_alloc if param_1 is NULL, then writes specific
 *   constants to the first four words (64000, 32000, 32000, 96000) and zeros the remaining
 *   fields up to offset 0x40. The caller is a verified constructor for a large class
 *   object, suggesting this initializes a sub-structure or member block within that object.
 *   The specific values resemble timing or frame-related parameters but the exact subsystem
 *   is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_timing_parameter_block(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x44), param_1 != (uint32_t *)0x0)) {
    *(uint8_t *)(param_1 + 0x10) = 0;
    *param_1 = 64000;
    param_1[1] = 32000;
    param_1[2] = 32000;
    param_1[3] = 96000;
    param_1[4] = 0;
    param_1[8] = 0;
    param_1[0xc] = 0;
    param_1[5] = 0;
    param_1[9] = 0;
    param_1[0xd] = 0;
    param_1[6] = 0;
    param_1[10] = 0;
    param_1[0xe] = 0;
    param_1[7] = 0;
    param_1[0xb] = 0;
    param_1[0xf] = 0;
  }
  return;
}
