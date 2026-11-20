/* @k10d cls_10563940_new @ 0x1039acb8
 * name: verified (structural evidence: heap_alloc(0x30) when NULL; stores vtable 0x10563940; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10563940 (vtable 0x10563940, 0x30 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x30) when NULL; stores vtable 0x10563940; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10563dd8 * cls_10563940_new(cls_10563940 *param_1)

{
  if ((param_1 != (cls_10563940 *)0x0) ||
     (param_1 = (cls_10563940 *)heap_alloc((void *)0x30), (cls_10563dd8 *)param_1 != (cls_10563dd8 *)0x0)) {
    cls_10563dd8_new((cls_10563dd8 *)param_1);
    ((cls_10563dd8 *)param_1)->field_0x0 = (uint32_t)&DAT_10563940/*ROM*/;
    ((cls_10563dd8 *)param_1)->field_0x4 = (uint32_t)&DAT_105639b0/*ROM*/;
    ((cls_10563dd8 *)param_1)->field_0x8 = (uint32_t)&DAT_105639d8/*ROM*/;
    ((cls_10563dd8 *)param_1)->field_0x24 = 0;
    ((cls_10563dd8 *)param_1)->field_0x28 = 0;
    *(uint16_t *)&((cls_10563dd8 *)param_1)->field_0x2c = 0;
    ((cls_10563dd8 *)param_1)->field_0x2e = 0;
  }
  return (cls_10563dd8 *)param_1;
}
