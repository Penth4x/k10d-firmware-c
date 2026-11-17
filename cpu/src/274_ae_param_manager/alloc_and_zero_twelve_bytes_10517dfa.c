/* @k10d alloc_and_zero_twelve_bytes_10517dfa @ 0x10517dfa
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Allocates 12 bytes from the heap if param_1 is NULL, then zeroes the first three words
 *   of the buffer.
 * summary:
 *   The function accepts a pointer in param_1. If it is NULL, it calls heap_alloc to obtain
 *   0xc (12) bytes. If the allocation succeeds, it sets the first three 32-bit words of the
 *   resulting buffer to 0. If param_1 was non-NULL, it simply zeroes the first three words
 *   of the provided buffer. The function returns void, so the allocated pointer is not
 *   returned to the caller.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_zero_twelve_bytes_10517dfa(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xc), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}
