/* @k10d cls_105a6d8c_new @ 0x1045fe72
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105a6d8c; returns param_1)
 * unit: 134_settings_struct_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a6d8c (vtable 0x105a6d8c, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105a6d8c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b5264 * cls_105a6d8c_new(cls_105a6d8c *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (cls_105a6d8c *)0x0) ||
     (param_1 = (cls_105a6d8c *)heap_alloc((void *)0x1c), param_1 != (cls_105a6d8c *)0x0)) {
    cls_105b5264_new((cls_105b5264 *)param_1);
    ((cls_105b5264 *)param_1)->field_0x0 = (uintptr_t)(&DAT_105a6d8c/*ROM*/);
    iVar1 = 0;
    iVar2 = 0x14;
    do {
      iVar3 = iVar2;
      *(uint8_t *)((int)&((cls_105b5264 *)(param_1 + 1))->field_0x0 + iVar1) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(param_1 + 1))->field_0x0 + iVar1 + 1) = 0;
      *(uint8_t *)((int)&((cls_105b5264 *)(param_1 + 1))->field_0x0 + iVar1 + 2) = 0;
      iVar2 = iVar3 + -3;
      iVar1 = iVar1 + 3;
    } while (-1 < iVar2);
    iVar3 = iVar3 + -1;
    do {
      *(uint8_t *)((int)&((cls_105b5264 *)(param_1 + 1))->field_0x0 + iVar1) = 0;
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + 1;
    } while (-1 < iVar3);
  }
  return (cls_105b5264 *)param_1;
}
