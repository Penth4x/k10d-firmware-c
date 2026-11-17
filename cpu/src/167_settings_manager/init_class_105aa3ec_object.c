/* @k10d init_class_105aa3ec_object @ 0x1047569e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object of class cls_105aa3ec by setting its vtable pointer and calling
 *   the base class constructor.
 * summary:
 *   Checks if the object pointer is non-null. Sets the first word to the vtable address
 *   0x105aa3ec. Calls destructor_cls_105c12a0, which is the virtual method slot 1 of the
 *   base class cls_105c12a0, likely acting as the base class constructor. If the second
 *   parameter's least significant bit is set, calls release_heap_block_10475726 to perform
 *   additional initialization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_class_105aa3ec_object(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105aa3ec/*ROM*/;
    destructor_cls_105c12a0(param_1,0);
    if ((param_2 & 1) != 0) {
      release_heap_block_10475726(param_1);
    }
  }
  return;
}
