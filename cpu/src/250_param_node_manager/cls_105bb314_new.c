/* @k10d cls_105bb314_new @ 0x104df1da
 * name: verified (structural evidence: heap_alloc(0x2c1c) when NULL; stores vtable 0x105bb314; returns param_1)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105bb314 (vtable 0x105bb314, 0x2c1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2c1c) when NULL; stores vtable 0x105bb314; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105bb314": ignoring overlapping field "field_0x8" */
/* WARNING: Struct "cls_105bb0ec": ignoring overlapping field "field_0x8" */

cls_105bb0ec * cls_105bb314_new(cls_105bb314 *param_1)

{
  if ((param_1 != (cls_105bb314 *)0x0) || (param_1 = (cls_105bb314 *)heap_alloc((void *)0x2c1c), (cls_105bb0ec *)param_1 != (cls_105bb0ec *)0x0))
  {
    cls_105bb0ec_new((cls_105bb0ec *)param_1);
    cls_105d74ac_new((cls_105d74ac *)&((cls_105bb0ec *)param_1)->field_0x98);
    ((cls_105bb0ec *)param_1)->field_0x0 = (uintptr_t)((void *)0x105bb314/*ROM*/);
    ((uint32_t *)&((((cls_105bb0ec *)param_1)->field_0x4)))[0] = (uint32_t)((void *)0x105bb444/*ROM*/);
    ((cls_105bb0ec *)param_1)->field_0x18 = (uintptr_t)((void *)0x105bb464/*ROM*/);
    ((cls_105bb0ec *)param_1)->field_0x2c = (uintptr_t)((void *)0x105bb494/*ROM*/);
    ((uint32_t *)&((((cls_105bb0ec *)param_1)->field_0x30)))[0] = (uint32_t)((void *)0x105bb4ac/*ROM*/);
    ((cls_105bb0ec *)param_1)->field_0x34 = (uintptr_t)((void *)0x105bb4cc/*ROM*/);
    ((uint32_t *)&((((cls_105bb0ec *)param_1)->field_0x40)))[0] = 0x105bb50c/*ROM*/;
    ((cls_105bb0ec *)param_1)->field_0x98 = 0x105bb554/*ROM*/;
    cls_105f9f74_new(&((cls_105bb0ec *)param_1)->field_0x9c);
  }
  return (cls_105bb0ec *)param_1;
}
