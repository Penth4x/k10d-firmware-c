/* @k10d cls_1059e3e0_delete @ 0x10427c96
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_1059e3e0: resets the vtable pointer and frees the
 *   object when the flag bit is set.
 * summary:
 *   Sets the object's first word to the vtable address 0x1059e3e0 (marking it deleted). If
 *   param_2 bit 0 is set, calls heap_free on the object. Called by the deleting destructors
 *   of cls_1059e408 and cls_1059e430 as a base-class cleanup step. The class is 4 bytes
 *   (vtable pointer only), so no member destruction is needed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059e3e0_delete(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = (uint32_t)&DAT_1059e3e0/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
