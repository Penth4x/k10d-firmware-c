/* @k10d cls_105d6dc8_delete @ 0x1051dc32
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for cls_105d6dc8: resets the vtable pointer and frees the object
 *   when the flag bit is set.
 * summary:
 *   Sets the object's vtable pointer to 0x105d6dc8 (its own vtable) to mark it as
 *   destroyed. If param_2 has bit 0 set, calls heap_free to release the object. This is
 *   virtual slot 1 of cls_105d6dc8, a 4-byte object, and follows the standard Cfront
 *   deleting-destructor pattern seen in the verified callers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d6dc8_delete(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105d6dc8/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
