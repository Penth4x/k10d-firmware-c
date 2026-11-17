/* @k10d zero_memory_region @ 0x104aca68
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Zeroes a memory region of param_2 bytes starting at param_1, using a 3-byte word loop
 *   for the bulk and a byte loop for the remainder.
 * summary:
 *   Calls extract_bitfield_with_offset(param_2,4,0) to obtain a count (likely a word count
 *   or aligned size). If the count is positive, it clears the region in 3-byte chunks
 *   (writing three zero bytes at a time) and then clears any remaining bytes one at a time.
 *   A second, redundant pass over the same region is performed when param_2 is not a
 *   multiple of 4, suggesting a defensive or alignment-related double-clear. No camera-
 *   specific MMIO or subsystem behavior is evident from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_memory_region(uint32_t *param_1, uint param_2, uint32_t param_x2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = extract_bitfield_with_offset(param_2,4,0);
  if (iVar2 != 0) {
    iVar1 = iVar2 + -3;
    if (2 < iVar1) {
      do {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        iVar1 = iVar1 + -3;
        param_1 = param_1 + 3;
      } while (-1 < iVar1);
    }
    for (iVar1 = iVar1 + 2; -1 < iVar1; iVar1 = iVar1 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  if (((param_2 & 3) != 0) && (iVar2 != 0)) {
    iVar2 = iVar2 + -3;
    if (2 < iVar2) {
      do {
        *(uint8_t *)param_1 = 0;
        *(uint8_t *)((int)param_1 + 1) = 0;
        *(uint8_t *)((int)param_1 + 2) = 0;
        iVar2 = iVar2 + -3;
        param_1 = (uint32_t *)((int)param_1 + 3);
      } while (-1 < iVar2);
    }
    for (iVar2 = iVar2 + 2; -1 < iVar2; iVar2 = iVar2 + -1) {
      *(uint8_t *)param_1 = 0;
      param_1 = (uint32_t *)((int)param_1 + 1);
    }
  }
  return;
}
