/* @k10d reset_vtable_and_free_if_owned_10426e76 @ 0x10426e76
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 103_settings_ui_context (unit names are model-proposed)
 * purpose:
 *   Resets the object's vtable pointer to its class vtable and frees the heap block if the
 *   ownership flag is set.
 * summary:
 *   This is the deleting destructor (virtual slot 1) for class cls_1059e100. It writes the
 *   class vtable address (0x1059e100) into the object header, then calls heap_free on the
 *   object if bit 0 of param_2 is set. It is invoked by the deleting destructors of several
 *   derived classes (e.g. cls_1059e128, cls_1059efac) as part of their base-class teardown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_vtable_and_free_if_owned_10426e76(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = (uint32_t)&DAT_1059e100/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
