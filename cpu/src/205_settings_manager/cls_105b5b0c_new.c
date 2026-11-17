/* @k10d cls_105b5b0c_new @ 0x1049cb1c
 * name: verified (structural evidence: heap_alloc(0x250) when NULL; stores vtable 0x105b5b0c; returns param_1)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b5b0c (vtable 0x105b5b0c, 0x250 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x250) when NULL; stores vtable 0x105b5b0c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b5b0c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x250), param_1 != (uint32_t *)0x0)) {
    cls_105b68b0_new(param_1);
    param_1[2] = 0x105b5b0c/*ROM*/;
    cls_105b6a00_new(param_1 + 3,0xe);
    cls_105b6a00_new(param_1 + 0x11,0x1f);
    cls_105b6a00_new(param_1 + 0x1f,2);
    cls_105b6a00_new(param_1 + 0x2d,6);
    cls_105b6aa0_new(param_1 + 0x3b,0);
    cls_105b6a00_new(param_1 + 0x3f,0x48);
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x50] = 0;
    cls_105d6ce0_new(param_1 + 0x51);
    cls_105d6c88_new(param_1 + 0x6a);
    cls_105b6554_new(param_1 + 0x77);
    param_1[0x93] = 0;
  }
  return (int)param_1;
}
