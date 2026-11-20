/* @k10d cls_105586cc_new @ 0x10376626
 * name: verified (structural evidence: heap_alloc(0x64) when NULL; stores vtable 0x105586cc; returns param_1)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105586cc (vtable 0x105586cc, 0x64 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x64) when NULL; stores vtable 0x105586cc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10559c4c * cls_105586cc_new(cls_105586cc *param_1)

{
  if ((param_1 != (cls_105586cc *)0x0) ||
     (param_1 = (cls_105586cc *)heap_alloc((void *)100), (cls_10559c4c *)param_1 != (cls_10559c4c *)0x0)) {
    cls_10559c4c_new((cls_10559c4c *)param_1);
    ((cls_10559c4c *)param_1)->field_0x0 = (uintptr_t)(&DAT_105586cc/*ROM*/);
    ((cls_10559c4c *)param_1)->field_0x4 = (uintptr_t)(&DAT_105587e4/*ROM*/);
    ((cls_10559c4c *)param_1)->field_0x8 = (uintptr_t)(&DAT_1055880c/*ROM*/);
    ((cls_10559c4c *)param_1)->field_0x30 = 0;
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
    *(uint32_t *)&((cls_10559c4c *)param_1)->field_0x58 = 0;
    ((cls_10559c4c *)param_1)->field_0x5c = 0;
    ((cls_10559c4c *)param_1)->field_0x60 = 0;
    ((cls_10559c4c *)param_1)->field_0x34 = 0;
    ((cls_10559c4c *)param_1)->field_0x35 = 0;
    ((cls_10559c4c *)param_1)->field_0x36 = 0;
    ((cls_10559c4c *)param_1)->field_0x37 = 0;
  }
  return (cls_10559c4c *)param_1;
}
