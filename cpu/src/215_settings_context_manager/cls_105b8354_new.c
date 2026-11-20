/* @k10d cls_105b8354_new @ 0x104b47e4
 * name: verified (structural evidence: heap_alloc(0x78) when NULL; stores vtable 0x105b8354; returns param_1)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b8354 (vtable 0x105b8354, 0x78 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x78) when NULL; stores vtable 0x105b8354; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105b8354": ignoring overlapping field "field_0x8" */
/* WARNING: Struct "cls_1059e128": ignoring overlapping field "field_0x8" */

cls_1059e128 * cls_105b8354_new(cls_105b8354 *param_1)

{
  if ((param_1 != (cls_105b8354 *)0x0) || (param_1 = (cls_105b8354 *)heap_alloc((void *)0x78), (cls_1059e128 *)param_1 != (cls_1059e128 *)0x0)) {
    cls_1059e128_new((cls_1059e128 *)param_1);
    cls_105a2a8c_new((cls_105a2a8c *)&((cls_1059e128 *)param_1)->field_0x40);
    cls_105a2ab0_new((cls_105a2ab0 *)&((cls_1059e128 *)param_1)->field_0x48);
    ((cls_1059e128 *)param_1)->field_0x0 = (uintptr_t)(&DAT_105b8354/*ROM*/);
    ((uint32_t *)&((((cls_1059e128 *)param_1)->field_0x4)))[0] = (uint32_t)(&DAT_105b841c/*ROM*/);
    ((cls_1059e128 *)param_1)->field_0x18 = (uintptr_t)(&DAT_105b843c/*ROM*/);
    ((cls_1059e128 *)param_1)->field_0x2c = (uintptr_t)(&DAT_105b846c/*ROM*/);
    ((uint32_t *)&((((cls_1059e128 *)param_1)->field_0x30)))[0] = (uint32_t)(&DAT_105b8484/*ROM*/);
    ((cls_1059e128 *)param_1)->field_0x34 = (uintptr_t)(&DAT_105b84a4/*ROM*/);
    ((cls_1059e128 *)param_1)->field_0x44 = (uintptr_t)(&DAT_105b84e4/*ROM*/);
    ((cls_1059e128 *)param_1)->field_0x50 = (uintptr_t)(&DAT_105b84fc/*ROM*/);
    ((cls_1059e128 *)param_1)->field_0x54 = 0;
    ((cls_1059e128 *)param_1)->field_0x58 = 0;
    *(uint32_t *)&((cls_1059e128 *)param_1)->field_0x5c = 0;
    ((cls_1059e128 *)param_1)->field_0x60 = 0;
    cls_105a2af8_new((cls_105a2af8 *)&((cls_1059e128 *)param_1)->field46_0x64);
    ((cls_1059e128 *)param_1)->field_0x6c = 0;
    ((cls_1059e128 *)param_1)->field_0x70 = (uintptr_t)((uint32_t *)0x0);
    ((cls_1059e128 *)param_1)->field_0x74 = (uintptr_t)((int *)0x0);
  }
  return (cls_1059e128 *)param_1;
}
