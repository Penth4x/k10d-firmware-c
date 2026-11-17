/* @k10d alloc_zeroed_16_byte_block @ 0x10527b38
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 283_display_state_alloc (unit names are model-proposed)
 * purpose:
 *   Allocates a 16-byte heap block (or uses a provided pointer) and zeroes its four words.
 * summary:
 *   If param_1 is NULL, calls heap_alloc(0x10) to obtain a 16-byte block; otherwise uses
 *   the caller-supplied pointer. In either case, writes 0 to the first four 32-bit words of
 *   the block. No other side effects or camera-specific registers are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_zeroed_16_byte_block(uint32_t *param_1)

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
