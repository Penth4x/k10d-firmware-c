/* @k10d cls_105631d0_new @ 0x1039774e
 * name: verified (structural evidence: heap_alloc(0x70) when NULL; stores vtable 0x105631d0; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105631d0 (vtable 0x105631d0, 0x70 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x70) when NULL; stores vtable 0x105631d0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10563dd8 * cls_105631d0_new(cls_105631d0 *param_1)

{
  if ((param_1 != (cls_105631d0 *)0x0) ||
     (param_1 = (cls_105631d0 *)heap_alloc((void *)0x70), (cls_10563dd8 *)param_1 != (cls_10563dd8 *)0x0)) {
    cls_10563dd8_new((cls_10563dd8 *)param_1);
    ((cls_10563dd8 *)param_1)->field_0x0 = (uintptr_t)(&DAT_105631d0/*ROM*/);
    ((cls_10563dd8 *)param_1)->field_0x4 = (uintptr_t)(&DAT_10563240/*ROM*/);
    ((cls_10563dd8 *)param_1)->field_0x8 = (uintptr_t)(&DAT_10563268/*ROM*/);
    ((cls_10563dd8 *)param_1)->field_0x24 = 0;
    initialize_lens_update_object(&((cls_10563dd8 *)param_1)->field_0x28,0x10);
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
    ((cls_10563dd8 *)param_1)->field_0x64 = 0;
    ((cls_10563dd8 *)param_1)->field_0x66 = 0;
    *(uint16_t *)&((cls_10563dd8 *)param_1)->field_0x68 = 1;
    ((cls_10563dd8 *)param_1)->field_0x6a = 1;
    *(uint16_t *)&((cls_10563dd8 *)param_1)->field_0x6c = 1;
    ((cls_10563dd8 *)param_1)->field_0x6e = 0;
    init_object_fields(param_1);
  }
  return (cls_10563dd8 *)param_1;
}
