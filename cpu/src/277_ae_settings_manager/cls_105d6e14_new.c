/* @k10d cls_105d6e14_new @ 0x1051f09e
 * name: verified (structural evidence: heap_alloc(0x54) when NULL; stores vtable 0x105d6e14; returns param_1)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6e14 (vtable 0x105d6e14, 0x54 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x54) when NULL; stores vtable 0x105d6e14; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105d6e14_new(cls_105d6e14 *param_1)

{
  if ((param_1 != (cls_105d6e14 *)0x0) ||
     (param_1 = (cls_105d6e14 *)heap_alloc((void *)0x54), param_1 != (cls_105d6e14 *)0x0)) {
    cls_105b2e98_new((cls_105b2e98 *)param_1);
    param_1->field_0x48 = (uint32_t)&DAT_105d6e14/*ROM*/;
    param_1->field_0x4c = 0;
    param_1->field_0x50 = 0;
    param_1->field_0x44 = 2;
  }
  return (int)param_1;
}
