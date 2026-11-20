/* @k10d cls_105b934c_new @ 0x104bcc1c
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105b934c; returns param_1)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b934c (vtable 0x105b934c, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105b934c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b934c * cls_105b934c_new(cls_105b934c *param_1)

{
  if ((param_1 != (cls_105b934c *)0x0) ||
     (param_1 = (cls_105b934c *)heap_alloc((void *)0x18), param_1 != (cls_105b934c *)0x0)) {
    param_1->field_0x14 = (uint32_t)&DAT_105b934c/*ROM*/;
    param_1->field_0x0 = 0;
    param_1->field_0x4 = 0;
    param_1->field_0x8 = 0;
    param_1->field_0xc = 0;
    param_1->field_0x10 = 0;
  }
  return param_1;
}
