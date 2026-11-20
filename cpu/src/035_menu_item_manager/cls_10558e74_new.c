/* @k10d cls_10558e74_new @ 0x1037fbae
 * name: verified (structural evidence: heap_alloc(0xa8) when NULL; stores vtable 0x10558e74; returns param_1)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10558e74 (vtable 0x10558e74, 0xa8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xa8) when NULL; stores vtable 0x10558e74; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10559c4c * cls_10558e74_new(cls_10558e74 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1 != (cls_10558e74 *)0x0) ||
     (param_1 = (cls_10558e74 *)heap_alloc((void *)0xa8), (cls_10559c4c *)param_1 != (cls_10559c4c *)0x0)) {
    cls_10559c4c_new((cls_10559c4c *)param_1);
    ((cls_10559c4c *)param_1)->field_0x0 = (uintptr_t)(&DAT_10558e74/*ROM*/);
    ((cls_10559c4c *)param_1)->field_0x4 = (uintptr_t)(&DAT_10558f8c/*ROM*/);
    ((cls_10559c4c *)param_1)->field_0x8 = (uintptr_t)(&DAT_10558fb4/*ROM*/);
    ((cls_10559c4c *)param_1)->field_0x30 = 0;
    *(uint32_t *)&((cls_10559c4c *)param_1)->field_0x34 = 0;
    ((cls_10559c4c *)param_1)->field_0x38 = 0;
    ((cls_10559c4c *)param_1)->field_0x3a = 0;
    ((cls_10559c4c *)param_1)->field_0x3c = 0;
    ((cls_10559c4c *)param_1)->field_0x3e = 0;
    *(uint32_t *)&((cls_10559c4c *)param_1)->field_0x40 = 0;
    ((cls_10559c4c *)param_1)->field_0x44 = 0;
    ((cls_10559c4c *)param_1)->field_0x45 = 0;
    ((cls_10559c4c *)param_1)->field_0x46 = 0;
    ((cls_10559c4c *)param_1)->field_0x47 = 0;
    *(uint32_t *)&((cls_10559c4c *)param_1)->field_0x48 = 0;
    ((cls_10559c4c *)param_1)->field_0x4c = 0;
    ((cls_10559c4c *)param_1)->field_0x50 = 0;
    ((cls_10559c4c *)param_1)->field_0x54 = 0;
    *(uint16_t *)&((cls_10559c4c *)param_1)->field_0x58 = 0;
    ((cls_10559c4c *)param_1)->field_0x5a = 0;
    ((cls_10559c4c *)param_1)->field_0x5c = 0;
    iVar3 = 0;
    iVar4 = 0;
    iVar1 = 0;
    do {
      *(uint16_t *)(&((cls_10559c4c *)param_1)->field_0x60 + iVar4) = 0;
      iVar2 = 2;
      iVar5 = iVar1;
      do {
        *(uint8_t *)((int)&((cls_10559c4c *)param_1)->field_0x6c + iVar5) = 0;
        *(uint8_t *)((int)&((cls_10559c4c *)param_1)->field_0x6c + iVar5 + 1) = 0;
        *(uint8_t *)((int)&((cls_10559c4c *)param_1)->field_0x6c + iVar5 + 2) = 0;
        iVar2 = iVar2 + -1;
        iVar5 = iVar5 + 3;
      } while (-1 < iVar2);
      *(uint8_t *)((int)&((cls_10559c4c *)param_1)->field_0xa0 + iVar3 + 2) = 0;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 9;
      iVar4 = iVar4 + 2;
    } while (iVar3 < 6);
  }
  return (cls_10559c4c *)param_1;
}
