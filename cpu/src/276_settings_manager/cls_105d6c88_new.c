/* @k10d cls_105d6c88_new @ 0x1051cd8c
 * name: verified (structural evidence: heap_alloc(0x34) when NULL; stores vtable 0x105d6c88; returns param_1)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6c88 (vtable 0x105d6c88, 0x34 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x34) when NULL; stores vtable 0x105d6c88; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b6174 * cls_105d6c88_new(cls_105d6c88 *param_1)

{
  if ((param_1 != (cls_105d6c88 *)0x0) ||
     (param_1 = (cls_105d6c88 *)heap_alloc((void *)0x34), (cls_105b6174 *)param_1 != (cls_105b6174 *)0x0)) {
    cls_105b6174_new((cls_105b6174 *)param_1);
    ((cls_105b6174 *)param_1)->field_0x4 = 0x105d6c88/*ROM*/;
    ((cls_105b6174 *)param_1)->field12_0x30 = 0;
  }
  return (cls_105b6174 *)param_1;
}
