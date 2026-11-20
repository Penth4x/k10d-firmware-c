/* @k10d cls_105a0e78_new @ 0x104433ea
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105a0e78; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a0e78 (vtable 0x105a0e78, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105a0e78; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e380 * cls_105a0e78_new(cls_105a0e78 *param_1)

{
  if ((param_1 != (cls_105a0e78 *)0x0) ||
     (param_1 = (cls_105a0e78 *)heap_alloc((void *)4), (cls_1059e380 *)param_1 != (cls_1059e380 *)0x0)) {
    cls_1059e380_new((cls_1059e380 *)param_1);
    ((cls_1059e380 *)param_1)->field_0x0 = (uint32_t)&DAT_105a0e78/*ROM*/;
  }
  return (cls_1059e380 *)param_1;
}
