/* @k10d alloc_and_zero_struct_104ae8ea @ 0x104ae8ea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x14-byte heap block (or uses a provided pointer) and zeroes its five
 *   32-bit fields.
 * summary:
 *   Takes an optional pointer in r4; if NULL it calls heap_alloc(0x14). On success it
 *   writes zero to the first five words of the block. The caller at 0x104ae40c receives the
 *   pointer in r4. No camera-specific MMIO or subsystem behavior is visible in this
 *   function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_zero_struct_104ae8ea(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x14), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}
