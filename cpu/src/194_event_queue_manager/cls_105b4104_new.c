/* @k10d cls_105b4104_new @ 0x10491554
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105b4104; returns param_1)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b4104 (vtable 0x105b4104, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105b4104; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b4104 * cls_105b4104_new(cls_105b4104 *param_1)

{
  if ((param_1 != (cls_105b4104 *)0x0) ||
     (param_1 = (cls_105b4104 *)heap_alloc((void *)0x1c), param_1 != (cls_105b4104 *)0x0)) {
    param_1->field_0x18 = (uint32_t)&DAT_105b4104/*ROM*/;
    param_1->field_0x0 = 0;
    param_1->field_0x4 = 0;
    param_1->field_0x8 = 0;
    param_1->field_0xc = 0;
    alloc_and_zero_two_words_1045c3bc((void *)&param_1->field_0x10);
  }
  return param_1;
}
