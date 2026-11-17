/* @k10d cls_105b5cbc_new @ 0x104a135e
 * name: verified (structural evidence: heap_alloc(0x30) when NULL; stores vtable 0x105b5cbc; returns param_1)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b5cbc (vtable 0x105b5cbc, 0x30 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x30) when NULL; stores vtable 0x105b5cbc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b5cbc_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x30), param_1 != (uint32_t *)0x0)) {
    cls_105b6174_new(param_1);
    param_1[1] = 0x105b5cbc/*ROM*/;
  }
  return param_1;
}
