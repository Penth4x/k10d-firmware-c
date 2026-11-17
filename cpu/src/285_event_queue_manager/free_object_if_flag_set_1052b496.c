/* @k10d free_object_if_flag_set_1052b496 @ 0x1052b496
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Stores a vtable pointer at offset 0x414 and frees the object if the low bit of param_2
 *   is set.
 * summary:
 *   This is virtual slot 1 of cls_105f9ab0. It writes the class vtable address (0x105f9ab0)
 *   into the object at offset 0x414, then calls heap_free on the object pointer if param_2
 *   has bit 0 set. This matches the C++ operator delete pattern: restore the vtable, then
 *   free the heap block if the flag indicates the object was heap-allocated.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_if_flag_set_1052b496(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(void **)(param_1 + 0x414) = &DAT_105f9ab0/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
