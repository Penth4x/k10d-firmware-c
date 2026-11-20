/* @k10d cls_10621600_new @ 0x10535b76
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x10621600; returns param_1)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10621600 (vtable 0x10621600, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x10621600; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105bde1c * cls_10621600_new(cls_10621600 *param_1)

{
  if ((param_1 != (cls_10621600 *)0x0) ||
     (param_1 = (cls_10621600 *)heap_alloc((void *)0x24), param_1 != (cls_10621600 *)0x0)) {
    cls_105bde1c_new((cls_105bde1c *)param_1);
    ((cls_105bde1c *)param_1)->field_0x8 = (uint32_t)&DAT_10621600;
  }
  return (cls_105bde1c *)param_1;
}
