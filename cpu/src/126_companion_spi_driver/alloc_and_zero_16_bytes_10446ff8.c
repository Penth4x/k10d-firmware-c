/* @k10d alloc_and_zero_16_bytes_10446ff8 @ 0x10446ff8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Allocates 16 bytes from the heap (or uses a provided pointer) and zeroes the entire
 *   block.
 * summary:
 *   If param_1 is NULL, it calls heap_alloc(0x10) to obtain a 16-byte block. It then calls
 *   initialize_lens_update_object with the pointer and size 0x10, followed by explicitly
 *   setting all 16 bytes to zero. Returns the pointer to the zeroed memory block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10447012) overlaps instruction at (ram,0x10447010)
    */

uint8_t * alloc_and_zero_16_bytes_10446ff8(uint8_t *param_1)

{
  if ((param_1 != (uint8_t *)0x0) ||
     (param_1 = (uint8_t *)heap_alloc((void *)0x10), param_1 != (uint8_t *)0x0)) {
    initialize_lens_update_object(param_1,0x10);
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
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  return param_1;
}
