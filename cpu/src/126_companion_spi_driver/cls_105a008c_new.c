/* @k10d cls_105a008c_new @ 0x10438672
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105a008c; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a008c (vtable 0x105a008c, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105a008c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105ab830 * cls_105a008c_new(cls_105a008c *param_1)

{
                    /* Purpose: Initialize small vtable object (variant 18). Same pattern, different
                       vtable (&DAT_105a008c).\nParams: param_1 = object (or null to
                       allocate).\nReturns: object pointer. */
  if ((param_1 != (cls_105a008c *)0x0) ||
     (param_1 = (cls_105a008c *)heap_alloc((void *)4), param_1 != (cls_105a008c *)0x0)) {
    cls_105ab830_new((cls_105ab830 *)param_1);
    ((cls_105ab830 *)param_1)->field_0x0 = (uint32_t)&DAT_105a008c/*ROM*/;
  }
  return (cls_105ab830 *)param_1;
}
