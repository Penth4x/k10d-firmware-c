/* @k10d store_vtable_and_free_if_flagged_10527f40 @ 0x10527f40
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 284_event_display_buffer (unit names are model-proposed)
 * purpose:
 *   Writes a vtable pointer into the object and frees it if the low bit of the second
 *   argument is set.
 * summary:
 *   This is virtual slot 1 of cls_105f9304. It stores the constant 0x105d9168 (a vtable
 *   pointer) into the first word of the object pointed to by param_1. If param_2 has bit 0
 *   set, it calls heap_free on the object, which matches the C++ operator delete idiom of
 *   storing a vtable before freeing a heap block. The function returns void.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_vtable_and_free_if_flagged_10527f40(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105d9168/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
