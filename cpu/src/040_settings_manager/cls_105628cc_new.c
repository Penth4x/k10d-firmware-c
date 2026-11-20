/* @k10d cls_105628cc_new @ 0x10392e04
 * name: verified (structural evidence: heap_alloc(0xf8) when NULL; stores vtable 0x105628cc; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105628cc (vtable 0x105628cc, 0xf8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xf8) when NULL; stores vtable 0x105628cc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10562b98 * cls_105628cc_new(cls_105628cc *param_1)

{
  if ((param_1 != (cls_105628cc *)0x0) ||
     (param_1 = (cls_105628cc *)heap_alloc((void *)0xf8), (cls_10562b98 *)param_1 != (cls_10562b98 *)0x0)) {
    cls_10562b98_new((cls_10562b98 *)param_1);
    ((cls_10562b98 *)param_1)->field_0x0 = (uintptr_t)(&DAT_105628cc/*ROM*/);
    ((cls_10562b98 *)param_1)->field_0x4 = 0;
    cls_10563404_new((cls_10563404 *)&((cls_10562b98 *)param_1)->field_0x8);
    ((cls_10562b98 *)param_1)->field_0xf0 = 0;
    ((cls_10562b98 *)param_1)->field_0xf4 = 0;
  }
  return (cls_10562b98 *)param_1;
}
