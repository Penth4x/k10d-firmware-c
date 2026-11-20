/* @k10d cls_10563d1c_new @ 0x1039c13a
 * name: verified (structural evidence: heap_alloc(0x3c) when NULL; stores vtable 0x10563d1c; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10563d1c (vtable 0x10563d1c, 0x3c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x3c) when NULL; stores vtable 0x10563d1c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10563dd8 * cls_10563d1c_new(cls_10563d1c *param_1)

{
  if ((param_1 != (cls_10563d1c *)0x0) ||
     (param_1 = (cls_10563d1c *)heap_alloc((void *)0x3c), param_1 != (cls_10563d1c *)0x0)) {
    cls_10563dd8_new((cls_10563dd8 *)param_1);
    ((cls_10563dd8 *)param_1)->field_0x0 = (uintptr_t)(&DAT_10563d1c/*ROM*/);
    ((cls_10563dd8 *)param_1)->field_0x4 = (uintptr_t)(&DAT_10563d8c/*ROM*/);
    ((cls_10563dd8 *)param_1)->field_0x8 = (uintptr_t)(&DAT_10563db4/*ROM*/);
    ((cls_10563dd8 *)param_1)->field_0x24 = 0;
    ((cls_10563dd8 *)param_1)->field_0x28 = 0;
    *(uint32_t *)&((cls_10563dd8 *)param_1)->field_0x2c = 0;
    ((cls_10563dd8 *)param_1)->field_0x30 = 0;
    *(uint32_t *)&((cls_10563dd8 *)param_1)->field_0x34 = 0;
    *(uint32_t *)&((cls_10563dd8 *)param_1)->field_0x38 = 0;
    empty_stub_function_1039c1ec((uint32_t)(param_1));
  }
  return (cls_10563dd8 *)param_1;
}
