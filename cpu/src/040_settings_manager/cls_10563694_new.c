/* @k10d cls_10563694_new @ 0x1039a040
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x10563694; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10563694 (vtable 0x10563694, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x10563694; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10563dd8 * cls_10563694_new(cls_10563694 *param_1)

{
  if ((param_1 != (cls_10563694 *)0x0) ||
     (param_1 = (cls_10563694 *)heap_alloc((void *)0x24), (cls_10563dd8 *)param_1 != (cls_10563dd8 *)0x0)) {
    cls_10563dd8_new((cls_10563dd8 *)param_1);
    ((cls_10563dd8 *)param_1)->field_0x0 = (uint32_t)&DAT_10563694/*ROM*/;
    ((cls_10563dd8 *)param_1)->field_0x4 = (uint32_t)&DAT_10563704/*ROM*/;
    ((cls_10563dd8 *)param_1)->field_0x8 = (uint32_t)&DAT_1056372c/*ROM*/;
  }
  return (cls_10563dd8 *)param_1;
}
