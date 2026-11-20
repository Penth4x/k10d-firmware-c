/* @k10d construct_cls_105aa3ec @ 0x10475666
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructs an instance of cls_105aa3ec by allocating memory and initializing its vtable
 *   and fields.
 * summary:
 *   Allocates 0x10 bytes via allocate_heap_pool2_block if param_1 is null. Calls
 *   cls_105c12a0_new to initialize the base class. Sets the vtable pointer to 0x105aa3ec
 *   and zeroes two specific fields at offsets 0xd and 0x4. Returns the object pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105c12a0 * construct_cls_105aa3ec(cls_105c12a0 *param_1)

{
  if ((param_1 != (cls_105c12a0 *)0x0) ||
     (param_1 = (cls_105c12a0 *)allocate_heap_pool2_block((void *)0x10), param_1 != (cls_105c12a0 *)0x0)) {
    cls_105c12a0_new(param_1);
    param_1->field_0x0 = 0x105aa3ec/*ROM*/;
    *(uint8_t *)((int)&param_1[3].field_0x0 + 1) = 0;
    *(uint8_t *)&param_1[1].field_0x0 = 0;
  }
  return param_1;
}
