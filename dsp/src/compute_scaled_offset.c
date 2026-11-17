/* @k10d compute_scaled_offset @ 0x000f766e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Computes a scaled integer offset from two parameters based on a bitfield condition in
 *   the third.
 * summary:
 *   The function extracts bits 20-28 of param_3. If that 9-bit field is zero, it returns
 *   (param_1 >> 20) * 0x200000, or 0 if the result is zero. Otherwise, it returns param_1 *
 *   2 if param_1 * 2 equals -param_3 * 2, otherwise it returns param_1 * 2. The logic
 *   appears to be a specialized offset or size calculation, possibly for memory alignment
 *   or buffer indexing, but the specific domain is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x000f7686) */
/* WARNING: Removing unreachable block (ram,0x000f768a) */
/* WARNING: Removing unreachable block (ram,0x000f768e) */

int compute_scaled_offset(uint param_1, uint32_t param_2, uint param_3, uint32_t param_x3)

{
  int iVar1;
  
  if ((param_3 >> 0x14 & 0x7ff) == 0) {
    iVar1 = (param_1 >> 0x14) * 0x200000;
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = param_1 * 2;
    if ((iVar1 != 0) && (iVar1 + param_3 * -2 == 0)) {
      return iVar1;
    }
  }
  return iVar1;
}
