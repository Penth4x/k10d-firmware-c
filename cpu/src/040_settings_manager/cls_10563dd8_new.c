/* @k10d cls_10563dd8_new @ 0x1039c440
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x10563dd8; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10563dd8 (vtable 0x10563dd8, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x10563dd8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10563dd8 * cls_10563dd8_new(cls_10563dd8 *param_1)

{
  uint32_t uVar1;
  
  if ((param_1 != (cls_10563dd8 *)0x0) ||
     (param_1 = (cls_10563dd8 *)heap_alloc((void *)0x24), param_1 != (cls_10563dd8 *)0x0)) {
    cls_105b4254_new((void *)param_1);
    param_1->field_0x0 = (uint32_t)&DAT_10563dd8/*ROM*/;
    param_1->field_0x4 = (uint32_t)&DAT_10563e48/*ROM*/;
    param_1->field_0x8 = (uint32_t)&DAT_10563e70/*ROM*/;
    uVar1 = get_or_init_static_buffer_10495746();
    param_1->field_0x20 = uVar1;
  }
  return param_1;
}
