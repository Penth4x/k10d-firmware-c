/* @k10d reset_vtable_and_free_if_flagged_103c71c8 @ 0x103c71c8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Resets the object's vtable pointer to 0x105956e0 and frees the heap block when param_2
 *   bit 0 is set.
 * summary:
 *   Takes a heap-allocated object pointer and a flags word. If the pointer is non-NULL, it
 *   overwrites the vtable pointer at offset 0x10 with the address 0x105956e0. If bit 0 of
 *   the flags parameter is set, it calls heap_free to release the object. This pattern is
 *   typical of a C++ deleting destructor or a cleanup helper that invalidates the vtable
 *   before deallocation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_vtable_and_free_if_flagged_103c71c8(void *param_1,uint param_2)

{
  if ((param_1 != 0) &&
     (*(void **)((int)param_1 + 0x10) = &DAT_105956e0/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
