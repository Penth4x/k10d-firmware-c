/* @k10d cls_105b6e5c_new @ 0x104aa45e
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x105b6e5c; returns param_1)
 * unit: 208_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b6e5c (vtable 0x105b6e5c, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x105b6e5c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b6e5c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x24), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e458_new((void *)(param_1 + 1));
    cls_1059e478_new(param_1 + 2);
    *param_1 = 0x105b6e5c/*ROM*/;
    param_1[1] = 0x105b6e9c/*ROM*/;
    param_1[2] = 0x105b6ebc/*ROM*/;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *(uint8_t *)(param_1 + 6) = 0;
    cls_105a2af8_new((void *)(param_1 + 7));
  }
  return param_1;
}
