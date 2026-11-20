/* @k10d cls_105635ac_new @ 0x10399a9e
 * name: verified (structural evidence: heap_alloc(0x64) when NULL; stores vtable 0x105635ac; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105635ac (vtable 0x105635ac, 0x64 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x64) when NULL; stores vtable 0x105635ac; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10563dd8 * cls_105635ac_new(cls_105635ac *param_1)

{
  if ((param_1 != (cls_105635ac *)0x0) ||
     (param_1 = (cls_105635ac *)heap_alloc((void *)100), (cls_10563dd8 *)param_1 != (cls_10563dd8 *)0x0)) {
    cls_10563dd8_new((cls_10563dd8 *)param_1);
    ((cls_10563dd8 *)param_1)->field_0x0 = (uintptr_t)(&DAT_105635ac/*ROM*/);
    ((cls_10563dd8 *)param_1)->field_0x4 = (uintptr_t)(&DAT_1056361c/*ROM*/);
    ((cls_10563dd8 *)param_1)->field_0x8 = (uintptr_t)(&DAT_10563644/*ROM*/);
    ((cls_10563dd8 *)param_1)->field_0x24 = 0xffffffff;
    ((cls_10563dd8 *)param_1)->field_0x28 = 0;
    *(uint32_t *)&((cls_10563dd8 *)param_1)->field_0x2c = 0;
    ((cls_10563dd8 *)param_1)->field_0x30 = 0;
    *(uint32_t *)&((cls_10563dd8 *)param_1)->field_0x34 = 0;
    *(uint32_t *)&((cls_10563dd8 *)param_1)->field_0x38 = 0;
    *(uint32_t *)&((cls_10563dd8 *)param_1)->field_0x3c = 0;
    *(uint32_t *)&((cls_10563dd8 *)param_1)->field_0x40 = 0;
    *(uint32_t *)&((cls_10563dd8 *)param_1)->field_0x44 = 0;
    *(uint32_t *)&((cls_10563dd8 *)param_1)->field_0x48 = 0;
    ((cls_10563dd8 *)param_1)->field_0x4c = 0;
    ((cls_10563dd8 *)param_1)->field_0x50 = 0;
    ((cls_10563dd8 *)param_1)->field_0x54 = 0;
    *(uint32_t *)&((cls_10563dd8 *)param_1)->field_0x58 = 0;
    *(uint32_t *)&((cls_10563dd8 *)param_1)->field_0x5c = 0;
    ((cls_10563dd8 *)param_1)->field_0x60 = 0;
    ((cls_10563dd8 *)param_1)->field_0x62 = 0;
  }
  return (cls_10563dd8 *)param_1;
}
