/* @k10d cls_10563750_new @ 0x1039a150
 * name: verified (structural evidence: heap_alloc(0x40) when NULL; stores vtable 0x10563750; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10563750 (vtable 0x10563750, 0x40 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x40) when NULL; stores vtable 0x10563750; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10563dd8 * cls_10563750_new(cls_10563750 *param_1)

{
  if ((param_1 != (cls_10563750 *)0x0) ||
     (param_1 = (cls_10563750 *)heap_alloc((void *)0x40), (cls_10563dd8 *)param_1 != (cls_10563dd8 *)0x0)) {
    cls_10563dd8_new((cls_10563dd8 *)param_1);
    ((cls_10563dd8 *)param_1)->field_0x0 = (uintptr_t)(&DAT_10563750/*ROM*/);
    ((cls_10563dd8 *)param_1)->field_0x4 = (uintptr_t)(&DAT_105637c0/*ROM*/);
    ((cls_10563dd8 *)param_1)->field_0x8 = (uintptr_t)(&DAT_105637e8/*ROM*/);
    ((cls_10563dd8 *)param_1)->field_0x24 = 0;
    ((cls_10563dd8 *)param_1)->field_0x28 = 0;
    *(uint32_t *)&((cls_10563dd8 *)param_1)->field_0x2c = 0;
    ((cls_10563dd8 *)param_1)->field_0x30 = 0;
    *(uint32_t *)&((cls_10563dd8 *)param_1)->field_0x38 = 0;
    *(uint32_t *)&((cls_10563dd8 *)param_1)->field_0x3c = 0;
  }
  return (cls_10563dd8 *)param_1;
}
