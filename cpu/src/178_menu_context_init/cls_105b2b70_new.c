/* @k10d cls_105b2b70_new @ 0x10485f3c
 * name: verified (structural evidence: heap_alloc(0xac) when NULL; stores vtable 0x105b2b70; returns param_1)
 * unit: 178_menu_context_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b2b70 (vtable 0x105b2b70, 0xac bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xac) when NULL; stores vtable 0x105b2b70; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105b2b70": ignoring overlapping field "field_0x8" */
/* WARNING: Struct "cls_1059e128": ignoring overlapping field "field_0x8" */

cls_1059e128 * cls_105b2b70_new(cls_105b2b70 *param_1)

{
  if ((param_1 != (cls_105b2b70 *)0x0) || (param_1 = (cls_105b2b70 *)heap_alloc((void *)0xac), (cls_1059e128 *)param_1 != (cls_1059e128 *)0x0)) {
    cls_1059e128_new((cls_1059e128 *)param_1);
    cls_105a2a8c_new((cls_105a2a8c *)&((cls_1059e128 *)param_1)->field_0x40);
    ((cls_1059e128 *)param_1)->field_0x0 = (uintptr_t)(&DAT_105b2b70/*ROM*/);
    ((uint32_t *)&((((cls_1059e128 *)param_1)->field_0x4)))[0] = (uint32_t)(&DAT_105b2c30/*ROM*/);
    ((cls_1059e128 *)param_1)->field_0x18 = (uintptr_t)(&DAT_105b2c50/*ROM*/);
    ((cls_1059e128 *)param_1)->field_0x2c = (uintptr_t)(&DAT_105b2c80/*ROM*/);
    ((uint32_t *)&((((cls_1059e128 *)param_1)->field_0x30)))[0] = (uint32_t)(&DAT_105b2c98/*ROM*/);
    ((cls_1059e128 *)param_1)->field_0x34 = (uintptr_t)(&DAT_105b2cb8/*ROM*/);
    ((cls_1059e128 *)param_1)->field_0x44 = (uintptr_t)(&DAT_105b2cf8/*ROM*/);
    cls_105a2af8_new((cls_105a2af8 *)&((cls_1059e128 *)param_1)->field_0x48);
    *(uint8_t *)&((cls_1059e128 *)param_1)->field_0x50 = 0;
    ((cls_1059e128 *)param_1)->field_0x54 = 0;
    *(uint8_t *)&((cls_1059e128 *)param_1)->field_0x58 = 0;
    cls_105a8a1c_new((cls_105a8a1c *)&((cls_1059e128 *)param_1)->field_0x5c);
    ((cls_1059e128 *)param_1)->field_0x9c = 0;
    ((cls_1059e128 *)param_1)->field72_0xa0 = 0;
    ((cls_1059e128 *)param_1)->field73_0xa4 = 0;
    ((cls_1059e128 *)param_1)->field74_0xa8 = 0;
  }
  return (cls_1059e128 *)param_1;
}
