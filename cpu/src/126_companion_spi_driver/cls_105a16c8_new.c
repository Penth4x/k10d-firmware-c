/* @k10d cls_105a16c8_new @ 0x10445116
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105a16c8; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a16c8 (vtable 0x105a16c8, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105a16c8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e2e0 * cls_105a16c8_new(cls_105a16c8 *param_1)

{
  if ((param_1 != (cls_105a16c8 *)0x0) ||
     (param_1 = (cls_105a16c8 *)heap_alloc((void *)0x10), (cls_1059e2e0 *)param_1 != (cls_1059e2e0 *)0x0)) {
    cls_1059e2e0_new((cls_1059e2e0 *)param_1);
    ((cls_1059e2e0 *)param_1)->field_0x4 = 0x105a16c8/*ROM*/;
    ((uint32_t *)&((((cls_1059e2e0 *)param_1)->field_0x8)))[0] = 0x105a16f0/*ROM*/;
  }
  return (cls_1059e2e0 *)param_1;
}
