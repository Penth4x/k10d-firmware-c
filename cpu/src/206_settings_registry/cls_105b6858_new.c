/* @k10d cls_105b6858_new @ 0x104a728c
 * name: verified (structural evidence: heap_alloc(0x20) when NULL; stores vtable 0x105b6858; returns param_1)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b6858 (vtable 0x105b6858, 0x20 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x20) when NULL; stores vtable 0x105b6858; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b6858_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x20), param_1 != (uint32_t *)0x0)) {
    cls_105b6358_new(param_1);
    param_1[7] = 0x105b6858/*ROM*/;
  }
  return param_1;
}
