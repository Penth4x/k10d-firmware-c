/* @k10d free_heap_block_if_flagged_10442eb4 @ 0x10442eb4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Frees the heap block pointed to by param_1 when param_2 has bit 0 set.
 * summary:
 *   Checks that param_1 is non-NULL and that bit 0 of param_2 is set; if both hold, calls
 *   heap_free on param_1. Acts as a conditional deleter, consistent with the C++ operator
 *   delete idiom where the low bit of the size/flags word indicates a heap allocation. No
 *   other side effects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_heap_block_if_flagged_10442eb4(void *param_1,uint param_2)

{
  if ((param_1 != (void *)0x0) && ((param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
