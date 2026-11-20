/* @k10d cls_105592e8_new @ 0x10385296
 * name: verified (structural evidence: heap_alloc(0x70) when NULL; stores vtable 0x105592e8; returns param_1)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105592e8 (vtable 0x105592e8, 0x70 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x70) when NULL; stores vtable 0x105592e8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10559c4c * cls_105592e8_new(cls_105592e8 *param_1)

{
  if ((param_1 != (cls_105592e8 *)0x0) ||
     (param_1 = (cls_105592e8 *)heap_alloc((void *)0x70), (cls_10559c4c *)param_1 != (cls_10559c4c *)0x0)) {
    cls_10559c4c_new((cls_10559c4c *)param_1);
    ((cls_10559c4c *)param_1)->field_0x0 = (uintptr_t)(&DAT_105592e8/*ROM*/);
    ((cls_10559c4c *)param_1)->field_0x4 = (uintptr_t)(&DAT_10559400/*ROM*/);
    ((cls_10559c4c *)param_1)->field_0x8 = (uintptr_t)(&DAT_10559428/*ROM*/);
    ((cls_10559c4c *)param_1)->field_0x30 = 0;
    *(uint16_t *)&((cls_10559c4c *)param_1)->field_0x48 = 0;
    ((cls_10559c4c *)param_1)->field_0x4a = 0;
    ((cls_10559c4c *)param_1)->field_0x4c = 0;
    ((cls_10559c4c *)param_1)->field_0x50 = 0;
    ((cls_10559c4c *)param_1)->field_0x54 = 0;
    *(uint32_t *)&((cls_10559c4c *)param_1)->field_0x58 = 0;
    ((cls_10559c4c *)param_1)->field_0x5c = 0;
    *(uint32_t *)&((cls_10559c4c *)param_1)->field_0x60 = 0;
    ((cls_10559c4c *)param_1)->field_0x64 = 0;
    ((cls_10559c4c *)param_1)->field_0x68 = 0;
    ((cls_10559c4c *)param_1)->field_0x6c = 0;
    *(uint16_t *)&((cls_10559c4c *)param_1)->field_0x34 = 0;
    ((cls_10559c4c *)param_1)->field_0x3c = 0;
    ((cls_10559c4c *)param_1)->field_0x44 = 0;
    *(uint16_t *)&((cls_10559c4c *)param_1)->field_0x36 = 0;
    ((cls_10559c4c *)param_1)->field_0x3e = 0;
    ((cls_10559c4c *)param_1)->field_0x45 = 0;
    ((cls_10559c4c *)param_1)->field_0x38 = 0;
    *(uint16_t *)&((cls_10559c4c *)param_1)->field_0x40 = 0;
    ((cls_10559c4c *)param_1)->field_0x46 = 0;
    ((cls_10559c4c *)param_1)->field_0x3a = 0;
    ((cls_10559c4c *)param_1)->field_0x42 = 0;
    ((cls_10559c4c *)param_1)->field_0x47 = 0;
  }
  return (cls_10559c4c *)param_1;
}
