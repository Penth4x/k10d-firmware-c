/* @k10d cls_105a015c_new @ 0x1043894c
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105a015c; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a015c (vtable 0x105a015c, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105a015c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105a015c_new(uint32_t *param_1)

{
                    /* Purpose: Initialize small vtable object (variant 20). Same pattern, different
                       vtable (&DAT_105a015c).\nParams: param_1 = object (or null to
                       allocate).\nReturns: object pointer. */
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)4), param_1 != (uint32_t *)0x0)) {
    cls_105ab830_new(param_1);
    *param_1 = (uint32_t)&DAT_105a015c/*ROM*/;
  }
  return param_1;
}
