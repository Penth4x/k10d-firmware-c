/* @k10d alloc_and_zero_twelve_bytes_10516f56 @ 0x10516f56
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Allocates 12 bytes from the heap if the input pointer is null, then zeroes the first 12
 *   bytes of the resulting pointer.
 * summary:
 *   Takes a pointer parameter; if it is null, calls heap_alloc for 0xc (12) bytes. If
 *   allocation succeeds (or the input was non-null), it writes zero to the first two 32-bit
 *   words and the third byte of the buffer. Returns void, but the allocated pointer is not
 *   returned to the caller.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_zero_twelve_bytes_10516f56(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xc), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(uint8_t *)(param_1 + 2) = 0;
  }
  return;
}
