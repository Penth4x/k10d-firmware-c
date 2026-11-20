/* @k10d cls_105d71e4_new @ 0x10520b4a
 * name: verified (structural evidence: heap_alloc(0x34) when NULL; stores vtable 0x105d71e4; returns param_1)
 * unit: 279_settings_handle_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d71e4 (vtable 0x105d71e4, 0x34 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x34) when NULL; stores vtable 0x105d71e4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b3d34 * cls_105d71e4_new(cls_105d71e4 *param_1)

{
  if ((param_1 != (cls_105d71e4 *)0x0) ||
     (param_1 = (cls_105d71e4 *)heap_alloc((void *)0x34), (cls_105b3d34 *)param_1 != (cls_105b3d34 *)0x0)) {
    cls_105b3d34_new((cls_105b3d34 *)param_1);
    ((cls_105b3d34 *)param_1)->field_0x20 = (uint32_t)&DAT_105d71e4/*ROM*/;
    ((cls_105b3d34 *)param_1)->field_0x28 = 0x120;
    ((cls_105b3d34 *)param_1)->field_0x2a = 0x78;
  }
  return (cls_105b3d34 *)param_1;
}
