/* @k10d cls_10621c8c_new @ 0x105363cc
 * name: verified (structural evidence: heap_alloc(0x50) when NULL; stores vtable 0x10621c8c; returns param_1)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10621c8c (vtable 0x10621c8c, 0x50 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x50) when NULL; stores vtable 0x10621c8c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_10621c8c_new(cls_10621c8c *param_1)

{
  if ((param_1 != (cls_10621c8c *)0x0) ||
     (param_1 = (cls_10621c8c *)heap_alloc((void *)0x50), param_1 != (cls_10621c8c *)0x0)) {
    cls_105b2e98_new((cls_105b2e98 *)param_1);
    param_1->field_0x48 = (uint32_t)&DAT_10621c8c;
    param_1->field_0x4c = 0;
    param_1->field_0x4d = 0;
  }
  return (int)param_1;
}
