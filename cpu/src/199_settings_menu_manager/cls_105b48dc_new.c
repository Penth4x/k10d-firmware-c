/* @k10d cls_105b48dc_new @ 0x10494224
 * name: verified (structural evidence: heap_alloc(0x48) when NULL; stores vtable 0x105b48dc; returns param_1)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b48dc (vtable 0x105b48dc, 0x48 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x48) when NULL; stores vtable 0x105b48dc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b48dc_new(cls_105b48dc *param_1)

{
  if ((param_1 != (cls_105b48dc *)0x0) ||
     (param_1 = (cls_105b48dc *)heap_alloc((void *)0x48), param_1 != (cls_105b48dc *)0x0)) {
    cls_105b45e4_new((cls_105b45e4 *)param_1);
    param_1->field_0xc = (uint32_t)&DAT_105b48dc/*ROM*/;
    param_1->field_0x10 = (int)(int *)0x0;
    param_1->field_0x14 = 1;
    param_1->field_0x15 = 1;
    cls_105a5c2c_new((cls_105a5c2c *)&param_1->field11_0x18,0);
    cls_105a5c2c_new((cls_105a5c2c *)&param_1->field_0x30,0);
  }
  return (int)param_1;
}
