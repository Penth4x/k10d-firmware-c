/* @k10d cls_105d8bc8_new @ 0x10522532
 * name: verified (structural evidence: heap_alloc(0x34) when NULL; stores vtable 0x105d8bc8; returns param_1)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d8bc8 (vtable 0x105d8bc8, 0x34 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x34) when NULL; stores vtable 0x105d8bc8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b7748 * cls_105d8bc8_new(cls_105d8bc8 *param_1,uint32_t *param_2)

{
  if ((param_1 != (cls_105d8bc8 *)0x0) ||
     (param_1 = (cls_105d8bc8 *)heap_alloc((void *)0x34), (cls_105b7748 *)param_1 != (cls_105b7748 *)0x0)) {
    cls_105b7748_new((cls_105b7748 *)param_1);
    ((cls_105b7748 *)param_1)->field_0x18 = 0x105d8bc8/*ROM*/;
    *(uint32_t *)&((cls_105b7748 *)param_1)->field_0x20 = 0;
    *(uint16_t *)&((cls_105b7748 *)param_1)->field_0x24 = 0;
    ((cls_105b7748 *)param_1)->field16_0x28 = 0;
    ((cls_105b7748 *)param_1)->field17_0x2c = (uint32_t)param_2;
    ((cls_105b7748 *)param_1)->field18_0x30 = 0;
  }
  return (cls_105b7748 *)param_1;
}
