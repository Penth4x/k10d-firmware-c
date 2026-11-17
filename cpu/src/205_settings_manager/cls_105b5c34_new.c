/* @k10d cls_105b5c34_new @ 0x1049f980
 * name: verified (structural evidence: heap_alloc(0x240) when NULL; stores vtable 0x105b5c34; returns param_1)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b5c34 (vtable 0x105b5c34, 0x240 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x240) when NULL; stores vtable 0x105b5c34; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b5c34_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x240), param_1 != (uint32_t *)0x0)) {
    cls_105b68b0_new(param_1);
    param_1[2] = 0x105b5c34/*ROM*/;
    cls_105b6a00_new(param_1 + 3,0x13);
    cls_105b6a00_new(param_1 + 0x11,0x16);
    cls_105b6a00_new(param_1 + 0x1f,8);
    cls_105b6a00_new(param_1 + 0x2d,8);
    cls_105b6aa0_new(param_1 + 0x3b,0);
    cls_105b6a00_new(param_1 + 0x3f,0x5b);
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    cls_105b5c6c_new(param_1 + 0x4f);
    cls_105b5cbc_new(param_1 + 0x68);
    cls_105b6554_new(param_1 + 0x74);
  }
  return (int)param_1;
}
