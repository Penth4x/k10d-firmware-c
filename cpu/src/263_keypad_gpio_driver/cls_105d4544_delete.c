/* @k10d cls_105d4544_delete @ 0x104fcb0a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d4544: resets the vtable and frees the object when
 *   the heap flag is set.
 * summary:
 *   Stores the vtable pointer 0x105d4544 into the object header (param_1). If param_2 has
 *   bit 0 set, calls heap_free on the object. This matches the Cfront deleting-destructor
 *   idiom seen in the neighbouring cls_105d439c_delete and cls_105d47d4_delete functions in
 *   the image_processor_driver module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d4544_delete(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105d4544/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
