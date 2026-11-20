/* @k10d cls_105b7620_new @ 0x104adb6a
 * name: verified (structural evidence: heap_alloc(0x20) when NULL; stores vtable 0x105b7620; returns param_1)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b7620 (vtable 0x105b7620, 0x20 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x20) when NULL; stores vtable 0x105b7620; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b7748 * cls_105b7620_new(cls_105b7620 *param_1)

{
  if ((param_1 != (cls_105b7620 *)0x0) ||
     (param_1 = (cls_105b7620 *)heap_alloc((void *)0x20), (cls_105b7748 *)param_1 != (cls_105b7748 *)0x0)) {
    cls_105b7748_new((cls_105b7748 *)param_1);
    ((cls_105b7748 *)param_1)->field_0x18 = 0x105b7620/*ROM*/;
  }
  return (cls_105b7748 *)param_1;
}
