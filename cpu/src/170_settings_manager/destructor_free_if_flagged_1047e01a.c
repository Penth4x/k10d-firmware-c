/* @k10d destructor_free_if_flagged_1047e01a @ 0x1047e01a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Stores the class vtable pointer into the object and frees it if the low bit of param_2
 *   is set.
 * summary:
 *   This is virtual slot 1 (the deleting destructor) of class cls_105aae4c. It writes the
 *   vtable address 0x105aae4c into the first word of the object, then calls heap_free on
 *   the object pointer when param_2 & 1 is nonzero. The caller
 *   construct_cls_105aa4c0_object is the constructor/destructor body of a related class,
 *   consistent with C++ front-end deleting-destructor semantics.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destructor_free_if_flagged_1047e01a(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105aae4c/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
