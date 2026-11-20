/* @k10d cls_105634f0_new @ 0x103998ba
 * name: verified (structural evidence: heap_alloc(0x2c) when NULL; stores vtable 0x105634f0; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105634f0 (vtable 0x105634f0, 0x2c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2c) when NULL; stores vtable 0x105634f0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105634f0 * cls_105634f0_new(cls_105634f0 *param_1)

{
  if ((param_1 != (cls_105634f0 *)0x0) ||
     (param_1 = (cls_105634f0 *)heap_alloc((void *)0x2c), param_1 != (cls_105634f0 *)0x0)) {
    cls_10563dd8_new((cls_10563dd8 *)param_1);
    param_1->field_0x0 = (uint32_t)&DAT_105634f0/*ROM*/;
    param_1->field_0x4 = (uint32_t)&DAT_10563560/*ROM*/;
    param_1->field_0x8 = (uint32_t)&DAT_10563588/*ROM*/;
    param_1->field_0x24 = 0;
    param_1->field_0x28 = 0;
  }
  return param_1;
}
