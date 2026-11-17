/* @k10d reset_vtable_and_free_if_owned_1048c4e4 @ 0x1048c4e4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 187_settings_manager (unit names are model-proposed)
 * purpose:
 *   Nulls the vtable pointer at offset 0x20 and frees the object if the flags argument has
 *   bit 0 set.
 * summary:
 *   This is virtual slot 1 of class cls_105b3cdc. It writes the class vtable address
 *   (0x105b3cdc) into the object's vtable slot at offset 0x20, then calls heap_free on the
 *   object when param_2 & 1 is true. It is invoked by the deleting destructors of several
 *   sibling classes as the final cleanup step.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_vtable_and_free_if_owned_1048c4e4(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(void **)(param_1 + 0x20) = &DAT_105b3cdc/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
