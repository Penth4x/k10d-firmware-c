/* @k10d cls_105aaebc_delete @ 0x1047e3c6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105aaebc: resets the vtable and frees the object when
 *   the flag bit is set.
 * summary:
 *   Takes a this pointer and a flags word. If the object is non-NULL, it overwrites the
 *   vtable pointer at offset 0xc with the class vtable address 0x105aaebc. If bit 0 of the
 *   flags parameter is set, it calls heap_free on the object. This matches the standard C++
 *   deleting destructor pattern (store vtable, then free if heap-allocated).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105aaebc_delete(void *param_1,uint param_2)

{
  if ((param_1 != (void *)0x0) &&
     (*(void **)((int)param_1 + 0xc) = &DAT_105aaebc/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
