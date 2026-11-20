/* @k10d cls_105590b8_new @ 0x10383606
 * name: verified (structural evidence: heap_alloc(0xac) when NULL; stores vtable 0x105590b8; returns param_1)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105590b8 (vtable 0x105590b8, 0xac bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xac) when NULL; stores vtable 0x105590b8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10559c4c * cls_105590b8_new(cls_105590b8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (cls_105590b8 *)0x0) ||
     (param_1 = (cls_105590b8 *)heap_alloc((void *)0xac), (cls_10559c4c *)param_1 != (cls_10559c4c *)0x0)) {
    cls_10559c4c_new((cls_10559c4c *)param_1);
    ((cls_10559c4c *)param_1)->field_0x0 = (uintptr_t)(&DAT_105590b8/*ROM*/);
    ((cls_10559c4c *)param_1)->field_0x4 = (uintptr_t)(&DAT_105591d0/*ROM*/);
    ((cls_10559c4c *)param_1)->field_0x8 = (uintptr_t)(&DAT_105591f8/*ROM*/);
    ((cls_10559c4c *)param_1)->field_0x30 = 0;
    iVar1 = 0;
    *(uint16_t *)&((cls_10559c4c *)param_1)->field_0x84 = 0;
    ((cls_10559c4c *)param_1)->field_0x86 = 0;
    ((cls_10559c4c *)param_1)->field_0x88 = 0;
    ((cls_10559c4c *)param_1)->field_0x8c = 0;
    ((cls_10559c4c *)param_1)->field_0x90 = 0;
    ((cls_10559c4c *)param_1)->field_0x94 = 0;
    ((cls_10559c4c *)param_1)->field_0x98 = 0;
    ((cls_10559c4c *)param_1)->field_0x9c = 0;
    ((cls_10559c4c *)param_1)->field_0xa0 = 0;
    ((cls_10559c4c *)param_1)->field_0xa4 = 0;
    ((cls_10559c4c *)param_1)->field_0xa8 = 0;
    iVar2 = 0;
    iVar3 = 3;
    do {
      *(uint16_t *)(&((cls_10559c4c *)param_1)->field_0x34 + iVar1) = 0;
      *(uint16_t *)((int)&((cls_10559c4c *)param_1)->field_0x54 + iVar1) = 0;
      *(uint8_t *)((int)&((cls_10559c4c *)param_1)->field_0x74 + iVar2) = 0;
      *(uint16_t *)(&((cls_10559c4c *)param_1)->field_0x36 + iVar1) = 0;
      *(uint16_t *)((int)&((cls_10559c4c *)param_1)->field_0x54 + iVar1 + 2) = 0;
      *(uint8_t *)((int)&((cls_10559c4c *)param_1)->field_0x74 + iVar2 + 1) = 0;
      *(uint16_t *)((int)&((cls_10559c4c *)param_1)->field_0x38 + iVar1) = 0;
      *(uint16_t *)(&((cls_10559c4c *)param_1)->field_0x58 + iVar1) = 0;
      *(uint8_t *)((int)&((cls_10559c4c *)param_1)->field_0x74 + iVar2 + 2) = 0;
      *(uint16_t *)((int)&((cls_10559c4c *)param_1)->field_0x3a + iVar1) = 0;
      *(uint16_t *)((int)&((cls_10559c4c *)param_1)->field_0x5a + iVar1) = 0;
      *(uint8_t *)((int)&((cls_10559c4c *)param_1)->field_0x74 + iVar2 + 3) = 0;
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + 8;
    } while (-1 < iVar3);
  }
  return (cls_10559c4c *)param_1;
}
