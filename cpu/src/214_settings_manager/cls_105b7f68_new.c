/* @k10d cls_105b7f68_new @ 0x104b3214
 * name: verified (structural evidence: heap_alloc(0x4c) when NULL; stores vtable 0x105b7f68; returns param_1)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b7f68 (vtable 0x105b7f68, 0x4c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4c) when NULL; stores vtable 0x105b7f68; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b7f68_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x4c), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_105a2c1c_new(param_1 + 1);
    cls_105b7500_new(param_1 + 6);
    cls_105b82fc_new(param_1 + 7);
    *param_1 = 0x105b7f68/*ROM*/;
    param_1[5] = 0x105b8068/*ROM*/;
    param_1[6] = 0x105b8080/*ROM*/;
    param_1[7] = 0x105b8108/*ROM*/;
    *(uint8_t *)(param_1 + 8) = 0xff;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  return param_1;
}
