/* @k10d cls_10563c60_new @ 0x1039c02a
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x10563c60; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10563c60 (vtable 0x10563c60, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x10563c60; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10563dd8 * cls_10563c60_new(cls_10563c60 *param_1)

{
  if ((param_1 != (cls_10563c60 *)0x0) ||
     (param_1 = (cls_10563c60 *)heap_alloc((void *)0x24), param_1 != (cls_10563c60 *)0x0)) {
    cls_10563dd8_new((cls_10563dd8 *)param_1);
    ((cls_10563dd8 *)param_1)->field_0x0 = (uint32_t)&DAT_10563c60/*ROM*/;
    ((cls_10563dd8 *)param_1)->field_0x4 = (uint32_t)&DAT_10563cd0/*ROM*/;
    ((cls_10563dd8 *)param_1)->field_0x8 = (uint32_t)&DAT_10563cf8/*ROM*/;
  }
  return (cls_10563dd8 *)param_1;
}
