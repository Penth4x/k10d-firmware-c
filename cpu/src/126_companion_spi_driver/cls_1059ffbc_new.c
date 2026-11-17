/* @k10d cls_1059ffbc_new @ 0x10438070
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x1059ffbc; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059ffbc (vtable 0x1059ffbc, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x1059ffbc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_1059ffbc_new(uint32_t *param_1)

{
                    /* Purpose: Initialize small vtable object (variant 16). If param_1 is null,
                       calls settings_read(4) to allocate. Calls cls_105ab830_new (constructor), sets
                       vtable to &DAT_1059ffbc.\nParams: param_1 = object (or null to
                       allocate).\nReturns: object pointer. */
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)4), param_1 != (uint32_t *)0x0)) {
    cls_105ab830_new(param_1);
    *param_1 = (uint32_t)&DAT_1059ffbc/*ROM*/;
  }
  return param_1;
}
