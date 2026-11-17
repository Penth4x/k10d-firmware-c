/* @k10d initialize_36_byte_struct @ 0x1044a940
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Initializes a 36-byte structure with specific default values, allocating it if the
 *   input pointer is null.
 * summary:
 *   The function accepts a pointer to a 36-byte structure. If the pointer is null, it
 *   allocates 0x24 bytes using heap_alloc. It then sets the first two 32-bit words to 0,
 *   sets two specific bytes at offsets 0x0C and 0x0D to 1, and zeroes the remaining fields.
 *   The caller is initialize_camera_mode_context_10446ad4, but the specific camera
 *   subsystem role is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_36_byte_struct(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x24), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(uint16_t *)(param_1 + 2) = 0;
    *(uint16_t *)((int)param_1 + 10) = 0;
    *(uint8_t *)(param_1 + 3) = 1;
    *(uint8_t *)((int)param_1 + 0xd) = 1;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  return;
}
