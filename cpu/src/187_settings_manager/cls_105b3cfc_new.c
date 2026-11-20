/* @k10d cls_105b3cfc_new @ 0x1048cc9e
 * name: verified (structural evidence: heap_alloc(0x30) when NULL; stores vtable 0x105b3cfc; returns param_1)
 * unit: 187_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3cfc (vtable 0x105b3cfc, 0x30 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x30) when NULL; stores vtable 0x105b3cfc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b3d9c * cls_105b3cfc_new(cls_105b3cfc *param_1)

{
  if ((param_1 != (cls_105b3cfc *)0x0) ||
     (param_1 = (cls_105b3cfc *)heap_alloc((void *)0x30), (cls_105b3d9c *)param_1 != (cls_105b3d9c *)0x0)) {
    cls_105b3d9c_new((cls_105b3d9c *)param_1);
    ((cls_105b3d9c *)param_1)->field_0x20 = (uint32_t)&DAT_105b3cfc/*ROM*/;
    *(uint16_t *)&((cls_105b3d9c *)param_1)->field_0x2c = 4;
  }
  return (cls_105b3d9c *)param_1;
}
