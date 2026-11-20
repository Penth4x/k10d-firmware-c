/* @k10d cls_105b9b2c_new @ 0x104cff24
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105b9b2c; returns param_1)
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b9b2c (vtable 0x105b9b2c, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105b9b2c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b9a3c * cls_105b9b2c_new(cls_105b9b2c *param_1)

{
  if ((param_1 != (cls_105b9b2c *)0x0) ||
     (param_1 = (cls_105b9b2c *)heap_alloc((void *)0x10), (cls_105b9a3c *)param_1 != (cls_105b9a3c *)0x0)) {
    cls_105b9a3c_new((cls_105b9a3c *)param_1);
    ((cls_105b9a3c *)param_1)->field_0x0 = 0x105b9b2c/*ROM*/;
    ((cls_105b9a3c *)param_1)->field1_0x4 = 0;
    ((cls_105b9a3c *)param_1)->field2_0x8 = 0;
    ((cls_105b9a3c *)param_1)->field3_0xc = 0;
  }
  return (cls_105b9a3c *)param_1;
}
