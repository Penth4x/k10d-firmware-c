/* @k10d cls_105b7448_new @ 0x104acf86
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x105b7448; returns param_1)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b7448 (vtable 0x105b7448, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x105b7448; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b7448_new(uint32_t *param_1,void *param_2,uint32_t param_3,uint32_t param_4,
                     uint32_t param_5)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x14), param_1 != (uint32_t *)0x0)) {
    param_1[4] = 0x105b7448/*ROM*/;
    *param_1 = (uint32_t)param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
    *(uint32_t *)*param_1 = param_1[1];
  }
  return;
}
