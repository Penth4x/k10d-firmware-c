/* @k10d alloc_or_zero_four_words @ 0x104ed9a6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Uses param_1 if non-null, otherwise heap-allocates 0x10 bytes, then zeroes the first
 *   four words.
 * summary:
 *   Takes a pointer in r4; if it is NULL it calls heap_alloc(0x16) (0x10 bytes) and uses
 *   the result. In either case it writes 0 to the first four 32-bit words of the buffer.
 *   The allocated pointer is not returned, so the caller must already hold the pointer or
 *   the allocation is discarded when param_1 was NULL.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_or_zero_four_words(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x10), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}
