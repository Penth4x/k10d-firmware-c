/* @k10d cls_105b44b4_new @ 0x104934d4
 * name: verified (structural evidence: heap_alloc(0x68) when NULL; stores vtable 0x105b44b4; returns param_1)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b44b4 (vtable 0x105b44b4, 0x68 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x68) when NULL; stores vtable 0x105b44b4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b48dc * cls_105b44b4_new(cls_105b44b4 *param_1)

{
  if ((param_1 != (cls_105b44b4 *)0x0) ||
     (param_1 = (cls_105b44b4 *)heap_alloc((void *)0x68), (cls_105b48dc *)param_1 != (cls_105b48dc *)0x0)) {
    cls_105b48dc_new((cls_105b48dc *)param_1);
    ((cls_105b48dc *)param_1)->field_0xc = (uint32_t)&DAT_105b44b4/*ROM*/;
    cls_105a5c2c_new((cls_105a5c2c *)&((cls_105b48dc *)param_1)->field46_0x48,0);
    ((cls_105b48dc *)param_1)->field_0x60 = (int)(int *)0x0;
    ((cls_105b48dc *)param_1)->field_0x64 = 1;
  }
  return (cls_105b48dc *)param_1;
}
