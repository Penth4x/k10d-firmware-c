/* @k10d alloc_zeroed_word_1047a70a @ 0x1047a70a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 4-byte heap block and zero-initializes it, or uses the provided pointer if
 *   non-NULL.
 * summary:
 *   If param_1 is NULL, it calls heap_alloc(4) to obtain a 4-byte block. In either case, if
 *   the resulting pointer is non-NULL, it writes 0 to the first word of the block. The
 *   function returns void, so the allocated pointer is not returned to the caller, though
 *   the caller (a virtual method slot) may rely on side effects or the input pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_zeroed_word_1047a70a(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)4), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
  }
  return;
}
