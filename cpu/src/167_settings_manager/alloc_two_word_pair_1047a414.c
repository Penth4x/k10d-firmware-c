/* @k10d alloc_two_word_pair_1047a414 @ 0x1047a414
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates an 8-byte heap block and zero-initializes both 32-bit words, or uses the
 *   provided pointer if non-NULL.
 * summary:
 *   If param_1 is NULL, calls heap_alloc(8) to obtain an 8-byte block. If the pointer is
 *   valid (either input or newly allocated), writes 0 to the first and second 32-bit words.
 *   Returns void, but the allocated pointer is not returned to the caller, so the caller
 *   must already hold a reference or this is a helper that only initializes an existing
 *   structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_two_word_pair_1047a414(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)8), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}
