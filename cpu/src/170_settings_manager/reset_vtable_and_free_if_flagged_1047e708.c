/* @k10d reset_vtable_and_free_if_flagged_1047e708 @ 0x1047e708
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resets the object's vtable pointer to 0x105aaf18 and frees the heap block if the second
 *   argument's low bit is set.
 * summary:
 *   This function is virtual slot 1 of class cls_105aaf18. It writes the vtable address
 *   0x105aaf18 into the object header at offset 0x30, then calls heap_free on the object if
 *   param_2 & 1 is non-zero. It is invoked by the deleting destructors of three derived
 *   classes (cls_105ab540, cls_105ab6a0, cls_105ab6c0) as part of their teardown sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_vtable_and_free_if_flagged_1047e708(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(uint32_t *)(param_1 + 0x30) = 0x105aaf18/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
