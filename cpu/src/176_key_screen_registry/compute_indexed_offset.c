/* @k10d compute_indexed_offset @ 0x10482a52
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Calculates a 16-bit offset based on a step size and a count limit.
 * summary:
 *   The function iterates from param_2 to param_3 * 2 in steps of param_2, incrementing a
 *   counter iVar2. It then returns the result of (param_2 * iVar2 - 2 * param_3) masked to
 *   16 bits. The logic appears to be a specific arithmetic calculation, possibly for buffer
 *   indexing or timing, but the exact domain role is not clear from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint compute_indexed_offset(uint32_t param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  for (iVar1 = param_2; iVar1 <= param_3 * 2; iVar1 = iVar1 + param_2) {
    iVar2 = iVar2 + 1;
  }
  return param_2 * iVar2 + param_3 * -2 & 0xffff;
}
