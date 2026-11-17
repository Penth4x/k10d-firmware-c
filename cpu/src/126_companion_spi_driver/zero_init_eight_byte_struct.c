/* @k10d zero_init_eight_byte_struct @ 0x1044be2e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Zero-initializes an 8-byte structure, allocating it from the heap if the input pointer
 *   is NULL.
 * summary:
 *   The function accepts a pointer to an 8-byte region. If the pointer is NULL, it calls
 *   heap_alloc to obtain 8 bytes. It then writes zero to all 8 bytes of the structure. The
 *   caller cls_105a1a84_new uses this to initialize a newly allocated object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_init_eight_byte_struct(uint8_t *param_1)

{
  if ((param_1 != (uint8_t *)0x0) ||
     (param_1 = (uint8_t *)heap_alloc((void *)8), param_1 != (uint8_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return;
}
