/* @k10d cls_1059f6cc_new @ 0x10435b72
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x1059f6cc; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059f6cc (vtable 0x1059f6cc, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x1059f6cc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105ab830 * cls_1059f6cc_new(cls_1059f6cc *param_1)

{
  if ((param_1 != (cls_1059f6cc *)0x0) ||
     (param_1 = (cls_1059f6cc *)heap_alloc((void *)4), param_1 != (cls_1059f6cc *)0x0)) {
    cls_105ab830_new((cls_105ab830 *)param_1);
    ((cls_105ab830 *)param_1)->field_0x0 = (uint8_t)&DAT_1059f6cc/*ROM*/;
  }
  return (cls_105ab830 *)param_1;
}
