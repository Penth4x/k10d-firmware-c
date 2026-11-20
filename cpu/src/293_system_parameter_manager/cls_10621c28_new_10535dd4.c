/* @k10d cls_10621c28_new_10535dd4 @ 0x10535dd4
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x10621c28; returns param_1)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10621c28 (vtable 0x10621c28, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x10621c28; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10621c28_new_10535dd4(cls_10621c28 *param_1)

{
  if ((param_1 != (cls_10621c28 *)0x0) ||
     (param_1 = (cls_10621c28 *)heap_alloc((void *)4), param_1 != (cls_10621c28 *)0x0)) {
    param_1->field_0x0 = (uint32_t)&DAT_10621c28;
  }
  return;
}
