/* @k10d cls_1059e508_new @ 0x10429898
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x1059e508; returns param_1)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e508 (vtable 0x1059e508, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x1059e508; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105ab830 * cls_1059e508_new(cls_1059e508 *param_1)

{
  if ((param_1 != (cls_1059e508 *)0x0) ||
     (param_1 = (cls_1059e508 *)heap_alloc((void *)4), param_1 != (cls_1059e508 *)0x0)) {
    cls_105ab830_new((cls_105ab830 *)param_1);
    ((cls_105ab830 *)param_1)->field_0x0 = (uint32_t)&DAT_1059e508/*ROM*/;
  }
  return (cls_105ab830 *)param_1;
}
