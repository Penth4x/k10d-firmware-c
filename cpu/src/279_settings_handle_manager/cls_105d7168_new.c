/* @k10d cls_105d7168_new @ 0x10520a16
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105d7168; returns param_1)
 * unit: 279_settings_handle_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d7168 (vtable 0x105d7168, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105d7168; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105ab830 * cls_105d7168_new(cls_105d7168 *param_1)

{
  if ((param_1 != (cls_105d7168 *)0x0) ||
     (param_1 = (cls_105d7168 *)heap_alloc((void *)4), param_1 != (cls_105d7168 *)0x0)) {
    cls_105ab830_new((cls_105ab830 *)param_1);
    ((cls_105ab830 *)param_1)->field_0x0 = (uint8_t)&DAT_105d7168/*ROM*/;
  }
  return (cls_105ab830 *)param_1;
}
