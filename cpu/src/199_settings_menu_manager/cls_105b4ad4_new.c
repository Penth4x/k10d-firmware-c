/* @k10d cls_105b4ad4_new @ 0x104947d2
 * name: verified (structural evidence: heap_alloc(0x4c) when NULL; stores vtable 0x105b4ad4; returns param_1)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b4ad4 (vtable 0x105b4ad4, 0x4c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4c) when NULL; stores vtable 0x105b4ad4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b48dc * cls_105b4ad4_new(cls_105b4ad4 *param_1)

{
  if ((param_1 != (cls_105b4ad4 *)0x0) ||
     (param_1 = (cls_105b4ad4 *)heap_alloc((void *)0x4c), (cls_105b48dc *)param_1 != (cls_105b48dc *)0x0)) {
    cls_105b48dc_new((cls_105b48dc *)param_1);
    ((cls_105b48dc *)param_1)->field_0xc = (uint32_t)&DAT_105b4ad4/*ROM*/;
    ((cls_105b48dc *)param_1)->field46_0x48 = (uint32_t)(int *)0x0;
  }
  return (cls_105b48dc *)param_1;
}
