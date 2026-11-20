/* @k10d cls_1056328c_new @ 0x10397e26
 * name: verified (structural evidence: heap_alloc(0x2c) when NULL; stores vtable 0x1056328c; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1056328c (vtable 0x1056328c, 0x2c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2c) when NULL; stores vtable 0x1056328c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10563dd8 * cls_1056328c_new(cls_1056328c *param_1)

{
  if ((param_1 != (cls_1056328c *)0x0) ||
     (param_1 = (cls_1056328c *)heap_alloc((void *)0x2c), (cls_10563dd8 *)param_1 != (cls_10563dd8 *)0x0)) {
    cls_10563dd8_new((cls_10563dd8 *)param_1);
    ((cls_10563dd8 *)param_1)->field_0x0 = (uint32_t)&DAT_1056328c/*ROM*/;
    ((cls_10563dd8 *)param_1)->field_0x4 = (uint32_t)&DAT_105632fc/*ROM*/;
    ((cls_10563dd8 *)param_1)->field_0x8 = (uint32_t)&DAT_10563324/*ROM*/;
    ((cls_10563dd8 *)param_1)->field_0x24 = 0;
    ((cls_10563dd8 *)param_1)->field_0x28 = 0;
  }
  return (cls_10563dd8 *)param_1;
}
