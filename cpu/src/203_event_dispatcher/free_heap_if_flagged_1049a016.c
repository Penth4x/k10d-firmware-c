/* @k10d free_heap_if_flagged_1049a016 @ 0x1049a016
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Frees a heap block via heap_free when the pointer is non-NULL and the low bit of the
 *   flag parameter is set.
 * summary:
 *   Checks that param_1 is non-NULL and that bit 0 of param_2 is set; if both hold, calls
 *   heap_free on param_1. This matches the C++ operator delete idiom where the low flag bit
 *   indicates the object was heap-allocated. No other side effects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_heap_if_flagged_1049a016(void *param_1,uint param_2)

{
  if ((param_1 != (void *)0x0) && ((param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
