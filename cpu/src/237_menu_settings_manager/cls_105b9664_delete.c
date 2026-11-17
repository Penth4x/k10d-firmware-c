/* @k10d cls_105b9664_delete @ 0x104ce63c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 237_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105b9664: resets the vtable pointer and frees the
 *   object when the flag bit is set.
 * summary:
 *   Writes the vtable address 0x105b9664 into offset 0x28 of the object (param_1), then
 *   calls heap_free on the object if param_2 has bit 0 set. This matches the standard
 *   Cfront deleting-destructor idiom: store the vtable, then free the heap block when the
 *   allocation flag is present. It is virtual slot 1 of cls_105b9664 and is invoked by the
 *   deleting destructors of cls_105b9a6c and cls_105d67cc.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b9664_delete(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(uint32_t *)(param_1 + 0x28) = 0x105b9664/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
