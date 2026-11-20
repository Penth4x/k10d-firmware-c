/* @k10d cls_105d8304_new @ 0x10521a88
 * name: verified (structural evidence: heap_alloc(0x20) when NULL; stores vtable 0x105d8304; returns param_1)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d8304 (vtable 0x105d8304, 0x20 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x20) when NULL; stores vtable 0x105d8304; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105d8304_new(cls_105d8304 *param_1)

{
  if ((param_1 != (cls_105d8304 *)0x0) ||
     (param_1 = (cls_105d8304 *)heap_alloc((void *)0x20), (cls_105d86e0 *)param_1 != (cls_105d86e0 *)0x0)) {
    cls_105d86e0_new((cls_105d86e0 *)param_1);
    ((cls_105d86e0 *)param_1)->field_0x10 = 0x105d8304/*ROM*/;
    ((cls_105d86e0 *)param_1)->field_0xc = 0x105d831c/*ROM*/;
    ((cls_105d86e0 *)param_1)->field_0x10 = 0x105d83d4/*ROM*/;
    *(uint8_t *)&((cls_105d86e0 *)param_1)->field_0x14 = 0;
    ((cls_105d86e0 *)param_1)->field_0x18 = 0;
    ((cls_105d86e0 *)param_1)->field_0x1c = 0;
  }
  return (int)(cls_105d86e0 *)param_1;
}
