/* @k10d delete_object_if_flagged_104e04de @ 0x104e04de
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Sets the vtable pointer to the class vtable and frees the object if the low bit of
 *   param_2 is set.
 * summary:
 *   This is virtual slot 1 of cls_105bca40, acting as a C++ deleting destructor. It writes
 *   the vtable address 0x105bca40 into the object header, then calls heap_free on the
 *   object if param_2 & 1 is true. The heap_free callee is the standard operator delete
 *   path. No camera-specific behavior is evident.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void delete_object_if_flagged_104e04de(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105bca40/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
