/* @k10d cls_105ba0ac_new @ 0x104d6fc8
 * name: verified (structural evidence: heap_alloc(0x20) when NULL; stores vtable 0x105ba0ac; returns param_1)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105ba0ac (vtable 0x105ba0ac, 0x20 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x20) when NULL; stores vtable 0x105ba0ac; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105ba0ac_new(cls_105ba0ac *param_1)

{
  if ((param_1 != (cls_105ba0ac *)0x0) ||
     (param_1 = (cls_105ba0ac *)heap_alloc((void *)0x20), param_1 != (cls_105ba0ac *)0x0)) {
    cls_105bb0b8_new((cls_105bb0b8 *)param_1);
    ((cls_105bb0b8 *)param_1)->field_0x1c = 0x105ba0ac/*ROM*/;
  }
  return (int)(cls_105bb0b8 *)param_1;
}
