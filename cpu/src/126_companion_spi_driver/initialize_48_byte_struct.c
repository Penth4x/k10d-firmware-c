/* @k10d initialize_48_byte_struct @ 0x10441442
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Zero-initializes a 48-byte structure, allocating it from the heap if the input pointer
 *   is null.
 * summary:
 *   The function accepts a pointer to a 48-byte object. If the pointer is null, it
 *   allocates 0x30 bytes using heap_alloc. It then sets all 12 32-bit words of the
 *   structure to zero. It is called as virtual method slot 2 of class cls_105a0bec.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_48_byte_struct(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x30), param_1 != (uint32_t *)0x0)) {
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
  }
  return;
}
