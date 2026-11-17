/* @k10d cls_105d65d0_new @ 0x105180b0
 * name: verified (structural evidence: heap_alloc(0x254) when NULL; stores vtable 0x105d65d0; returns param_1)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d65d0 (vtable 0x105d65d0, 0x254 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x254) when NULL; stores vtable 0x105d65d0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105d65d0_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x254), param_1 != (uint32_t *)0x0)) {
    cls_105b68b0_new(param_1);
    param_1[2] = 0x105d65d0/*ROM*/;
    cls_105b6a00_new(param_1 + 3,0x25);
    cls_105b6a00_new(param_1 + 0x11,0x1c);
    cls_105b6a00_new(param_1 + 0x1f,0x13);
    cls_105b6a00_new(param_1 + 0x2d,0x14);
    cls_105b6aa0_new(param_1 + 0x3b,1);
    cls_105b6a00_new(param_1 + 0x3f,0x5a);
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    cls_105d6608_new(param_1 + 0x50);
    cls_105b6174_new(param_1 + 0x6d);
    cls_105b6554_new(param_1 + 0x79);
  }
  return (int)param_1;
}
