/* @k10d cls_105b9a7c_new @ 0x104cf8a2
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105b9a7c; returns param_1)
 * unit: 241_settings_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b9a7c (vtable 0x105b9a7c, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105b9a7c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b9a7c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)4), param_1 != (uint32_t *)0x0)) {
    cls_105b9a3c_new(param_1);
    *param_1 = 0x105b9a7c/*ROM*/;
  }
  return param_1;
}
