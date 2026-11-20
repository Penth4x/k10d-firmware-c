/* @k10d cls_105d6684_new @ 0x1051a890
 * name: verified (structural evidence: heap_alloc(0x58) when NULL; stores vtable 0x105d6684; returns param_1)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6684 (vtable 0x105d6684, 0x58 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x58) when NULL; stores vtable 0x105d6684; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b56ec * cls_105d6684_new(cls_105d6684 *param_1)

{
  if ((param_1 != (cls_105d6684 *)0x0) ||
     (param_1 = (cls_105d6684 *)heap_alloc((void *)0x58), (cls_105b56ec *)param_1 != (cls_105b56ec *)0x0)) {
    cls_105b56ec_new((cls_105b56ec *)param_1);
    ((cls_105b56ec *)param_1)->field_0x10 = 0x105d6684/*ROM*/;
    cls_105d677c_new((cls_105d677c *)&((cls_105b56ec *)param_1)->field_0x14);
    alloc_and_init_object_1049c2dc(&((cls_105b56ec *)param_1)->field_0x3c);
    ((cls_105b56ec *)param_1)->field49_0x40 = 0;
    ((cls_105b56ec *)param_1)->field50_0x44 = 0;
    ((cls_105b56ec *)param_1)->field51_0x48 = 0;
    ((cls_105b56ec *)param_1)->field52_0x4c = 0;
    ((cls_105b56ec *)param_1)->field53_0x50 = 0;
    ((cls_105b56ec *)param_1)->field54_0x54 = 0xffffffff;
  }
  return (cls_105b56ec *)param_1;
}
