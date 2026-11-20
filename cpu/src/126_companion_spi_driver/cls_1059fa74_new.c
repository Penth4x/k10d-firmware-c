/* @k10d cls_1059fa74_new @ 0x104371e4
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x1059fa74; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059fa74 (vtable 0x1059fa74, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x1059fa74; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105ab830 * cls_1059fa74_new(cls_1059fa74 *param_1)

{
  if ((param_1 != (cls_1059fa74 *)0x0) ||
     (param_1 = (cls_1059fa74 *)heap_alloc((void *)4), param_1 != (cls_1059fa74 *)0x0)) {
    cls_105ab830_new((cls_105ab830 *)param_1);
    ((cls_105ab830 *)param_1)->field_0x0 = (uint8_t)&DAT_1059fa74/*ROM*/;
  }
  return (cls_105ab830 *)param_1;
}
