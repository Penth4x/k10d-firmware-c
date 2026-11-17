/* @k10d update_two_pointer_pairs @ 0x000d256c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Reads two values from memory locations derived from base pointers and stores them into
 *   four global variables.
 * summary:
 *   The function takes two base pointers (_DAT_0003cc88 and _DAT_0003cc8c), adds 8 to each,
 *   and calls sum_abs_short_differences twice per base. The first call uses the adjusted
 *   base directly, while the second adds an offset calculated from DAT_0003cd4e * 2. The
 *   results are stored in _DAT_0003ccc8, _DAT_0003ccca, _DAT_0003cccc, and _DAT_0003ccce
 *   respectively. The role of sum_abs_short_differences and the specific data structures
 *   involved are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_two_pointer_pairs(void)

{
  int iVar1;
  
  iVar1 = _DAT_0003cc88 + 8;
  _DAT_0003ccc8 = sum_abs_short_differences((void *)iVar1);
  _DAT_0003ccca = sum_abs_short_differences((void *)(iVar1 + (uint)DAT_0003cd4e * 2));
  iVar1 = _DAT_0003cc8c + 8;
  _DAT_0003cccc = sum_abs_short_differences((void *)iVar1);
  _DAT_0003ccce = sum_abs_short_differences((void *)(iVar1 + (uint)DAT_0003cd4e * 2));
  return;
}
