/* @k10d reset_vtable_and_free_if_owned_104ec364 @ 0x104ec364
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Overwrites the object's vtable pointer with 0x105c2a40 and frees the heap block when
 *   the ownership flag is set.
 * summary:
 *   This is virtual slot 1 of class cls_105c2a40, invoked by the deleting destructors of
 *   several sibling classes. It writes the class vtable address into the first word of the
 *   object, then calls heap_free on the object pointer if bit 0 of param_2 is set. The
 *   pattern matches a C++ deleting destructor that resets the vtable before releasing the
 *   allocation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_vtable_and_free_if_owned_104ec364(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105c2a40/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
