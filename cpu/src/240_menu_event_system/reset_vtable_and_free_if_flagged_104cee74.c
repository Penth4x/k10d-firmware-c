/* @k10d reset_vtable_and_free_if_flagged_104cee74 @ 0x104cee74
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 240_menu_event_system (unit names are model-proposed)
 * purpose:
 *   Resets the object's vtable pointer to 0x105b9734 and frees the heap block if the low
 *   bit of param_2 is set.
 * summary:
 *   This function is virtual slot 1 of class cls_105b9734. It writes the class vtable
 *   address (0x105b9734) to offset 4 of the object, then calls heap_free on the object if
 *   param_2 & 1 is true. It is called by several verified deleting destructors of other
 *   classes, suggesting it serves as a base-class cleanup or virtual destructor helper that
 *   marks the object and conditionally releases memory.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_vtable_and_free_if_flagged_104cee74(void *param_1,uint param_2)

{
  if ((param_1 != (void *)0x0) &&
     (*(uint32_t *)((int)param_1 + 4) = 0x105b9734/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
