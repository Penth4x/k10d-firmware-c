/* @k10d cls_105626dc_new @ 0x10391d16
 * name: verified (structural evidence: heap_alloc(0x30) when NULL; stores vtable 0x105626dc; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105626dc (vtable 0x105626dc, 0x30 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x30) when NULL; stores vtable 0x105626dc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10562b98 * cls_105626dc_new(cls_105626dc *param_1)

{
  if ((param_1 != (cls_105626dc *)0x0) ||
     (param_1 = (cls_105626dc *)heap_alloc((void *)0x30), (cls_10562b98 *)param_1 != (cls_10562b98 *)0x0)) {
    cls_10562b98_new((cls_10562b98 *)param_1);
    ((cls_10562b98 *)param_1)->field_0x0 = (uintptr_t)(&DAT_105626dc/*ROM*/);
    ((cls_10562b98 *)param_1)->field_0x4 = 0;
    cls_10563114_new((cls_10563114 *)&((cls_10562b98 *)param_1)->field_0x8);
    ((cls_10562b98 *)param_1)->field_0x2c = 0;
  }
  return (cls_10562b98 *)param_1;
}
