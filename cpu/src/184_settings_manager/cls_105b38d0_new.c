/* @k10d cls_105b38d0_new @ 0x1048986e
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105b38d0; returns param_1)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b38d0 (vtable 0x105b38d0, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105b38d0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b38d0_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)4), param_1 != (uint32_t *)0x0)) {
    cls_105b3830_new(param_1);
    *param_1 = 0x105b38d0/*ROM*/;
  }
  return param_1;
}
