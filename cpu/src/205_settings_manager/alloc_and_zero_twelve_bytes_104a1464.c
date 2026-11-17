/* @k10d alloc_and_zero_twelve_bytes_104a1464 @ 0x104a1464
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates 12 bytes from the heap if needed and zeroes the three resulting words.
 * summary:
 *   Takes a pointer in r4; if it is NULL, calls heap_alloc(0xc) to obtain 12 bytes. On
 *   success (or if the input was non-NULL), writes 0 to the first three 32-bit words of the
 *   buffer. The allocated pointer is not returned to the caller, so the result is only
 *   usable if the caller already held the pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_zero_twelve_bytes_104a1464(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xc), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}
