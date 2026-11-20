/* @k10d cls_105d8ab4_new @ 0x105220aa
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x105d8ab4; returns param_1)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d8ab4 (vtable 0x105d8ab4, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x105d8ab4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105bde1c * cls_105d8ab4_new(cls_105d8ab4 *param_1)

{
  if ((param_1 != (cls_105d8ab4 *)0x0) ||
     (param_1 = (cls_105d8ab4 *)heap_alloc((void *)0x24), param_1 != (cls_105d8ab4 *)0x0)) {
    cls_105bde1c_new((cls_105bde1c *)param_1);
    ((cls_105bde1c *)param_1)->field_0x8 = (uintptr_t)((void *)0x105d8ab4/*ROM*/);
  }
  return (cls_105bde1c *)param_1;
}
