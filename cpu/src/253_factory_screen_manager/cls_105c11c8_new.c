/* @k10d cls_105c11c8_new @ 0x104e65d4
 * name: verified (structural evidence: heap_alloc(0x2c) when NULL; stores vtable 0x105c11c8; returns param_1)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105c11c8 (vtable 0x105c11c8, 0x2c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2c) when NULL; stores vtable 0x105c11c8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105a1838 * cls_105c11c8_new(cls_105c11c8 *param_1)

{
  if ((param_1 != (cls_105c11c8 *)0x0) ||
     (param_1 = (cls_105c11c8 *)heap_alloc((void *)0x2c), (cls_105a1838 *)param_1 != (cls_105a1838 *)0x0)) {
    cls_105a1838_new((cls_105a1838 *)param_1);
    ((cls_105a1838 *)param_1)->field_0x4 = 0x105c11c8/*ROM*/;
    ((cls_105a1838 *)param_1)->field2_0x8 = 0;
    ((cls_105a1838 *)param_1)->field3_0xc = 0;
    ((cls_105a1838 *)param_1)->field4_0x10 = 0;
    ((cls_105a1838 *)param_1)->field5_0x14 = 0;
    ((cls_105a1838 *)param_1)->field6_0x18 = 0;
    ((cls_105a1838 *)param_1)->field7_0x1c = 0;
    ((cls_105a1838 *)param_1)->field8_0x20 = 0;
    ((cls_105a1838 *)param_1)->field9_0x24 = 0;
    ((cls_105a1838 *)param_1)->field10_0x28 = 0;
  }
  return (cls_105a1838 *)param_1;
}
