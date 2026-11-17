/* @k10d cls_105b41d0_delete @ 0x10491dac
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105b41d0: resets the vtable and frees the object when
 *   the flag bit is set.
 * summary:
 *   Takes a this pointer and a flags word. If the pointer is non-NULL, it overwrites the
 *   vtable pointer at offset 8 with the class vtable 0x105b41d0. If bit 0 of the flags
 *   parameter is set, it calls heap_free to release the object. This is the standard Cfront
 *   deleting-destructor pattern for a 0xc-byte object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b41d0_delete(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(void **)(param_1 + 8) = &DAT_105b41d0/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
