/* @k10d cls_105b7838_new @ 0x104af6ea
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105b7838; returns param_1)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b7838 (vtable 0x105b7838, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105b7838; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b7838_new(cls_105b7838 *param_1)

{
  if ((param_1 != (cls_105b7838 *)0x0) ||
     (param_1 = (cls_105b7838 *)heap_alloc((void *)0x10), param_1 != (cls_105b7838 *)0x0)) {
    cls_105b7da4_new((cls_105b7da4 *)param_1);
    param_1->field_0x8 = 0x105b7838/*ROM*/;
    param_1->field_0xc = 0;
  }
  return (int)param_1;
}
