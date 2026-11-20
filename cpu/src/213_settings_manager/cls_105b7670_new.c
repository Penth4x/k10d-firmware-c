/* @k10d cls_105b7670_new @ 0x104add90
 * name: verified (structural evidence: heap_alloc(0x38) when NULL; stores vtable 0x105b7670; returns param_1)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b7670 (vtable 0x105b7670, 0x38 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x38) when NULL; stores vtable 0x105b7670; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b7748 * cls_105b7670_new(cls_105b7670 *param_1)

{
  if ((param_1 != (cls_105b7670 *)0x0) ||
     (param_1 = (cls_105b7670 *)heap_alloc((void *)0x38), (cls_105b7748 *)param_1 != (cls_105b7748 *)0x0)) {
    cls_105b7748_new((cls_105b7748 *)param_1);
    ((cls_105b7748 *)param_1)->field_0x18 = 0x105b7670/*ROM*/;
    *(uint32_t *)&((cls_105b7748 *)param_1)->field_0x20 = 0;
    ((cls_105b7748 *)param_1)->field_0x24 = (uintptr_t)((uint32_t *)0x0);
    ((cls_105b7748 *)param_1)->field16_0x28 = 0;
    ((cls_105b7748 *)param_1)->field17_0x2c = (uintptr_t)((uint32_t *)0x0);
    *(uint32_t *)&((cls_105b7748 *)param_1)->field18_0x30 = 0;
    ((cls_105b7748 *)param_1)->field22_0x34 = 0;
  }
  return (cls_105b7748 *)param_1;
}
