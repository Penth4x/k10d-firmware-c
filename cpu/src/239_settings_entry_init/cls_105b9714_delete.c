/* @k10d cls_105b9714_delete @ 0x104ced94
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 239_settings_entry_init (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105b9714: resets the vtable and frees the object when
 *   the flag bit is set.
 * summary:
 *   Takes a this pointer (param_1) and a flags word (param_2). If the object is non-NULL,
 *   it overwrites the vtable pointer at offset 4 with the class vtable address 0x105b9714,
 *   then calls heap_free on the object when bit 0 of param_2 is set. This matches the
 *   standard Cfront deleting-destructor idiom (store vtable, free if flags&1). It is
 *   virtual slot 1 of cls_105b9714 and is invoked by the deleting destructor of
 *   cls_105b9724.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b9714_delete(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(void **)(param_1 + 4) = &DAT_105b9714/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
