/* @k10d alloc_or_zero_two_words @ 0x104e62c6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Ensures a 2-word buffer is allocated (8 bytes) and zeroed, using the caller's pointer
 *   or a fresh allocation.
 * summary:
 *   If param_1 is NULL, it calls alloc_system_heap_block(8) to obtain an 8-byte buffer. It
 *   then writes 0 to the first 32-bit word and 0 to the first byte of the second word,
 *   effectively zeroing the first 5 bytes of the 8-byte region. The function returns void,
 *   so the newly allocated pointer is not returned to the caller.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_or_zero_two_words(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)alloc_system_heap_block((void *)8), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    *(uint8_t *)(param_1 + 1) = 0;
  }
  return;
}
