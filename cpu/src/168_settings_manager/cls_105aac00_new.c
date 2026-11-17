/* @k10d cls_105aac00_new @ 0x1047d15e
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105aac00; returns param_1)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aac00 (vtable 0x105aac00, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105aac00; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105aac00_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x18), param_1 != (uint32_t *)0x0)) {
    cls_105aacd8_new(param_1);
    *param_1 = 0x105aac00/*ROM*/;
    param_1[1] = 0;
    param_1[3] = 0;
    cls_105aacd8_new(param_1 + 4);
    param_1[5] = 0;
    param_1[2] = 0;
  }
  return param_1;
}
