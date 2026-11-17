/* @k10d alloc_and_zero_struct_1041a95a @ 0x1041a95a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Allocates a 32-byte structure on the heap (or uses a provided pointer) and zeroes all
 *   eight words.
 * summary:
 *   If param_1 is NULL, it calls heap_alloc(0x20) to obtain a 32-byte block. If the pointer
 *   is non-NULL or allocation succeeds, it writes zero to all eight 32-bit words of the
 *   structure. The function returns void, so the allocated pointer is not returned to the
 *   caller, implying the caller likely passes a pre-allocated buffer or the result is
 *   handled elsewhere.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_zero_struct_1041a95a(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x20), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return;
}
