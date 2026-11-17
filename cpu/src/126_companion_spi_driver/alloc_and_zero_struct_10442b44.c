/* @k10d alloc_and_zero_struct_10442b44 @ 0x10442b44
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x24-byte structure on the heap (or uses a provided pointer) and zeroes all
 *   nine 32-bit fields.
 * summary:
 *   Takes an optional pointer in r4; if NULL, calls heap_alloc for 0x24 bytes. If
 *   allocation succeeds (or a valid pointer was passed), it writes zero to the first nine
 *   words of the structure. The caller is a virtual method slot, suggesting this is a
 *   constructor or initialization routine for a 36-byte object. No camera-specific
 *   registers or subsystems are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_zero_struct_10442b44(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x24), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  return;
}
