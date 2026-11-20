/* @k10d cls_105a705c_new @ 0x10460c2a
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105a705c; returns param_1)
 * unit: 137_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a705c (vtable 0x105a705c, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105a705c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b5264 * cls_105a705c_new(cls_105a705c *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (cls_105a705c *)0x0) ||
     (param_1 = (cls_105a705c *)heap_alloc((void *)0x10), param_1 != (cls_105a705c *)0x0)) {
    cls_105b5264_new((cls_105b5264 *)param_1);
    ((cls_105b5264 *)param_1)->field_0x0 = (uint32_t)(&DAT_105a705c/*ROM*/);
    iVar1 = 0;
    iVar2 = 2;
    do {
      *(uint8_t *)((int)&((cls_105b5264 *)(param_1 + 1))->field_0x0 + iVar1) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(param_1 + 1))->field_0x0 + iVar1 + 1) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(param_1 + 1))->field_0x0 + iVar1 + 2) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 3;
    } while (-1 < iVar2);
  }
  return (cls_105b5264 *)param_1;
}
