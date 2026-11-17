/* @k10d reset_vtable_and_free_if_flagged_104968f2 @ 0x104968f2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Writes a vtable pointer into the object and frees it when the low bit of the flag
 *   parameter is set.
 * summary:
 *   Takes an object pointer and a flag word. If the pointer is non-NULL, it overwrites the
 *   first word with the address 0x105b5224 (the vtable of cls_105b5224). If bit 0 of the
 *   flag parameter is set, it calls heap_free on the object. This is the standard Cfront
 *   deleting-destructor pattern: reset the vtable to prevent double-delete, then release
 *   the heap block if the object was heap-allocated.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_vtable_and_free_if_flagged_104968f2(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = (uint32_t)&DAT_105b5224/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
