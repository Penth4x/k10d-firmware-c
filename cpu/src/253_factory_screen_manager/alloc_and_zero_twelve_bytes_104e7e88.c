/* @k10d alloc_and_zero_twelve_bytes_104e7e88 @ 0x104e7e88
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Allocates 12 bytes from the heap if param_1 is NULL, then zeroes the first 12 bytes of
 *   the buffer.
 * summary:
 *   Takes a pointer in param_1; if it is NULL, calls heap_alloc(0xc) to obtain a 12-byte
 *   buffer. Regardless of whether the buffer was pre-existing or newly allocated, it writes
 *   zero to the first two 32-bit words and the third byte, effectively clearing the first
 *   12 bytes. The function returns void, so the allocated pointer is not returned to the
 *   caller, implying the caller may manage the pointer separately or this is a helper that
 *   only ensures the memory is zeroed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_zero_twelve_bytes_104e7e88(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xc), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(uint8_t *)(param_1 + 2) = 0;
  }
  return;
}
