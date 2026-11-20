/* @k10d cls_105c20d0_new @ 0x104ea3e6
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105c20d0; returns param_1)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105c20d0 (vtable 0x105c20d0, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105c20d0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b81b0 * cls_105c20d0_new(cls_105c20d0 *param_1)

{
  if ((param_1 != (cls_105c20d0 *)0x0) ||
     (param_1 = (cls_105c20d0 *)heap_alloc((void *)0x10), (cls_105b81b0 *)param_1 != (cls_105b81b0 *)0x0)) {
    cls_105b81b0_new((cls_105b81b0 *)param_1);
    ((cls_105b81b0 *)param_1)->field_0x0 = 0x105c20d0/*ROM*/;
    ((cls_105b81b0 *)param_1)->field1_0x4 = 0;
    ((cls_105b81b0 *)param_1)->field2_0x8 = 0;
    ((cls_105b81b0 *)param_1)->field3_0xc = 0;
  }
  return (cls_105b81b0 *)param_1;
}
