/* @k10d cls_1062190c_new @ 0x10535bfa
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x1062190c; returns param_1)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1062190c (vtable 0x1062190c, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x1062190c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_1062190c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x18), param_1 != (uint32_t *)0x0)) {
    cls_105bbbb4_new(param_1);
    param_1[5] = (uint32_t)&DAT_1062190c;
  }
  return (int)param_1;
}
