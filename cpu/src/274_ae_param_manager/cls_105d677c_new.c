/* @k10d cls_105d677c_new @ 0x1051b2ac
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x105d677c; returns param_1)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d677c (vtable 0x105d677c, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x105d677c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b999c * cls_105d677c_new(cls_105d677c *param_1)

{
  if ((param_1 != (cls_105d677c *)0x0) ||
     (param_1 = (cls_105d677c *)heap_alloc((void *)0x28), (cls_105b999c *)param_1 != (cls_105b999c *)0x0)) {
    cls_105b999c_new((cls_105b999c *)param_1);
    ((cls_105b999c *)param_1)->field_0x0 = 0x105d677c/*ROM*/;
    ((cls_105b999c *)param_1)->field1_0x4 = 0;
    ((cls_105b999c *)param_1)->field2_0x8 = 0;
    ((cls_105b999c *)param_1)->field3_0xc = 0;
    ((cls_105b999c *)param_1)->field4_0x10 = 0;
    ((cls_105b999c *)param_1)->field5_0x14 = 0;
    ((cls_105b999c *)param_1)->field6_0x18 = 0;
    ((cls_105b999c *)param_1)->field7_0x1c = 0;
    ((cls_105b999c *)param_1)->field8_0x20 = 1;
    ((cls_105b999c *)param_1)->field9_0x21 = 0;
    ((cls_105b999c *)param_1)->field12_0x24 = 0;
  }
  return (cls_105b999c *)param_1;
}
