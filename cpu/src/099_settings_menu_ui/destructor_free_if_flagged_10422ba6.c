/* @k10d destructor_free_if_flagged_10422ba6 @ 0x10422ba6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 099_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Sets the object's vtable pointer to the class vtable and frees the heap block if the
 *   low bit of param_2 is set.
 * summary:
 *   This is virtual slot 1 of cls_1059d9d0, acting as a C++ deleting destructor. It first
 *   writes the class vtable address 0x1059d740 into the object header (param_1). If the low
 *   bit of param_2 is set, it calls heap_free on the object, which is the standard operator
 *   delete pattern. The object size is 0xc0 bytes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destructor_free_if_flagged_10422ba6(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x1059d740/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
