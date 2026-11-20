/* @k10d cls_105a0e48_new @ 0x10442fdc
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x105a0e48; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a0e48 (vtable 0x105a0e48, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x105a0e48; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e380 * cls_105a0e48_new(cls_105a0e48 *param_1)

{
  if ((param_1 != (cls_105a0e48 *)0x0) ||
     (param_1 = (cls_105a0e48 *)heap_alloc((void *)8), (cls_1059e380 *)param_1 != (cls_1059e380 *)0x0)) {
    cls_1059e380_new((cls_1059e380 *)param_1);
    ((cls_1059e380 *)param_1)->field_0x0 = (uintptr_t)((void *)0x105a0e48/*ROM*/);
    ((cls_1059e380 *)param_1)->field1_0x4 = (uintptr_t)((void *)0x0);
  }
  return (cls_1059e380 *)param_1;
}
