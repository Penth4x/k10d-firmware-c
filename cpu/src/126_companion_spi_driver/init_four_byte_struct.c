/* @k10d init_four_byte_struct @ 0x1044b870
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Initializes a 4-byte structure to zero, allocating it from the heap if the input
 *   pointer is NULL.
 * summary:
 *   The function accepts a pointer to a 4-byte object. If the pointer is NULL, it allocates
 *   4 bytes using heap_alloc. If the pointer is valid or allocation succeeds, it sets all
 *   four bytes of the structure to 0. It is called by the constructor of cls_105a1a84 and
 *   two other functions to initialize a small data field.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_four_byte_struct(uint8_t *param_1)

{
  if ((param_1 != (uint8_t *)0x0) ||
     (param_1 = (uint8_t *)heap_alloc((void *)4), param_1 != (uint8_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}
