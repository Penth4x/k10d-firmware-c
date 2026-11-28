/* @k10d cls_105a6eac_new @ 0x104602ea
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x105a6eac; returns param_1)
 * unit: 135_menu_context_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a6eac (vtable 0x105a6eac, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x105a6eac; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105a6eac * cls_105a6eac_new(cls_105a6eac *obj)

{
  /* If obj is already non-NULL, skip allocation; otherwise heap_alloc 8 bytes.
   * If the result is non-NULL, run the base-class ctor and zero the 4 data bytes. */
  if ((obj != (cls_105a6eac *)0x0) ||
     (obj = (cls_105a6eac *)heap_alloc((void *)8), obj != (cls_105a6eac *)0x0)) {
    cls_105b5264_new((cls_105b5264 *)obj);
    obj->field_0x0 = (uint32_t)&DAT_105a6eac/*ROM*/;
    obj->field_0x4 = 0;
    obj->field_0x5 = 0;
    obj->field_0x6 = 0;
    obj->field_0x7 = 0;
  }
  return obj;
}
