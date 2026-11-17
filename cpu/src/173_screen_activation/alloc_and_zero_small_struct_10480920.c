/* @k10d alloc_and_zero_small_struct_10480920 @ 0x10480920
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 173_screen_activation (unit names are model-proposed)
 * purpose:
 *   Allocates a 12-byte heap block (or uses a provided pointer) and zeroes its three 32-bit
 *   fields.
 * summary:
 *   If param_1 is NULL, calls heap_alloc(0xc) to obtain a 12-byte block; on success (or if
 *   param_1 was non-NULL) it writes 0 to the first three words of the block. The caller is
 *   virtual method slot 2 of cls_105ab50c, suggesting this is a constructor or reset
 *   routine for a small 3-word object. No camera-specific MMIO or subsystem behavior is
 *   visible in the code itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_zero_small_struct_10480920(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xc), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}
