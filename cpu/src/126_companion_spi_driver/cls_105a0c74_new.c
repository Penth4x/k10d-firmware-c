/* @k10d cls_105a0c74_new @ 0x10441a04
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x105a0c74; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a0c74 (vtable 0x105a0c74, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x105a0c74; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e380 * cls_105a0c74_new(cls_105a0c74 *param_1)

{
  if ((param_1 != (cls_105a0c74 *)0x0) ||
     (param_1 = (cls_105a0c74 *)heap_alloc((void *)8), (cls_1059e380 *)param_1 != (cls_1059e380 *)0x0)) {
    cls_1059e380_new((cls_1059e380 *)param_1);
    ((cls_1059e380 *)param_1)->field_0x0 = (uintptr_t)((void *)0x105a0c74/*ROM*/);
    ((cls_1059e380 *)param_1)->field1_0x4 = (uintptr_t)((void *)0x0);
  }
  return (cls_1059e380 *)param_1;
}
