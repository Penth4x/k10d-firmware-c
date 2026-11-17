/* @k10d free_heap_if_flagged_104d58a6 @ 0x104d58a6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Frees a heap block when the pointer is non-NULL and the low bit of the flags parameter
 *   is set.
 * summary:
 *   Checks that param_1 is non-zero and that bit 0 of param_2 is set before calling
 *   heap_free on param_1. The heap_free callee is the standard heap allocator free (also
 *   used as C++ operator delete). No other side effects or MMIO accesses are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_heap_if_flagged_104d58a6(int param_1,uint param_2)

{
  if ((param_1 != 0) && ((param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
