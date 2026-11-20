/* @k10d cls_10558568_new @ 0x10373c7e
 * name: verified (structural evidence: heap_alloc(0x70) when NULL; stores vtable 0x10558568; returns param_1)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10558568 (vtable 0x10558568, 0x70 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x70) when NULL; stores vtable 0x10558568; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10559c4c * cls_10558568_new(cls_10558568 *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (cls_10558568 *)0x0) || (param_1 = (cls_10558568 *)heap_alloc((void *)0x70), (cls_10559c4c *)param_1 != (cls_10559c4c *)0x0)) {
    cls_10559c4c_new((cls_10559c4c *)param_1);
    ((cls_10559c4c *)param_1)->field_0x0 = (uint32_t)(&DAT_10558568/*ROM*/);
    ((cls_10559c4c *)param_1)->field_0x4 = (uint32_t)(&DAT_10558680/*ROM*/);
    ((cls_10559c4c *)param_1)->field_0x8 = (uint32_t)(&DAT_105586a8/*ROM*/);
    ((cls_10559c4c *)param_1)->field_0x30 = 0;
    iVar1 = 0;
    ((cls_10559c4c *)param_1)->field_0x44 = 0;
    ((cls_10559c4c *)param_1)->field_0x45 = 0;
    *(uint16_t *)&((cls_10559c4c *)param_1)->field_0x46 = 0;
    *(uint32_t *)&((cls_10559c4c *)param_1)->field_0x48 = 0;
    ((cls_10559c4c *)param_1)->field_0x4c = 0;
    ((cls_10559c4c *)param_1)->field_0x50 = 0;
    ((cls_10559c4c *)param_1)->field_0x54 = 0;
    *(uint32_t *)&((cls_10559c4c *)param_1)->field_0x58 = 0;
    ((cls_10559c4c *)param_1)->field_0x5c = 0;
    *(uint32_t *)&((cls_10559c4c *)param_1)->field_0x60 = 0;
    ((cls_10559c4c *)param_1)->field_0x64 = 0;
    ((cls_10559c4c *)param_1)->field_0x68 = 0;
    *(uint8_t *)&((cls_10559c4c *)param_1)->field_0x6c = 0;
    iVar2 = 3;
    do {
      (&((cls_10559c4c *)param_1)->field_0x34)[iVar1] = 0;
      (&((cls_10559c4c *)param_1)->field_0x35)[iVar1] = 0;
      (&((cls_10559c4c *)param_1)->field_0x36)[iVar1] = 0;
      (&((cls_10559c4c *)param_1)->field_0x37)[iVar1] = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 4;
    } while (-1 < iVar2);
  }
  return (cls_10559c4c *)param_1;
}
