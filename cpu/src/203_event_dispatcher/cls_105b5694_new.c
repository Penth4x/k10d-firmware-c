/* @k10d cls_105b5694_new @ 0x10499a2e
 * name: verified (structural evidence: heap_alloc(0x58) when NULL; stores vtable 0x105b5694; returns param_1)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b5694 (vtable 0x105b5694, 0x58 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x58) when NULL; stores vtable 0x105b5694; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b5694 * cls_105b5694_new(cls_105b5694 *param_1)

{
  if ((param_1 != (cls_105b5694 *)0x0) ||
     (param_1 = (cls_105b5694 *)heap_alloc((void *)0x58), param_1 != (cls_105b5694 *)0x0)) {
    cls_105b56ec_new((cls_105b56ec *)param_1);
    param_1->field_0x10 = 0x105b5694/*ROM*/;
    cls_105d677c_new((cls_105d677c *)&param_1->field_0x14);
    alloc_and_init_object_1049c2dc(&param_1->field_0x3c);
    param_1->field_0x40 = 0;
    param_1->field_0x44 = 0;
    param_1->field_0x48 = 0;
    param_1->field_0x4c = 0;
    param_1->field_0x50 = 0;
    param_1->field_0x54 = 0xffffffff;
  }
  return param_1;
}
