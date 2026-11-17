/* @k10d alloc_zeroed_word_10476ee6 @ 0x10476ee6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 4-byte heap block and zeroes its first word, or uses a provided pointer if
 *   non-NULL.
 * summary:
 *   If param_1 is NULL, calls heap_alloc(4) to obtain a 4-byte block; if the allocation
 *   succeeds (or param_1 was already non-NULL), writes 0 to the first word of the block.
 *   The allocated pointer is not returned to the caller, so the result is only observable
 *   via the side effect of zeroing memory. Called as virtual slot 2 of cls_105aa5b4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_zeroed_word_10476ee6(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)4), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
  }
  return;
}
