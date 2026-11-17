/* @k10d cls_105bd93c_delete @ 0x104e1210
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105bd93c: resets the vtable and frees the object when
 *   the flag bit is set.
 * summary:
 *   Sets the object's vtable pointer (at offset 8) to 0x105bd93c, then calls heap_free on
 *   the object if param_2 has bit 0 set. This is virtual slot 1 of cls_105bd93c and is
 *   invoked by the deleting destructors of cls_105bd140 and cls_105bde1c, indicating it is
 *   a base-class cleanup routine. The object size is 0xc bytes per the vtable structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105bd93c_delete(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(void **)(param_1 + 8) = &DAT_105bd93c/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
