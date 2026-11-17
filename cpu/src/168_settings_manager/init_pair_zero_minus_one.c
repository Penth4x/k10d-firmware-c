/* @k10d init_pair_zero_minus_one @ 0x1047c8d4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Ensures a pointer to an 8-byte pair is valid, allocating it if NULL, then sets the
 *   first word to 0 and the second to 0xffffffff.
 * summary:
 *   Takes a pointer parameter; if it is NULL, allocates 8 bytes via heap_alloc. If the
 *   resulting pointer is non-NULL, writes 0 to the first 32-bit word and 0xffffffff to the
 *   second. The caller is a virtual method slot, suggesting this initializes a small object
 *   or state pair, but the specific camera subsystem role is not determinable from the code
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_pair_zero_minus_one(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)8), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0xffffffff;
  }
  return;
}
