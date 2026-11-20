/* @k10d cls_105b989c_new @ 0x104cf6e4
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105b989c; returns param_1)
 * unit: 241_settings_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b989c (vtable 0x105b989c, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105b989c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b989c_new(cls_105b989c *param_1)

{
  if ((param_1 != (cls_105b989c *)0x0) ||
     (param_1 = (cls_105b989c *)heap_alloc((void *)0x10), param_1 != (cls_105b989c *)0x0)) {
    cls_105b4bbc_new((cls_105b4bbc *)param_1);
    param_1->field_0xc = (uint32_t)&DAT_105b989c/*ROM*/;
  }
  return (int)param_1;
}
