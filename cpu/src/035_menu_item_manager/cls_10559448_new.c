/* @k10d cls_10559448_new @ 0x103865bc
 * name: verified (structural evidence: heap_alloc(0x8c) when NULL; stores vtable 0x10559448; returns param_1)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10559448 (vtable 0x10559448, 0x8c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8c) when NULL; stores vtable 0x10559448; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10559c4c * cls_10559448_new(cls_10559448 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (cls_10559448 *)0x0) ||
     (param_1 = (cls_10559448 *)heap_alloc((void *)0x8c), param_1 != (cls_10559448 *)0x0)) {
    cls_10559c4c_new((cls_10559c4c *)param_1);
    ((cls_10559c4c *)param_1)->field_0x0 = (uintptr_t)(&DAT_10559448/*ROM*/);
    ((cls_10559c4c *)param_1)->field_0x4 = (uintptr_t)(&DAT_10559560/*ROM*/);
    ((cls_10559c4c *)param_1)->field_0x8 = (uintptr_t)(&DAT_10559588/*ROM*/);
    ((cls_10559c4c *)param_1)->field_0x30 = 0;
    iVar1 = 0;
    ((cls_10559c4c *)param_1)->field_0x62 = 0;
    *(uint16_t *)&((cls_10559c4c *)param_1)->field_0x64 = 0;
    ((cls_10559c4c *)param_1)->field_0x68 = 0;
    ((cls_10559c4c *)param_1)->field_0x6c = 0;
    ((cls_10559c4c *)param_1)->field_0x70 = 0;
    ((cls_10559c4c *)param_1)->field_0x74 = 0;
    ((cls_10559c4c *)param_1)->field_0x78 = 0;
    ((cls_10559c4c *)param_1)->field_0x7c = 0;
    ((cls_10559c4c *)param_1)->field_0x80 = 0;
    *(uint32_t *)&((cls_10559c4c *)param_1)->field_0x84 = 0;
    ((cls_10559c4c *)param_1)->field_0x88 = 0;
    iVar2 = 0;
    iVar3 = 2;
    do {
      *(uint16_t *)(&((cls_10559c4c *)param_1)->field_0x34 + iVar1) = 0;
      *(uint16_t *)(&((cls_10559c4c *)param_1)->field_0x46 + iVar1) = 0;
      (&((cls_10559c4c *)param_1)->field_0x58)[iVar2] = 0;
      *(uint16_t *)(&((cls_10559c4c *)param_1)->field_0x36 + iVar1) = 0;
      *(uint16_t *)(&((cls_10559c4c *)param_1)->field_0x48 + iVar1) = 0;
      (&((cls_10559c4c *)param_1)->field_0x59)[iVar2] = 0;
      *(uint16_t *)((int)&((cls_10559c4c *)param_1)->field_0x38 + iVar1) = 0;
      *(uint16_t *)((int)&((cls_10559c4c *)param_1)->field_0x4a + iVar1) = 0;
      *(uint8_t *)((int)&((cls_10559c4c *)param_1)->field_0x5a + iVar2) = 0;
      iVar2 = iVar2 + 3;
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + 6;
    } while (-1 < iVar3);
  }
  return (cls_10559c4c *)param_1;
}
