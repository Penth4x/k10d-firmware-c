/* @k10d cls_10563348_new @ 0x10397faa
 * name: verified (structural evidence: heap_alloc(0x68) when NULL; stores vtable 0x10563348; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10563348 (vtable 0x10563348, 0x68 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x68) when NULL; stores vtable 0x10563348; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10563dd8 * cls_10563348_new(cls_10563348 *param_1)

{
  if ((param_1 != (cls_10563348 *)0x0) ||
     (param_1 = (cls_10563348 *)heap_alloc((void *)0x68), (cls_10563dd8 *)param_1 != (cls_10563dd8 *)0x0)) {
    cls_10563dd8_new((cls_10563dd8 *)param_1);
    ((cls_10563dd8 *)param_1)->field_0x0 = (uintptr_t)(&DAT_10563348/*ROM*/);
    ((cls_10563dd8 *)param_1)->field_0x4 = (uintptr_t)(&DAT_105633b8/*ROM*/);
    ((cls_10563dd8 *)param_1)->field_0x8 = (uintptr_t)(&DAT_105633e0/*ROM*/);
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
    *(uint16_t *)&((cls_10563dd8 *)param_1)->field_0x5c = 0;
    ((cls_10563dd8 *)param_1)->field_0x5e = 0;
    ((cls_10563dd8 *)param_1)->field_0x60 = 1;
    ((cls_10563dd8 *)param_1)->field_0x62 = 0;
    *(uint8_t *)&((cls_10563dd8 *)param_1)->field_0x64 = 0;
    init_struct_fields_5c_64(param_1);
  }
  return (cls_10563dd8 *)param_1;
}
