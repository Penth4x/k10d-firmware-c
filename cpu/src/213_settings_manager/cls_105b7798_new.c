/* @k10d cls_105b7798_new @ 0x104aeb20
 * name: verified (structural evidence: heap_alloc(0x20) when NULL; stores vtable 0x105b7798; returns param_1)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b7798 (vtable 0x105b7798, 0x20 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x20) when NULL; stores vtable 0x105b7798; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b7798_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x20), param_1 != (uint32_t *)0x0)) {
    cls_105b7748_new(param_1);
    param_1[6] = 0x105b7798/*ROM*/;
  }
  return param_1;
}
