/* @k10d cls_105a70a4_new @ 0x10460d2e
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x105a70a4; returns param_1)
 * unit: 137_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a70a4 (vtable 0x105a70a4, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x105a70a4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105a70a4 * cls_105a70a4_new(cls_105a70a4 *obj)

{
  if ((obj != (cls_105a70a4 *)0x0) ||
     (obj = (cls_105a70a4 *)heap_alloc((void *)8), obj != (cls_105a70a4 *)0x0)) {
    cls_105b5264_new((cls_105b5264 *)obj);
    obj->field_0x0 = (uint32_t)&DAT_105a70a4/*ROM*/;
    obj->field_0x4 = 0;
    obj->field_0x5 = 0;
    obj->field_0x6 = 0;
    obj->field_0x7 = 0;
  }
  return obj;
}
