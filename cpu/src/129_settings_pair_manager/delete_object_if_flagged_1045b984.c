/* @k10d delete_object_if_flagged_1045b984 @ 0x1045b984
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Stores the class vtable pointer into the object and frees it if the low bit of param_2
 *   is set.
 * summary:
 *   This is virtual slot 1 of cls_105a5bf8, acting as a C++ deleting destructor. It first
 *   writes the vtable address 0x105a5bf8 into the object header (param_1), then calls
 *   heap_free on the object if param_2 & 1 is non-zero. The heap_free callee is verified to
 *   be the operator delete used by C++ deleting destructors. The function returns void and
 *   does not perform any camera-specific operations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void delete_object_if_flagged_1045b984(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105a5bf8/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
