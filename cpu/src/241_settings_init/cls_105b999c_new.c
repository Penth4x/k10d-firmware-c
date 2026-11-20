/* @k10d cls_105b999c_new @ 0x104cf752
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105b999c; returns param_1)
 * unit: 241_settings_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b999c (vtable 0x105b999c, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105b999c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b999c_new(cls_105b999c *param_1)

{
  if ((param_1 != (cls_105b999c *)0x0) ||
     (param_1 = (cls_105b999c *)heap_alloc((void *)4), param_1 != (cls_105b999c *)0x0)) {
    param_1->field_0x0 = 0x105b999c/*ROM*/;
  }
  return;
}
