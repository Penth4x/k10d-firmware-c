/* @k10d free_heap_if_flagged_104d5ac0 @ 0x104d5ac0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Frees a heap pointer only when it is non-NULL and the low bit of the flags parameter is
 *   set.
 * summary:
 *   Checks that param_1 is non-NULL and that bit 0 of param_2 is set; if both hold, calls
 *   heap_free(param_1). No other side effects. The low-bit test matches the heap_free
 *   convention where the flag bit indicates the block was actually allocated.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_heap_if_flagged_104d5ac0(int param_1,uint param_2)

{
  if ((param_1 != 0) && ((param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
