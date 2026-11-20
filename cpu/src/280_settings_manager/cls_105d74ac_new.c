/* @k10d cls_105d74ac_new @ 0x10521418
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105d74ac; returns param_1)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d74ac (vtable 0x105d74ac, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105d74ac; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d74ac_new(cls_105d74ac *param_1)

{
  if ((param_1 != (cls_105d74ac *)0x0) ||
     (param_1 = (cls_105d74ac *)heap_alloc((void *)4), param_1 != (cls_105d74ac *)0x0)) {
    param_1->field_0x0 = 0x105d74ac/*ROM*/;
  }
  return;
}
