/* @k10d cls_105b5410_new @ 0x10496978
 * name: verified (structural evidence: heap_alloc(0x44) when NULL; stores vtable 0x105b5410; returns param_1)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b5410 (vtable 0x105b5410, 0x44 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x44) when NULL; stores vtable 0x105b5410; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b5410 * cls_105b5410_new(cls_105b5410 *param_1)

{
  if ((param_1 != (cls_105b5410 *)0x0) ||
     (param_1 = (cls_105b5410 *)heap_alloc((void *)0x44), param_1 != (cls_105b5410 *)0x0)) {
    cls_105f9ac8_new((cls_105f9ac8 *)param_1);
    param_1->field_0x0 = (uintptr_t)((void *)0x105b5410/*ROM*/);
    cls_105a8a1c_new(&param_1->field_0x4);
  }
  return param_1;
}
