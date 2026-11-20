/* @k10d cls_105639fc_new @ 0x1039aed6
 * name: verified (structural evidence: heap_alloc(0xac) when NULL; stores vtable 0x105639fc; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105639fc (vtable 0x105639fc, 0xac bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xac) when NULL; stores vtable 0x105639fc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10563dd8 * cls_105639fc_new(cls_105639fc *param_1)

{
  if ((param_1 != (cls_105639fc *)0x0) ||
     (param_1 = (cls_105639fc *)heap_alloc((void *)0xac), (cls_10563dd8 *)param_1 != (cls_10563dd8 *)0x0)) {
    cls_10563dd8_new((cls_10563dd8 *)param_1);
    ((cls_10563dd8 *)param_1)->field_0x0 = (uintptr_t)(&DAT_105639fc/*ROM*/);
    ((cls_10563dd8 *)param_1)->field_0x4 = (uintptr_t)(&DAT_10563a6c/*ROM*/);
    ((cls_10563dd8 *)param_1)->field_0x8 = (uintptr_t)(&DAT_10563a94/*ROM*/);
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
    *(uint32_t *)&((cls_10563dd8 *)param_1)->field_0x68 = 0;
    *(uint32_t *)&((cls_10563dd8 *)param_1)->field_0x6c = 0;
    ((cls_10563dd8 *)param_1)->field_0x70 = 0;
    ((cls_10563dd8 *)param_1)->field_0x74 = 0;
    ((cls_10563dd8 *)param_1)->field_0x78 = 0;
    ((cls_10563dd8 *)param_1)->field_0x7c = 0;
    ((cls_10563dd8 *)param_1)->field_0x80 = 0;
    *(uint32_t *)&((cls_10563dd8 *)param_1)->field_0x84 = 0;
    ((cls_10563dd8 *)param_1)->field_0x88 = 0;
    ((cls_10563dd8 *)param_1)->field_0x8c = 0;
    ((cls_10563dd8 *)param_1)->field_0x90 = 0;
    ((cls_10563dd8 *)param_1)->field_0x94 = 0;
    ((cls_10563dd8 *)param_1)->field_0x98 = 0;
    ((cls_10563dd8 *)param_1)->field_0x9c = 0;
    ((cls_10563dd8 *)param_1)->field_0xa0 = 0;
    ((cls_10563dd8 *)param_1)->field_0xa4 = 0;
    ((cls_10563dd8 *)param_1)->field_0xa8 = 0;
    empty_stub_function_1039aff6((uint32_t)(param_1));
  }
  return (cls_10563dd8 *)param_1;
}
