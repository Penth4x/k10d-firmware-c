/* @k10d alloc_and_zero_twelve_bytes_1049f548 @ 0x1049f548
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates 12 bytes from the heap if param_1 is NULL, then zeroes the first three words
 *   of the buffer.
 * summary:
 *   Takes a pointer in r4; if it is NULL, calls heap_alloc(0xc) to obtain a 12-byte block.
 *   Regardless of whether the pointer was provided or newly allocated, it writes 0 to the
 *   first three 32-bit words of the buffer. The allocated pointer is returned in r4 even
 *   though the function is typed void.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_zero_twelve_bytes_1049f548(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xc), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}
