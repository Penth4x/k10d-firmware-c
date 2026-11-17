/* @k10d cls_105d4534_delete @ 0x104fcae8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105d4534: resets the vtable and frees the object when
 *   the flag bit is set.
 * summary:
 *   Takes an object pointer (param_1) and a flags word (param_2). If the pointer is non-
 *   NULL, it overwrites the vtable pointer at offset 0 with 0x105d4534 (the class vtable).
 *   If bit 0 of param_2 is set, it calls heap_free on the object. This matches the standard
 *   Cfront deleting-destructor pattern seen in neighbouring functions like
 *   cls_105d439c_delete and cls_105d47d4_delete.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d4534_delete(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(uint32_t *)(param_1 + 8) = 0x105d4534/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
