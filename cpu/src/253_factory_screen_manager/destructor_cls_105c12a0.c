/* @k10d destructor_cls_105c12a0 @ 0x104e7112
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Deletes a cls_105c12a0 object by storing its vtable pointer and freeing the heap block
 *   if the flag bit is set.
 * summary:
 *   This is virtual method slot 1 (the deleting destructor) of class cls_105c12a0. It first
 *   checks that param_1 is non-NULL, then writes the vtable address 0x105c12a0 into the
 *   object's first word. If bit 0 of param_2 is set, it calls heap_free on the object
 *   pointer, which matches the C++ operator delete idiom of storing the vtable before
 *   freeing. The caller init_class_105aa3ec_object is a verified constructor/destructor
 *   body of another class, consistent with this being a destructor.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destructor_cls_105c12a0(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105c12a0/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
