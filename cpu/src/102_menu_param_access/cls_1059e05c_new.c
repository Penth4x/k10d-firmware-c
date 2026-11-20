/* @k10d cls_1059e05c_new @ 0x104266ae
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x1059e05c; returns param_1)
 * unit: 102_menu_param_access (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e05c (vtable 0x1059e05c, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x1059e05c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e05c * cls_1059e05c_new(cls_1059e05c *param_1)

{
  if ((param_1 != (cls_1059e05c *)0x0) ||
     (param_1 = (cls_1059e05c *)heap_alloc((void *)4), param_1 != (cls_1059e05c *)0x0)) {
    param_1->field_0x0 = (uint32_t)&DAT_1059e05c/*ROM*/;
  }
  return param_1;
}
