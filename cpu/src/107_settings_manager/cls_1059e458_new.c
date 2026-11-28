/* @k10d cls_1059e458_new @ 0x10428122
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x1059e458; returns param_1)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e458 (vtable 0x1059e458, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x1059e458; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059e458_new(cls_1059e458 *obj)

{
  if ((obj != (cls_1059e458 *)0x0) ||
     (obj = (cls_1059e458 *)heap_alloc((void *)4), obj != (cls_1059e458 *)0x0)) {
    obj->field_0x0 = (uint32_t)&DAT_1059e458/*ROM*/;
  }
  return;
}
