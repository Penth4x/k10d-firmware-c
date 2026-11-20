/* @k10d cls_105b5628_new @ 0x10498f5a
 * name: verified (structural evidence: heap_alloc(0x54) when NULL; stores vtable 0x105b5628; returns param_1)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b5628 (vtable 0x105b5628, 0x54 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x54) when NULL; stores vtable 0x105b5628; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b56ec * cls_105b5628_new(cls_105b5628 *param_1)

{
  if ((param_1 != (cls_105b5628 *)0x0) ||
     (param_1 = (cls_105b5628 *)heap_alloc((void *)0x54), (cls_105b56ec *)param_1 != (cls_105b56ec *)0x0)) {
    cls_105b56ec_new((cls_105b56ec *)param_1);
    ((cls_105b56ec *)param_1)->field_0x10 = 0x105b5628/*ROM*/;
    *(uint32_t *)&((cls_105b56ec *)param_1)->field_0x14 = 0;
    *(uint32_t *)&((cls_105b56ec *)param_1)->field_0x18 = 0;
    *(uint32_t *)&((cls_105b56ec *)param_1)->field_0x1c = 0;
    *(uint32_t *)&((cls_105b56ec *)param_1)->field_0x20 = 0;
    cls_105d677c_new((cls_105d677c *)&((cls_105b56ec *)param_1)->field_0x24);
    alloc_and_init_object_1049c2dc(&((cls_105b56ec *)param_1)->field52_0x4c);
    ((cls_105b56ec *)param_1)->field53_0x50 = 0xffffffff;
  }
  return (cls_105b56ec *)param_1;
}
